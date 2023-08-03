const int potPin = 34;
const int ledPin = 22;
const int ledPin2 = 23;
const int ledPin3 = 25;
int potValue = 0;

void setup() {
  Serial.begin(115200);
  delay(1000);
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);

}

void loop() {
  int potValue = analogRead(potPin);
  int analogValue = analogRead(potPin);
  int volume = map(analogValue, 0, 4095, 0, 100);

  Serial.println(volume);
if (volume < 30){
digitalWrite(ledPin, HIGH);
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin3, LOW);
delay(0);
}
if(volume >= 30 && volume < 80){
digitalWrite(ledPin, LOW);
digitalWrite(ledPin2, HIGH);
digitalWrite(ledPin3, LOW);
delay(0);
}
if(volume >= 80){
digitalWrite(ledPin, LOW);
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin3, HIGH);
delay(0);
}
}
