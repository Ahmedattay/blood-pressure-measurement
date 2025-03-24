// Blood Pressure Simulation System
// Author: [Ahmed Attay]
// Description: Simulates blood pressure measurement using a pump, pulse detection via a microphone sensor, 
// and a buzzer that mimics heartbeat sounds.

#define MIC_PIN A0    // Analog pin for microphone (simulated pulse sensor)
#define BUZZER_PIN 11 // Digital pin for buzzer

#define THRESHOLD 28  // Pulse detection threshold
#define PUMP_IN1 7     // Pump Control 1
#define PUMP_IN2 8     // Pump Control 2
#define PUMP_EN 3      // Pump Enable (PWM)

bool pumpFinished = false;  // Tracks if the pump cycle is done
bool pulseDetected = false; // Tracks if a pulse has been detected (ignores further readings)
unsigned long pumpStartTime = 0;   // Stores pump start time
unsigned long pulseStartTime = 0;  // Stores pulse detection time

void setup() {
    Serial.begin(9600);

    pinMode(BUZZER_PIN, OUTPUT);
    pinMode(PUMP_EN, OUTPUT);
    pinMode(PUMP_IN1, OUTPUT);
    pinMode(PUMP_IN2, OUTPUT);

    // Start inflating the BP cuff
    digitalWrite(PUMP_IN1, HIGH);
    digitalWrite(PUMP_IN2, LOW);
    analogWrite(PUMP_EN, 255); // Full power

    pumpStartTime = millis(); // Record start time
    Serial.println("Blood Pressure Measurement Started...");
}

void loop() {
    unsigned long currentTime = millis();

    // PUMP ON for 10 SECONDS
    if (!pumpFinished && currentTime - pumpStartTime < 10000) {
        Serial.println("Inflating...");
        return;
    }

    // After 10s, stop the pump & wait for pulse detection
    if (!pumpFinished) {
        Serial.println("Pump OFF, Waiting for Pulse...");
        stopPump();
        pumpFinished = true;
    }

    // Process Pulse Detection
    if (!pulseDetected) {
        int micValue = analogRead(MIC_PIN);
        Serial.print("Mic Value: ");
        Serial.println(micValue);

        if (micValue > THRESHOLD) {
            Serial.println("Pulse Detected!");
            pulseDetected = true;  // Stop further readings
            pulseStartTime = millis(); // Start pulse sound duration

            // Mimic heartbeat sound for 3 seconds
            while (millis() - pulseStartTime < 3000) {
                heartbeatSound();
            }
        }
    }

    // After pulse detection, print BP result once
    if (pulseDetected && millis() - pulseStartTime > 3000) {
        Serial.println("Final BP: 120/80");
        
        // Freeze system after displaying result
        while (true);
    }

    delay(50);
}

// Function to Stop Pump
void stopPump() {
    digitalWrite(PUMP_IN1, LOW);
    digitalWrite(PUMP_IN2, LOW);
    analogWrite(PUMP_EN, 0); // Turn off pump
}

// Function to Create Heartbeat Sound
void heartbeatSound() {
    digitalWrite(BUZZER_PIN, HIGH);
    delay(100);
    digitalWrite(BUZZER_PIN, LOW);
    delay(100);

    digitalWrite(BUZZER_PIN, HIGH);
    delay(200);
    digitalWrite(BUZZER_PIN, LOW);
    delay(900); // Space before next cycle
}
