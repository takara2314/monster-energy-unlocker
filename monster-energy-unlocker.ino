#include <Servo.h>

Servo locker;

#define SERVO_PIN 11
#define RED_LED_PIN 13
#define GREEN_LED_PIN 12
#define BUTTON_PIN 8
#define WAIT_TIME 60

int buttonState;

void setup() {
    locker.attach(SERVO_PIN);
    pinMode(RED_LED_PIN, OUTPUT);
    pinMode(GREEN_LED_PIN, OUTPUT);
    pinMode(BUTTON_PIN, INPUT);

    locker.write(0);
    digitalWrite(RED_LED_PIN, HIGH);
    digitalWrite(GREEN_LED_PIN, LOW);
}

void loop() {
    buttonState = digitalRead(BUTTON_PIN);

    if (buttonState == 1) {
       delay(WAIT_TIME * 1000);
       locker.write(90);
       digitalWrite(RED_LED_PIN, LOW);
       digitalWrite(GREEN_LED_PIN, HIGH);
    }
}
