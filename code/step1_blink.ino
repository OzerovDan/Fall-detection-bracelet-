// Step 1: Basic LED alert indicator test on Arduino Uno
// Simulates the visual alarm signal for the fall-detection bracelet

void setup() {
// Initialize digital pin 13 as an output
pinMode(13, OUTPUT);
}

void loop() {
digitalWrite(13, HIGH); // Turn the LED on (alarm state)
delay(1000); // Wait for 1 second
digitalWrite(13, LOW); // Turn the LED off
delay(1000); // Wait for 1 second
}
