# 🩺 Blood Pressure Simulation System

An **Arduino-based Blood Pressure Simulation System** that mimics the process of measuring blood pressure using a **pump, microphone sensor, and buzzer**. This project demonstrates **signal processing, motor control, and real-time data monitoring**.

---

## 📌 Features

✔ **Automatic Pump Control** – The system inflates a simulated BP cuff for a fixed duration.  
✔ **Pulse Detection** – Uses a microphone sensor to detect pulse signals.  
✔ **Heartbeat Sound Simulation** – A buzzer mimics realistic heartbeat sounds.  
✔ **Simulated BP Reading** – Displays a fixed **120/80 mmHg** result.  
✔ **Serial Monitor Feedback** – Prints real-time status updates.  
✔ **Microcontroller-Based System** – Powered by **Arduino**.

---

## ⚙️ How It Works

1️⃣ The **pump turns ON** for **10 seconds** to inflate the BP cuff.  
2️⃣ After **10 seconds**, the pump **turns OFF** and waits for a pulse signal.  
3️⃣ Once a **pulse is detected**, the buzzer **mimics a heartbeat sound**.  
4️⃣ After the heartbeat simulation, the system **displays a BP reading of 120/80 mmHg**.  
5️⃣ The program **halts execution** after displaying the result.

---

## 🔧 Hardware Components

- **Arduino Board** (e.g., Uno, Mega, or Nano)
- **Microphone Sensor** (Analog pulse detection)
- **Buzzer** (Simulated heartbeat sound)
- **Motor Driver** (Controls the air pump)
- **Air Pump** (BP cuff inflation)
- **Power Supply** (Depends on the components used)

---

## 🖥️ Code Structure

- **`setup()`** – Initializes components and starts the pump.  
- **`loop()`** – Controls the pump, reads pulse values, and triggers the buzzer.  
- **`heartbeatSound()`** – Generates a realistic heartbeat sound using a buzzer.

---

## 🚀 Getting Started

### 1️⃣ **Wiring Instructions**
Connect the components to the Arduino as follows:

| Component        | Arduino Pin  |
|-----------------|-------------|
| Microphone      | `A0`        |
| Buzzer          | `11`        |
| Pump Control 1  | `7`         |
| Pump Control 2  | `8`         |
| Pump Enable (PWM) | `3`       |

### 2️⃣ **Upload the Code**
- Install the **Arduino IDE**.
- Copy and upload the provided **C++ code** to your **Arduino board**.
- Open the **Serial Monitor (9600 baud rate)** to see real-time updates.

---

## 🎯 Applications

🔹 **Medical Device Prototyping** – Understanding BP measurement logic.  
🔹 **Educational Purposes** – Demonstrating BP monitoring concepts.  
🔹 **Embedded Systems Practice** – Working with **motor control & sensors**.  

---

## 📜 License

This project is open-source and available under the **MIT License**.

💡 *Feel free to modify and improve this project!* 🚀  
