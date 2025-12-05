#include <BleKeyboard.h>

BleKeyboard bleKeyboard("ESP32 C3 Macro", "Ufuk", 100);

// GPIO pins
#define BTN_VOL_DOWN   0   // Ses azalt
#define BTN_VOL_UP      1   // Ses arttır
#define BTN_COPY        2   // CMD + C
#define BTN_PASTE       3   // CMD + V
#define BTN_UNDO        4   // CMD + Z
#define BTN_SAVE        5   // CMD + S
#define BTN_TAB         6   // Tab
#define BTN_ESC         7   // Esc
#define BTN_ENTER       8   // Enter
#define BTN_MEDIA_NEXT  9   // Next track
#define BTN_MEDIA_PREV 10   // Previous track

void setup() {
  Serial.begin(115200);

  pinMode(BTN_VOL_DOWN,   INPUT_PULLUP);
  pinMode(BTN_VOL_UP,     INPUT_PULLUP);
  pinMode(BTN_COPY,       INPUT_PULLUP);
  pinMode(BTN_PASTE,       INPUT_PULLUP);
  pinMode(BTN_UNDO,       INPUT_PULLUP);
  pinMode(BTN_SAVE,       INPUT_PULLUP);
  pinMode(BTN_TAB,        INPUT_PULLUP);
  pinMode(BTN_ESC,        INPUT_PULLUP);
  pinMode(BTN_ENTER,      INPUT_PULLUP);
  pinMode(BTN_MEDIA_NEXT, INPUT_PULLUP);
  pinMode(BTN_MEDIA_PREV, INPUT_PULLUP);

  bleKeyboard.begin();
}

void loop() {

  if (!bleKeyboard.isConnected()) {
    Serial.println("Waiting for connection...");
    delay(500);
    return;
  }

  // 0 - Ses azalt
  if (digitalRead(BTN_VOL_DOWN) == LOW) {
    bleKeyboard.write(KEY_MEDIA_VOLUME_DOWN);
    Serial.println("Volume -");
    delay(300);
  }

  // 1 - Ses arttır
  if (digitalRead(BTN_VOL_UP) == LOW) {
    bleKeyboard.write(KEY_MEDIA_VOLUME_UP);
    Serial.println("Volume +");
    delay(300);
  }

  // 2 - CMD + C
  if (digitalRead(BTN_COPY) == LOW) {
    bleKeyboard.press(KEY_LEFT_GUI);   // ⌘
    bleKeyboard.press('c');
    bleKeyboard.releaseAll();
    Serial.println("CMD + C");
    delay(300);
  }

  // 3 - CMD + V
  if (digitalRead(BTN_PASTE) == LOW) {
    bleKeyboard.press(KEY_LEFT_GUI);   // ⌘
    bleKeyboard.press('v');
    bleKeyboard.releaseAll();
    Serial.println("CMD + V");
    delay(300);
  }

  // 4 - CMD + Z
  if (digitalRead(BTN_UNDO) == LOW) {
    bleKeyboard.press(KEY_LEFT_GUI);   // ⌘
    bleKeyboard.press('z');
    bleKeyboard.releaseAll();
    Serial.println("CMD + Z");
    delay(300);
  }

  // 5 - CMD + S
  if (digitalRead(BTN_SAVE) == LOW) {
    bleKeyboard.press(KEY_LEFT_GUI);   // ⌘
    bleKeyboard.press('s');
    bleKeyboard.releaseAll();
    Serial.println("CMD + S");
    delay(300);
  }

  // 6 - TAB
  if (digitalRead(BTN_TAB) == LOW) {
    bleKeyboard.write(KEY_TAB);
    Serial.println("TAB");
    delay(300);
  }

  // 7 - ESC
  if (digitalRead(BTN_ESC) == LOW) {
    bleKeyboard.write(KEY_ESC);
    Serial.println("ESC");
    delay(300);
  }

  // 8 - ENTER
  if (digitalRead(BTN_ENTER) == LOW) {
    bleKeyboard.write(KEY_RETURN);
    Serial.println("ENTER");
    delay(300);
  }

  // 9 - Next track
  if (digitalRead(BTN_MEDIA_NEXT) == LOW) {
    bleKeyboard.write(KEY_MEDIA_NEXT_TRACK);
    Serial.println("NEXT");
    delay(300);
  }

  // 10 - Previous track
  if (digitalRead(BTN_MEDIA_PREV) == LOW) {
    bleKeyboard.write(KEY_MEDIA_PREVIOUS_TRACK);
    Serial.println("PREVIOUS");
    delay(300);
  }
}
