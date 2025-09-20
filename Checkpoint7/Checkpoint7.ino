// Definición de pines
const int LED_ROJO_PEATON      = 2;
const int LED_VERDE_PEATON     = 3;
const int LED_ROJO_TRAFICO     = 4;
const int LED_AMARILLO_TRAFICO = 5;
const int LED_VERDE_TRAFICO    = 6;

void setup() {
  pinMode(LED_ROJO_PEATON, OUTPUT);
  pinMode(LED_VERDE_PEATON, OUTPUT);
  pinMode(LED_ROJO_TRAFICO, OUTPUT);
  pinMode(LED_AMARILLO_TRAFICO, OUTPUT);
  pinMode(LED_VERDE_TRAFICO, OUTPUT);

  digitalWrite(LED_ROJO_PEATON, LOW);
  digitalWrite(LED_VERDE_PEATON, LOW);
  digitalWrite(LED_ROJO_TRAFICO, LOW);
  digitalWrite(LED_AMARILLO_TRAFICO, LOW);
  digitalWrite(LED_VERDE_TRAFICO, LOW);
}

void loop() {
  digitalWrite(LED_ROJO_TRAFICO, HIGH);
  digitalWrite(LED_VERDE_PEATON, HIGH);
  delay(8000);
  digitalWrite(LED_ROJO_TRAFICO, LOW);

  digitalWrite(LED_VERDE_PEATON, LOW);
  digitalWrite(LED_ROJO_PEATON, HIGH);
  digitalWrite(LED_VERDE_TRAFICO, HIGH);
  delay(4000);
  digitalWrite(LED_VERDE_TRAFICO, LOW);

  digitalWrite(LED_AMARILLO_TRAFICO, HIGH);
  delay(2000);
  digitalWrite(LED_AMARILLO_TRAFICO, LOW);
  digitalWrite(LED_ROJO_PEATON, LOW);
}
