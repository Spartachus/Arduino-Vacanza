const int buttonPin1 = 8;  // the number of the pushbutton pin
const int buttonPin2 = 9;  // the number of the pushbutton pin

const int ledPin1 = 13;    // the number of the LED pin
const int ledPin2 = 11;    // the number of the LED pin



// variables will change:
int buttonState1 = 0;  // variable for reading the pushbutton status
int buttonState2 = 0;
void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState1 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin1, LOW);
    delay(1000);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin1, LOW);
    delay(1000);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin1, LOW);
    delay(1000);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin1, LOW);
    delay(1000);
  } else if (buttonState2 == HIGH){
    // turn LED off:
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin2, LOW);
    delay(1000);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin2, LOW);
    delay(1000);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin2, LOW);
    delay(1000);    
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin2, LOW);
    delay(1000);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin2, LOW);
    delay(1000);
  }
}
