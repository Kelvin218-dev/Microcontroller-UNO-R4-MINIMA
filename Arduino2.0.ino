int ledPin = 8;   
int buzzerPin = 7;
int blinkDelayTime = 300;
int sequencePause = 500;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void blinkLed(int times, int delayTime) {
  for (int i = 0; i < times; i++) {
    digitalWrite(ledPin, HIGH);
    delay(delayTime);
    digitalWrite(ledPin, LOW);
    delay(delayTime);
  }
}

// Beep the buzzer
void beepBuzzer(int times, int duration) {
  for (int i = 0; i < times; i++) {
    digitalWrite(buzzerPin, HIGH);
    delay(duration);
    digitalWrite(buzzerPin, LOW);
    delay(duration);
  }
}


void alarmRoutine() {
  
  blinkLed(3, 200);
  beepBuzzer(3, 150);
  digitalWrite(ledPin, HIGH);
  digitalWrite(buzzerPin, HIGH);
  delay(300);
  digitalWrite(ledPin, LOW);
  digitalWrite(buzzerPin, LOW);
}

void loop() {
  alarmRoutine();
  delay(sequencePause);
}