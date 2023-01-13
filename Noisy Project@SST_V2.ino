//SD Card initialisation
#include <SPI.h>
#include <SD.h>
File myFile;

//Arduino Microphone initialisation
const int OUT_PIN = 8;
const int SAMPLE_TIME = 10;
unsigned long millisCurrent;
unsigned long millisLast = 0;
unsigned long millisElapsed = 0;
int sampleBufferValue = 0;


void setup(){ 
  Serial.begin(9600);
  while (!Serial) {
  ; // wait for serial port to connect. Needed for native USB port only
  }
  Serial.print("Initializing SD card...");
  if (!SD.begin(10)) {
  Serial.println("initialization failed!");
  while (1);
  }
  Serial.println("initialization done.");
  // open the file for reading:
  myFile = SD.open("test.txt");
  if (myFile) {
  Serial.println("test.txt:");
  // read from the file until there's nothing else in it:
  while (myFile.available()) {
  Serial.write(myFile.read());
  }
  // close the file:
  myFile.close();
  } else {
  // if the file didn't open, print an error:
  Serial.println("error opening test.txt");
  }
  }

void loop() {
  millisCurrent = millis();
  millisElapsed = millisCurrent - millisLast;

  if (digitalRead(OUT_PIN) == LOW) {
    sampleBufferValue++;
  }
 
  if (millisElapsed > SAMPLE_TIME) {
    Serial.println(sampleBufferValue);
    sampleBufferValue = 0;
    millisLast = millisCurrent;
    }
}