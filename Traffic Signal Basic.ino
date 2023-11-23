void setup() {

#define PIN_RED    2 // The Arduino pin connected to R pin of traffic light module
#define PIN_YELLOW 3 // The Arduino pin connected to Y pin of traffic light module
#define PIN_GREEN  4 // The Arduino pin connected to G pin of traffic light module

#define RED_TIME     4000 // RED time in millisecond
#define YELLOW_TIME  4000 // YELLOW time in millisecond
#define GREEN_TIME   4000 // GREEN time in millisecond

void setup() {
  pinMode(PIN_RED, OUTPUT);
  pinMode(PIN_YELLOW, OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // red light on
  digitalWrite(PIN_RED, HIGH);   // turn on
  digitalWrite(PIN_YELLOW, LOW); // turn off
  digitalWrite(PIN_GREEN, LOW);  // turn off
  delay(RED_TIME); // keep red light on during a period of time

  // yellow light on
  digitalWrite(PIN_RED, LOW);    // turn off
  digitalWrite(PIN_YELLOW, HIGH); // turn on
  digitalWrite(PIN_GREEN, LOW); // turn off
  delay(YELLOW_TIME); // keep yellow light on during a period of time

  // green light on
  digitalWrite(PIN_RED, LOW);    // turn off
  digitalWrite(PIN_YELLOW, LOW); // turn off
  digitalWrite(PIN_GREEN, HIGH); // turn on
  delay(GREEN_TIME); // keep green light on during a period of time
}

