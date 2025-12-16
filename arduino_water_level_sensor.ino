void setup() {
  Serial.begin(9600);
  pinMode(powerPin, OUTPUT);
  pinMode(sensorPin, INPUT); 
}

void loop() {
  digitalWrite(powerPin, HIGH); // Enable sensor power
  delay(10); // Give the sensor a moment to warm up
  val = analogRead(sensorPin); // Take a reading from the sensor
  digitalWrite(powerPin, LOW); // Disable sensor power
  Serial.println(val); // Write out the reading now
  delay(200); // Wait between readings
}
