#define TEST_LED LED_BLUE

void setup() {
  // Wait for SerialUSB or 10 seconds
  while ((!SerialUSB) && (millis() < 10000));
  SerialUSB.println("Serial monitor opened...");
  pinMode(TEST_LED, OUTPUT);
}

void setupLight(int value) {
  digitalWrite(TEST_LED, value);
}

void loop() {
  setupLight(HIGH);
  SerialUSB.println("...");
  delay(500);
  setupLight(LOW);
  SerialUSB.println("---");
  delay(500);
}
