#define LED_PIN 0

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN, LOW);
  ESP.deepSleep(6e6);
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  
}
