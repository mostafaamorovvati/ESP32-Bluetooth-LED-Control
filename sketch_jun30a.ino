#include "BluetoothSerial.h"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled for this board! Check Tools > Board and make sure an ESP32 board is selected.
#endif

BluetoothSerial SerialBT;

#define LED_PIN 2  

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  SerialBT.begin("ESP32_LED"); 
  Serial.println("Bluetooth Enabled. Waiting for connection...");
}

void loop() {
  if (SerialBT.available()) {
    char incoming = SerialBT.read();
    Serial.print("Received: ");
    Serial.println(incoming);

    if (incoming == '1') {
      digitalWrite(LED_PIN, HIGH);
      SerialBT.println("LED Turned On");
    } else if (incoming == '0') {
      digitalWrite(LED_PIN, LOW);
      SerialBT.println("LED Turned Off");
    }
  }
  delay(20);
}
