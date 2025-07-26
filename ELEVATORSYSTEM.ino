#define run 6
#define dir 46

#define PB_01 2
#define PB_02 3
#define PB_03 18
#define S1 19
#define S2 16
#define S3 17


void setup() {

  pinMode(dir, OUTPUT);
  pinMode(run, OUTPUT);

  pinMode(S1, INPUT_PULLUP);
  pinMode(S2, INPUT_PULLUP);
  pinMode(S3, INPUT_PULLUP);
  pinMode(PB_01, INPUT_PULLUP);
  pinMode(PB_02, INPUT_PULLUP);
  pinMode(PB_03, INPUT_PULLUP);
}
int b = 1;
void loop() {
  if (b == 1) {
    digitalWrite(dir, LOW);
    digitalWrite(run, LOW);
    b = 2;
  }
  if (b == 2) {
    if (digitalRead(PB_01) == 0) {
      b = 3;
    } else {
      b = 6;
    }
  }

  if (b == 3) {
    if (digitalRead(S1) == 0) {
      b = 1;
    } else {
      b = 4;
    }
  }
  if (b == 4) {
    digitalWrite(dir, LOW);
    digitalWrite(run, HIGH);
    b = 5;
  }
  if (b == 5) {
    if (digitalRead(S1) == 0) {
      b = 1;
    }
  }
  if (b == 6) {
    if (digitalRead(PB_02) == 0) {
      b = 7;
    } else {
      b = 12;
    }
  }
  if (b == 7) {
    if (digitalRead(S1) == 0) {
      b = 8;
    } else {
      b = 10;
    }
  }
  if (b == 8) {
    digitalWrite(dir, HIGH);
    digitalWrite(run, HIGH);
    b = 9;
  }
  if (b == 9) {
    if (digitalRead(S2) == 1) {
      b = 1;
    }
  }
  if (b == 10) {
    if (digitalRead(S3) == 1) {
      b = 11;
    } else {
      b = 1;
    }
  }
  if (b == 11) {
    digitalWrite(dir, LOW);
    digitalWrite(run, HIGH);
    b = 9;
  }
  if (b == 12) {
    if (digitalRead(PB_03) == 0) {
      b = 13;
    } else {
      b = 1;
    }
  }
  if (b == 13) {
    if (digitalRead(S3) == 1) {
      b = 1;
    } else {
      b = 14;
    }
  }
  if (b == 14) {
    digitalWrite(dir, HIGH);
    digitalWrite(run, HIGH);
    b = 15;
  }
  if (b == 15) {
    if (digitalRead(S3) == 1) {
      b = 1;
    }
  }
}
