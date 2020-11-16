// ハッピーバースデートゥーユーを演奏する
// 楽譜: https://youtu.be/mbNPjBsLC08
void play() {
    scaleSo(BUZZER_PIN, 500, 50);
    scaleSo(BUZZER_PIN, 200, 20);
    scaleRa(BUZZER_PIN, 500, 20);
    scaleSo(BUZZER_PIN, 300, 100);

    scaleDoHi(BUZZER_PIN, 500, 30);
    scaleSi(BUZZER_PIN, 500, 200);

    scaleSo(BUZZER_PIN, 500, 50);
    scaleSo(BUZZER_PIN, 200, 20);
    scaleRa(BUZZER_PIN, 500, 20);
    scaleSo(BUZZER_PIN, 300, 100);

    scaleReHi(BUZZER_PIN, 500, 30);
    scaleDoHi(BUZZER_PIN, 500, 200);

    scaleSo(BUZZER_PIN, 500, 50);
    scaleSo(BUZZER_PIN, 200, 20);
    scaleSoHi(BUZZER_PIN, 500, 20);
    scaleMiHi(BUZZER_PIN, 400, 100);

    scaleDoHi(BUZZER_PIN, 400, 50);
    scaleDoHi(BUZZER_PIN, 200, 70);

    scaleSi(BUZZER_PIN, 400, 30);
    scaleRa(BUZZER_PIN, 400, 200);

    scaleFaHi(BUZZER_PIN, 500, 50);
    scaleFaHi(BUZZER_PIN, 200, 20);
    scaleMiHi(BUZZER_PIN, 500, 20);
    scaleDoHi(BUZZER_PIN, 300, 200);

    scaleReHi(BUZZER_PIN, 500, 30);
    scaleDoHi(BUZZER_PIN, 500, 0);
}

// 音階ド
void scaleDo(const int PIN, int time, int sleepTime) {
    tone(PIN, 523, time);
    delay(time);
    delay(sleepTime);
}

// 音階レ
void scaleRe(const int PIN, int time, int sleepTime) {
    tone(PIN, 587, time);
    delay(time);
    delay(sleepTime);
}

// 音階ミ
void scaleMi(const int PIN, int time, int sleepTime) {
    tone(PIN, 659, time);
    delay(time);
    delay(sleepTime);
}

// 音階ファ
void scaleFa(const int PIN, int time, int sleepTime) {
    tone(PIN, 698, time);
    delay(time);
    delay(sleepTime);
}

// 音階ソ
void scaleSo(const int PIN, int time, int sleepTime) {
    tone(PIN, 784, time);
    delay(time);
    delay(sleepTime);
}

// 音階ラ
void scaleRa(const int PIN, int time, int sleepTime) {
    tone(PIN, 880, time);
    delay(time);
    delay(sleepTime);
}

// 音階シ
void scaleSi(const int PIN, int time, int sleepTime) {
    tone(PIN, 988, time);
    delay(time);
    delay(sleepTime);
}

// 音階ド↑
void scaleDoHi(const int PIN, int time, int sleepTime) {
    tone(PIN, 1047, time);
    delay(time);
    delay(sleepTime);
}

// 音階レ↑
void scaleReHi(const int PIN, int time, int sleepTime) {
    tone(PIN, 1175, time);
    delay(time);
    delay(sleepTime);
}

// 音階ミ↑
void scaleMiHi(const int PIN, int time, int sleepTime) {
    tone(PIN, 1319, time);
    delay(time);
    delay(sleepTime);
}

// 音階ファ↑
void scaleFaHi(const int PIN, int time, int sleepTime) {
    tone(PIN, 1397, time);
    delay(time);
    delay(sleepTime);
}

// 音階ソ↑
void scaleSoHi(const int PIN, int time, int sleepTime) {
    tone(PIN, 1568, time);
    delay(time);
    delay(sleepTime);
}
