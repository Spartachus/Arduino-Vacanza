const int ledPinR1 = 13;    // the number of the LED pin
const int ledPinY1 = 12;    // the number of the LED pin
const int ledPinG1 = 11;    // the number of the LED pin

const int ledPinR2 = 7;    // the number of the LED pin
const int ledPinY2 = 6;    // the number of the LED pin
const int ledPinG2 = 5;    // the number of the LED pin


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPinR1, OUTPUT);
  pinMode(ledPinY1, OUTPUT);
  pinMode(ledPinG1, OUTPUT);

  pinMode(ledPinR2, OUTPUT);
  pinMode(ledPinY2, OUTPUT);
  pinMode(ledPinG2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPinR1, HIGH);
  digitalWrite(ledPinG2, HIGH);
  delay(15000);
  digitalWrite(ledPinY2, HIGH);
  digitalWrite(ledPinG2, LOW);
  delay(5000);
  digitalWrite(ledPinY2, LOW);
  digitalWrite(ledPinR2, HIGH);
  digitalWrite(ledPinR1, LOW);
  digitalWrite(ledPinG1, HIGH);
  delay(15000);
  digitalWrite(ledPinY1, HIGH);
  digitalWrite(ledPinG1, LOW);
  delay(5000);
  digitalWrite(ledPinY1, LOW);
  digitalWrite(ledPinR2, LOW);

}
