const unsigned char buttonPin = A11;
const int pinCount = 8;
const int timer = 600;
const int ledPins[pinCount] = {
  37, 36, 35, 34, 33, 32, 31, 30
};
int lastState = LOW;
int currentState;

void setup() {
  DDRC = 0xFF;
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH);
}

void loop() {
  currentState = digitalRead(buttonPin);
  if(lastState == HIGH && currentState == LOW){
    for (int thisPin = 7; thisPin >= 0; thisPin = thisPin - 2 ) {
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    digitalWrite(ledPins[thisPin], LOW);

  }
  for (int thisPin = 6; thisPin >= 0; thisPin = thisPin - 2 ) {
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    digitalWrite(ledPins[thisPin], LOW);

  }
  }
  lastState = currentState;
}
