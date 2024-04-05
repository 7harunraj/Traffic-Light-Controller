int red_led = 13;
int yellow_led = 12;
int green_led = 11;

void setup() {
  pinMode(red_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);
  pinMode(green_led, OUTPUT);

  digitalWrite(red_led, LOW);
  digitalWrite(yellow_led, LOW);
  digitalWrite(green_led, LOW);
}

void loop() {
  digitalWrite(red_led, HIGH);
  delay(10000);
  digitalWrite(red_led, LOW);

  digitalWrite(yellow_led, HIGH);
  delay(3000);
  digitalWrite(yellow_led, LOW);

  digitalWrite(green_led, HIGH);
  delay(10000);
  digitalWrite(green_led, LOW);

  digitalWrite(yellow_led, HIGH);
  delay(5000);
  digitalWrite(yellow_led, LOW);
}