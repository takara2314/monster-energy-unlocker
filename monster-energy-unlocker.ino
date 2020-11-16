#include <Servo.h>

Servo locker;

#define SERVO_PIN 11
#define RED_LED_PIN 13
#define GREEN_LED_PIN 12
#define BUZZER_PIN 10

void setup() {
    // サーボモーターを定義
    locker.attach(SERVO_PIN);
    pinMode(RED_LED_PIN, OUTPUT);
    pinMode(GREEN_LED_PIN, OUTPUT);
    pinMode(BUZZER_PIN, INPUT);

    // ロックし、赤LEDを点灯させる
    locker.write(0);
    digitalWrite(RED_LED_PIN, HIGH);
    digitalWrite(GREEN_LED_PIN, LOW);

    // 60秒待った後、演奏し、
    // ロック解除して緑LEDを点灯させる
    delay(60000UL);
    play();
    delay(1000);
    locker.write(90);
    digitalWrite(RED_LED_PIN, LOW);
    digitalWrite(GREEN_LED_PIN, HIGH);
}

void loop() {
    // None
}
