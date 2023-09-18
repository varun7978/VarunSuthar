void setup() {
  pinMode(3, INPUT);
  pinMode(6, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

  Serial.begin(9600);
  Serial.println("Started");
  }

void loop() {
  int p = digitalRead(3);
  int q = digitalRead(6);
if(p == 1 && q == 1)
{ Serial.println("Forward");
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
}
if(p == 1 && q == 0)
{ Serial.println("Right");
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
}
if(p == 0 && q == 1)
{ Serial.println("Left");
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
}
if(p == 0 && q == 0)
{ Serial.println("Stop");
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  delay(1000);
  Serial.println("Backward");
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  delay(3000);
  Serial.println("Right");
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
}
}