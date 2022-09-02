int rec;

void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {
    rec = Serial.read();
    if (rec == 'A') {
      digitalWrite(3, HIGH);

    }
    if (rec == 'B') {
      digitalWrite(4, HIGH);

    }
    if (rec == 'C') {
      digitalWrite(5, HIGH);

    }

}
