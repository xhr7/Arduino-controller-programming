#include <Servo.h>


Servo servo_7;


int i;

void setup() {
  servo_7.attach(7);


}

void loop() {
    for (i = 1; i <= 180; i++) {
      servo_7.write(i);
      delay(35);
    }
    for (i = 180; i >= 0; i--) {
      servo_7.write(i);
      delay(10);
    }

}
