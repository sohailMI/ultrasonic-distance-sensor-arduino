// Pin definitions
int trigPin = 9;
int echoPin = 8;
int buzzerPin = 11;  // NEW

// Variables
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);  // NEW
  Serial.begin(9600);
}

void loop() {
  // Trigger pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.0343 / 2;

  // Print distance
  if (distance <= 0 || distance > 400) {
    Serial.println("Out of range");
  } else {
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
  }

  // NEW — Buzzer logic
  if (distance > 0 && distance < 30) {
    tone(buzzerPin, 1000);   // buzzer ON at 1000Hz
  } else {
    noTone(buzzerPin);       // buzzer OFF
  }

  delay(500);
}