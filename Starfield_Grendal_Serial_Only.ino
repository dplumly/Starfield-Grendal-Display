
/*=================
Variables
*/=================
const int buttonPin = 2;
int count;
int i = 50;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int reading = digitalRead(buttonPin);

  if (reading == LOW) {
    Serial.println(i);
    count = i--;

    if (i <= 5) {
      Serial.println("change colors");

      for (int flash = 0; flash < 1; flash++) {
        Serial.println("black");
        delay(50);
        Serial.println("yellow");
      }

      if (i == 0) {
        i = 50;
        Serial.println("reload");
        delay(3000);
        reading = HIGH;
      }
      delay(100);
    }
  }
}

