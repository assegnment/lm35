const int sensorPin =A0;  // Analog pin A0 for LM35 temperature sensor
const int ledPin = 13;     // Digital pin 13 for onboard LED
int OUTPUT;
void setup() {
 // pinMode(ledPin, OUTPUT);
}

void loop() {
  int temperature;
  temperature =readTemperature();

  if (temperature < 30) {
    blinkLED(250);
  } else if (temperature > 30) {
    blinkLED(500);
  }
}

int readTemperature() {
  int sensorValue = analogRead(sensorPin);
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperatureC = (voltage - 0.5) * 100.0;
  return int(temperatureC);
}

void blinkLED(int delayTime) {
  digitalWrite(ledPin, 1);
  delay(delayTime);
  digitalWrite(ledPin, 0);
  delay(delayTime);
}