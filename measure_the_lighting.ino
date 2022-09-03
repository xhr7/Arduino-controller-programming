int rec;

void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);

}

void loop() {
    rec = analogRead(0);
    Serial.println(rec);
    Serial.print("\t");
    if (rec <= 350) {
      digitalWrite(11, HIGH);

    } else {
      digitalWrite(11, LOW);

    }

}
