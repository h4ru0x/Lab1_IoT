const int LED_1 =  2;
const int LED_2 =  3;

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
}

int retardo = 1000;
void loop() {
  if(retardo <= 100){
    retardo = 1000;
  }
  digitalWrite(LED_1, HIGH);
  delay(retardo);
  retardo= retardo - 50;
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  delay(retardo);
  retardo= retardo - 50;
  digitalWrite(LED_2, LOW);
}
