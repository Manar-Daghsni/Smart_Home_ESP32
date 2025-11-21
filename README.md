# 🏡 Smart Home — ESP32 + Blynk + Manual/Automatic Modes

This project is a connected smart home system using an **ESP32**, **Blynk IoT platform**, and multiple sensors.  
It allows controlling a lamp using **two modes**:

- 🖐️ **Manual Mode** — user controls lamp ON/OFF from the Blynk app  
- 🤖 **Automatic Mode** — lamp switches ON/OFF automatically based on sensor values  
  - Temperature values are shown LIVE in the Blynk app  

The full project includes real wiring, Proteus (ISIS) schematics and Blynk dashboard.

---

## 🚀 Features
- Remote lamp control through Blynk (WiFi)
- **Manual mode**: direct ON/OFF control
- **Automatic mode**: intelligent lamp control based on sensor readings
- Live **temperature evolution** displayed in the Blynk app
- ESP32 monitoring and data transmission
- Works both in simulation (Proteus) and real hardware

---

## 🔧 Control Modes

### 🖐️ Manual Mode
- User presses ON/OFF buttons in the Blynk app
- ESP32 activates the relay directly

### 🤖 Automatic Mode
- ESP32 reads sensor values (temperature)
- Decides when to turn the lamp ON or OFF
- Temperature evolution is updated *live* in the Blynk dashboard

---

## 🖼️ Project Images

### 🔌 Real Wiring  
![Real Wiring](media/real_wiring.png)

### 🖥️ Proteus (ISIS) Schematic   
![ISIS Wiring](media/isis_wiring.png)

### 📱 Blynk Dashboard   
![Blynk Dashboard](media/Blynk_dashboard.png)

---


## 📂 Project Structure

```text
smart-home-esp32/
│── firmware/
│   └── smart_home.ino
│
│── media/
│   ├── wiring-real.jpg
│   ├── wiring-isis.png
│   ├── blynk-dashboard.png
│   └── project-demo.mp4
│
│── docs/
│   ├── features.md
│   ├── modes.md
│   └── system-architecture.md
│
│── README.md

```

---

## 🛠️ Technologies Used
- ESP32  
- Blynk IoT Platform  
- Arduino IDE  
- C/C++  
- Sensors   
- Proteus (ISIS)  
- Relay module  

---
## 🎬 Demo

[Watch Project Demo](media/project-demo.mp4)

---

## 📧 Contact
**Manar Daghsni**  
📧 manardaghsni@gmail.com  
🔗 https://linkedin.com/in/daghsni-manar  

