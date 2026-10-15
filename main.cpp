int rojo = 8;
int amarillo = 9;
int verde = 10;

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {
  // 1. Verde encendido (3 segundos)
  digitalWrite(verde, HIGH);
  digitalWrite(amarillo, LOW);
  digitalWrite(rojo, LOW);
  delay(3000);
  
  // Apagamos el verde antes de iniciar el amarillo
  digitalWrite(verde, LOW);

  //  Amarillo parpadea 3 veces (Prende y apaga rápido)
  // Parpadeo 1
  digitalWrite(amarillo, HIGH); delay(300);
  digitalWrite(amarillo, LOW);  delay(300);
  // Parpadeo 2
  digitalWrite(amarillo, HIGH); delay(300);
  digitalWrite(amarillo, LOW);  delay(300);
  // Parpadeo 3
  digitalWrite(amarillo, HIGH); delay(300);
  digitalWrite(amarillo, LOW);  delay(300);

  // 3. Rojo encendido (4 segundos)
  digitalWrite(rojo, HIGH);
  delay(4000);
  
  // Apagamos el rojo antes de reiniciar el ciclo
  digitalWrite(rojo, LOW);
}
