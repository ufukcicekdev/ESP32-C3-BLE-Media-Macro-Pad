# ESP32-C3 BLE Macro & Media Keyboard for Mac

This project turns an **ESP32-C3** into a **Bluetooth Low Energy (BLE) macro keyboard** for macOS.  
Using physical buttons connected to GPIO pins **0–10**, you can trigger media keys and Mac shortcuts such as **volume control, copy/paste, Spotlight search, and lock screen**.

It is built for **makers, developers and content creators** who want a compact, customizable and wireless macro pad for their Mac setup.

---

## ✨ Main Features

- Works as a **Bluetooth keyboard on macOS**
- Media control support (Play/Pause, Volume Up/Down, Mute)
- macOS shortcut support using **Command (⌘)**
- 11 physical inputs using **GPIO 0 – GPIO 10**
- No "Dx" pins used — only raw GPIO numbers
- Ultra low latency for key response
- Fully customizable actions
- Plug & play after first pairing

**Device Name:** `ESP32 C3 Media`  
**Manufacturer:** `Ufuk`

---

## 🔘 Pin & Function Map

All buttons must be connected between the pin and **GND**  
Pins are configured as **INPUT_PULLUP**

| GPIO | Action |
|------|------|
| 0 | Volume Down |
| 1 | Volume Up |
| 2 | ⌘ + C (Copy) |
| 3 | ⌘ + V (Paste) |
| 4 | ⌘ + X (Cut) |
| 5 | ⌘ + Z (Undo) |
| 6 | Play / Pause |
| 7 | Next Track |
| 8 | Previous Track |
| 9 | ⌘ + Space (Spotlight) |
| 10 | ⌘ + Control + Q (Lock Screen) |

---

## 📚 Libraries Used

### 1. ESP32 BLE Keyboard

Main library used for BLE HID keyboard emulation.

- **Name:** ESP32 BLE Keyboard
- **Author:** T-vK
- **Version used:** **0.3.2**
- **GitHub:** https://github.com/T-vK/ESP32-BLE-Keyboard

Install from Arduino IDE:

📚 Libraries & Board Packages Used (Updated)
1. ESP32 BLE Keyboard Library

Main library used for BLE HID keyboard emulation.

Name: ESP32 BLE Keyboard

Author: T-vK

Version used: 0.3.2

GitHub: https://github.com/T-vK/ESP32-BLE-Keyboard

Installed via Arduino Library Manager.

2. ESP32 Board Package (VERY IMPORTANT)

This project was built and tested using:

Board Package: esp32 by Espressif Systems

Version used: 2.0.17

Install in Arduino IDE:

