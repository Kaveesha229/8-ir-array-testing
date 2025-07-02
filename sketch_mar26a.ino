// Define IR sensor pins
#define IR1 14
#define IR2 27
#define IR3 26
#define IR4 25
#define IR5 33
#define IR6 32
#define IR7 35
#define IR8 34

int irPins[8] = {IR1, IR2, IR3, IR4, IR5, IR6, IR7, IR8};

void setup() {
  Serial.begin(115200);
  
  // Set IR pins as input (only needed for digitalRead)
  for (int i = 0; i < 8; i++) {
    pinMode(irPins[i], INPUT);
  }
}

void loop() {
  Serial.print("IR values: ");
  for (int i = 0; i < 8; i++) {
    int value = analogRead(irPins[i]);  // Use digitalRead if output is digital
    Serial.print(value);
    Serial.print(" ");
  }
  Serial.println();
  delay(300);  // Delay for readability
}
