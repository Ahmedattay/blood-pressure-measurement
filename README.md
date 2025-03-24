# 🩺 Blood Pressure Monitor Simulation with Arduino

## 🚀 Overview  
This Arduino-based project simulates a **blood pressure monitor** using a **microphone** 🎤 as a pulse sensor, a **buzzer** 🔊 to mimic heartbeat sounds, and a **motor pump** 💨 controlled by an **H-Bridge** 🔁. The system inflates a cuff, detects the first pulse, and displays the **simulated BP reading** 📊.

## 🛠️ Components Used  
- **Arduino Board**  
- **Microphone Sensor** 🎤 (Simulated Pulse Detection)  
- **Buzzer** 🔊 (Mimics Heartbeat Sounds)  
- **Motor Pump** 💨  
- **H-Bridge Motor Driver** 🔁 (For Pump Control)  
- **Power Supply (5V/12V)** 🔋  

## ⚙️ How It Works  
1. **Pump Activation** – The motor pump inflates the cuff for **10 seconds**.  
2. **Pulse Detection** ❤️ – After inflation, the system **waits for a pulse signal**.  
3. **Heartbeat Sound** 🔊 – When a pulse is detected, the buzzer mimics **heartbeat sounds** for 3 seconds.  
4. **BP Display** 📊 – The system prints a **simulated BP reading (120/80)**.  

## 🛠️ Setup Diagram  
[Arduino] → [H-Bridge] → [Motor Pump] 💨
→ [Buzzer] 🔊
→ [Microphone Sensor] 🎤

## 📌 Features  
✅ Simulates **blood pressure measurement**  
✅ Uses a **microphone sensor** for pulse detection  
✅ **H-Bridge motor driver** controls the pump efficiently  
✅ Buzzer **mimics real heartbeat sounds**  
✅ Serial output for monitoring BP values  

## 🔧 Code Overview  
The code follows these steps:  
1. **Pump ON for 10 seconds** – The system inflates the cuff.  
2. **Stop Pump & Wait for Pulse** – After 10 seconds, the pump stops, and the system listens for a pulse.  
3. **Detect Pulse & Play Heartbeat Sound** – Once the pulse is detected, the buzzer plays a **heartbeat rhythm** for 3 seconds.  
4. **Display BP Reading** – A simulated BP result (`120/80`) is printed to the serial monitor.  

## 📌 Future Enhancements  
🔹 Add an **LCD display** 📟 to show BP readings  
🔹 Improve accuracy with **better sensors**  
🔹 Display data on a **mobile app** 📱  
## 📄 Report  
📌 **Full project documentation:** [Download Report](https://drive.google.com/file/d/14sesm3dKH9klgh98Rw6w9Gc2fg4KZ0NS/view?usp=sharing)  

## 👤 Author  
📌 **Ahmed Attay**  
🔗 [LinkedIn Profile](https://www.linkedin.com/in/ahmed-attay-173888252/)  

## 📜 License  
This project is open-source and free to use under the **MIT License**.  

---
👨‍💻 Developed for **Arduino-based medical simulations** 🏥  
🚀 Contribute to improve **real-world BP measurement techniques**!  
