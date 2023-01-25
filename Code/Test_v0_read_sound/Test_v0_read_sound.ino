#define sensorPin A0 // Analog input pin that the Sensor is attached to
void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);// initialize serial communications at 9600 bps:
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  delay(800);
}
