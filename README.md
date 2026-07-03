# ESP32 Bluetooth LED Control

A simple and beginner-friendly ESP32 project that demonstrates how to control an LED using Bluetooth Serial communication from a mobile device.

This project is part of **The CodeSmithy** channel, focusing on creative Android + IoT builds.

---

## 🚀 Features

- Bluetooth communication using ESP32
- Control an LED via mobile app or serial Bluetooth terminal
- Simple ON/OFF commands
- Real-time feedback from ESP32

---

## 🔧 Hardware Required

- ESP32 Development Board
- LED
- 220Ω resistor
- Breadboard
- Jumper wires

---

## 🔌 Circuit Diagram

- LED positive (long leg) → GPIO 2 (via 220Ω resistor)
- LED negative (short leg) → GND

> Note: GPIO 2 is used as the default LED pin in this project.

---

## 📱 How It Works

The ESP32 creates a Bluetooth device named: ESP32_LED
You can connect to it using any Bluetooth terminal app.

### Commands:

| Command | Action |
|--------|--------|
| `1` | Turn LED ON |
| `0` | Turn LED OFF |

---

## 💻 Code Explanation

- `BluetoothSerial` library is used for Bluetooth communication
- ESP32 listens for incoming Bluetooth data
- If received data is:
  - `'1'` → LED turns ON
  - `'0'` → LED turns OFF
- ESP32 sends feedback back to the mobile device

---

📲 How to Use
Upload code to ESP32 using Arduino IDE
Install a Bluetooth terminal app on your phone
Connect to ESP32_LED
Send:
1 → LED ON
0 → LED OFF
🎥 Related Video

👉 Coming soon on The CodeSmithy YouTube Channel

🧠 Future Improvements
Add multiple LED control
Control via Android app (custom UI)
Add WiFi control (ESP32 Web Server)
Add sensor integration
📌 Author

The CodeSmithy
Creative Android + IoT + Embedded Projects

