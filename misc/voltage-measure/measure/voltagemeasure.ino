void setup() {
	Serial.begin(9600);
}

void loop() {
	int sensorValue = analogRead(A0);
	float voltage = sensorValue * (3.7 / 1023.00);
	Serial.print("sensorValue = ");
	Serial.println(sensorValue);
	Serial.print("voltage = ");
	Serial.print(voltage);
	Serial.println(" V");
	delay(500);
}
