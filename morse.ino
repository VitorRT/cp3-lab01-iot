const int LED1 = 12;
const int LED2 = 13;
const int buzzer = 10;

void setup(){
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT); 
}

void loop(){
  victor_morse();
}

void led01() {
  digitalWrite(LED1, HIGH);
  delay(500);
  digitalWrite(LED1, LOW);
}

void led02() {
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED2, LOW);
}

void victor_morse() {
  // Meu nome em morse: ...- .. -.-. - --- .-.  

  tocarPonto();
  delay(0);
  tocarPonto();
  delay(0);
  tocarPonto();
  delay(0);
  tocarTraco();

  delay(1000);
  
  tocarPonto();
  delay(0);
  tocarPonto();

  delay(1000);

  tocarTraco();
  delay(0);
  tocarPonto();
  delay(0);
  tocarTraco();
  delay(0);
  tocarPonto();

  delay(1000);

  tocarTraco();
  
  delay(1000);
  
  tocarTraco();
  delay(0);
  tocarTraco();
  delay(0);
  tocarTraco();

  delay(1000);

  tocarPonto();
  delay(0);
  tocarTraco();
  delay(0);
  tocarPonto();
}

void tocarPonto() {
  digitalWrite(LED1, HIGH);
  delay(250);
  digitalWrite(LED1, LOW);
}

void tocarTraco() {
  digitalWrite(LED1, HIGH);
  delay(750);
  digitalWrite(LED1, LOW);
}

void tocarSom(int frequencia) {
  tone(buzzer, frequencia, 200); 
  delay(250); 
  noTone(buzzer);
}
