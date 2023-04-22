#include <Adafruit_NeoPixel.h>


// Define pins for PIR sensor and RGB LED strip
const int pirPin = D5;
const int ledCount = 60;
const int ledPin = D2;

// Define variables to store PIR sensor reading and RGB LED color
int pirState = LOW;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(ledCount, ledPin, NEO_GRB + NEO_KHZ800);

void setup() {
  // Set pin mode for PIR sensor
  pinMode(pirPin, INPUT);

  // Initialize RGB LED strip
  strip.begin();
  strip.show(); // Initialize all pixels to off

  // Start serial communication
  Serial.begin(9600);
  Serial.println("Ready!");
}

void loop() {
  // Read PIR sensor state
  pirState = digitalRead(pirPin);

  // Check if movement is detected
  if (pirState == HIGH) {
    // Set RGB LED color to red
    for (int i = 0; i < ledCount; i++) {
      strip.setPixelColor(i, strip.Color(158, 51, 153));
    }
    strip.show();
    delay(30000);
  } else {
    // Set RGB LED color to off
    for (int i = 0; i < ledCount; i++) {
      strip.setPixelColor(i, strip.Color(0, 0, 0));
    }
    strip.show();
  }

  // Print PIR sensor state to serial monitor
  Serial.println(pirState);

  // Delay for a short period to avoid reading the PIR sensor too frequently
  delay(500);
}
