#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Custom bitmap (24x24 pixel heart)
const uint8_t PROGMEM heartIcon[] = {
  0b00000000, 0b00000000, 0b00000000,
  0b00001111, 0b10011111, 0b00000000,
  0b00011111, 0b11111111, 0b10000000,
  0b00111111, 0b11111111, 0b11000000,
  0b01111111, 0b11111111, 0b11100000,
  0b01111111, 0b11111111, 0b11100000,
  0b11111111, 0b11111111, 0b11110000,
  0b11111111, 0b11111111, 0b11110000,
  0b11111111, 0b11111111, 0b11110000,
  0b01111111, 0b11111111, 0b11100000,
  0b01111111, 0b11111111, 0b11100000,
  0b00111111, 0b11111111, 0b11000000,
  0b00011111, 0b11111111, 0b10000000,
  0b00001111, 0b11111111, 0b00000000,
  0b00000111, 0b11111110, 0b00000000,
  0b00000011, 0b11111100, 0b00000000,
  0b00000001, 0b11111000, 0b00000000,
  0b00000000, 0b11110000, 0b00000000,
  0b00000000, 0b01100000, 0b00000000,
  0b00000000, 0b00000000, 0b00000000
};

void setup() {
  // Initialize the display
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3D)) { // the address 0x3d part can vary from port used and display used
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }

  // Clear the display buffer
  display.clearDisplay();

  // Draw the heart image
  display.drawBitmap(0, 0, heartIcon, 24, 24, WHITE);

  // Display text beside the image
  display.setTextSize(1);               // Text size
  display.setTextColor(WHITE);          // Text color
  display.setCursor(30, 0);             // Start at (30, 0)
  display.println(F("I <3 Arduino"));

  // Another line of text
  display.setCursor(30, 10);
  display.println(F("PCET'S PCU"));

  // Show everything on the display
  display.display();
}

void loop() {
  // Nothing to do here
}
