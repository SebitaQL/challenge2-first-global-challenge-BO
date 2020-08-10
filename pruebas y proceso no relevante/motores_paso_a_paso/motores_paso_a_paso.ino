//motor 1
int IN1_M1 = 8;      // pin digital 8 de Arduino a IN1 de modulo controlador
int IN2_M1 = 9;      // pin digital 9 de Arduino a IN2 de modulo controlador
int IN3_M1 = 10;     // pin digital 10 de Arduino a IN3 de modulo controlador
int IN4_M1 = 11;     // pin digital 11 de Arduino a IN4 de modulo controlador

//motor 2
int IN1_M2 = 50;      // pin digital 8 de Arduino a IN1 de modulo controlador
int IN2_M2 = 51;      // pin digital 9 de Arduino a IN2 de modulo controlador
int IN3_M2 = 52;     // pin digital 10 de Arduino a IN3 de modulo controlador
int IN4_M2 = 53;     // pin digital 11 de Arduino a IN4 de modulo controlador

int demora = 10;      // demora entre pasos, no debe ser menor a 10 ms.

void setup()
{
  pinMode(IN1_M1, OUTPUT);   // todos los pines como salida
  pinMode(IN2_M1, OUTPUT);
  pinMode(IN3_M1, OUTPUT);
  pinMode(IN4_M1, OUTPUT);
  pinMode(IN1_M2, OUTPUT);
  pinMode(IN2_M2, OUTPUT);
  pinMode(IN3_M2, OUTPUT);
  pinMode(IN4_M2, OUTPUT);
}

void loop()
{

  for (int i = 0; i < 512; i++) // 512*4 = 2048 pasos
  {
    digitalWrite(IN1_M1, HIGH);  // paso 1 
    digitalWrite(IN1_M2, HIGH);
    digitalWrite(IN2_M1, LOW);
    digitalWrite(IN2_M2, LOW);
    digitalWrite(IN3_M1, LOW);
    digitalWrite(IN3_M2, LOW);
    digitalWrite(IN4_M1, LOW);
    digitalWrite(IN4_M2, LOW);
    delay(demora);

    digitalWrite(IN1_M1, LOW); // paso 2
    digitalWrite(IN1_M2, LOW);
    digitalWrite(IN2_M1, HIGH);
    digitalWrite(IN2_M2, HIGH);
    digitalWrite(IN3_M1, LOW);
    digitalWrite(IN3_M2, LOW);
    digitalWrite(IN4_M1, LOW);
    digitalWrite(IN4_M2, LOW);
    delay(demora);

    digitalWrite(IN1_M1, LOW); // paso 3
    digitalWrite(IN1_M2, LOW);
    digitalWrite(IN2_M1, LOW);
    digitalWrite(IN2_M2, LOW);
    digitalWrite(IN3_M1, HIGH);
    digitalWrite(IN3_M2, HIGH);
    digitalWrite(IN4_M1, LOW);
    digitalWrite(IN4_M2, LOW);
    delay(demora);

    digitalWrite(IN1_M1, LOW); // paso 4
    digitalWrite(IN1_M2, LOW);
    digitalWrite(IN2_M1, LOW);
    digitalWrite(IN2_M2, LOW);
    digitalWrite(IN3_M1, LOW);
    digitalWrite(IN3_M2, LOW);
    digitalWrite(IN4_M1, HIGH);
    digitalWrite(IN4_M2, HIGH);
    delay(demora);
  }

  digitalWrite(IN1_M1, LOW); // detiene por 5 seg.
  digitalWrite(IN1_M2, LOW);
  digitalWrite(IN2_M1, LOW);
  digitalWrite(IN2_M2, LOW);
  digitalWrite(IN3_M1, LOW);
  digitalWrite(IN3_M2, LOW);
  digitalWrite(IN4_M1, LOW);
  digitalWrite(IN4_M2, LOW);
  delay(5000);

}
