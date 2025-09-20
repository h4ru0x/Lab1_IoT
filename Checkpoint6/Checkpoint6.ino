const int LED_ROJO    = 2;
const int LED_AZUL    = 3;
const int LED_VERDE   = 4;
const int LED_AMARILLO= 5;
const int BOTON = 6;

void setup() {
  pinMode(LED_ROJO, OUTPUT);
  pinMode(LED_AZUL, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARILLO, OUTPUT);
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_AZUL, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, LOW);
  pinMode(BOTON, INPUT_PULLUP); 
}

const int leds[4] = {LED_ROJO, LED_AZUL, LED_VERDE, LED_AMARILLO};

int idx = 0;     // LED actual
int dir = 1;     // Dirección (+1 adelante, -1 atrás)

void loop() {
  // Leer botón
  if (digitalRead(BOTON) == LOW) {
    dir = -dir;        // Invertir sentido
    delay(300);        // Pequeña pausa para evitar rebotes
  }

  // Encender LED actual
  digitalWrite(leds[idx], HIGH);
  delay(500);
  digitalWrite(leds[idx], LOW);

  // Avanzar índice según dirección
  idx += dir;

  // Control de límites
  if (idx > 3) idx = 0;
  if (idx < 0) idx = 3;
}




