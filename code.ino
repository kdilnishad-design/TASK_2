const int PIR_PIN = 13; const int LED_PIN = 2;

void setup() { Serial.begin(115200);

pinMode(PIR_PIN, INPUT); pinMode(LED_PIN, OUTPUT);

Serial.println("PIR Motion Detection System"); Serial.println("----------------------------"); }

void loop() {

int motionState = digitalRead(PIR_PIN);

if (motionState == HIGH) {

digitalWrite(LED_PIN, HIGH);

Serial.println("Motion detected! -> LED ON");
} else {

digitalWrite(LED_PIN, LOW);

Serial.println("No motion -> LED OFF");
}

delay(500); }
