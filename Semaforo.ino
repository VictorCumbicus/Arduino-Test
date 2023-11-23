int led_one = 10;
int led_two = 11;
int led_three = 12;
void setup() {
  pinMode (led_one, OUTPUT);
  pinMode (led_two, OUTPUT);
  pinMode (led_three, OUTPUT);

}

void loop() {
  digitalWrite (led_one, HIGH);
  delay (5000);
  digitalWrite (led_one, LOW);
  delay (500);
  digitalWrite (led_two, HIGH);
  delay (2000);
  digitalWrite (led_two, LOW);
  delay (500);
  digitalWrite (led_three, HIGH);
  delay (5000);
  digitalWrite (led_three, LOW);
  delay (500);

}
