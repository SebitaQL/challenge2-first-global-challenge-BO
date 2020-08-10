//motor 1
const int IN1_M1 = 8;      // pin digital 8 de Arduino a IN1 de modulo controlador
const int IN2_M1 = 9;      // pin digital 9 de Arduino a IN2 de modulo controlador
const int IN3_M1 = 10;     // pin digital 10 de Arduino a IN3 de modulo controlador
const int IN4_M1 = 11;     // pin digital 11 de Arduino a IN4 de modulo controlador

//motor 2
const int IN1_M2 = 50;      // pin digital 8 de Arduino a IN1 de modulo controlador
const int IN2_M2 = 51;      // pin digital 9 de Arduino a IN2 de modulo controlador
const int IN3_M2 = 52;     // pin digital 10 de Arduino a IN3 de modulo controlador
const int IN4_M2 = 53;     // pin digital 11 de Arduino a IN4 de modulo controlador

const int demora = 10;      // demora entre pasos, no debe ser menor a 10 ms.

const int BOT1 = 22;
const int BOT2 = 23;
const int LED1 = 24;
const int LED2 = 25;


void setup()
{
  Serial.begin(9600);
  
  pinMode(IN1_M1, OUTPUT);   // todos los pines como salida o entrada
  pinMode(IN2_M1, OUTPUT);
  pinMode(IN3_M1, OUTPUT);
  pinMode(IN4_M1, OUTPUT);
  
  pinMode(IN1_M2, OUTPUT);
  pinMode(IN2_M2, OUTPUT);
  pinMode(IN3_M2, OUTPUT);
  pinMode(IN4_M2, OUTPUT);

  pinMode(BOT1,INPUT);
  pinMode(BOT2,INPUT);
  
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
}

void loop()
{
  if(digitalRead(BOT1))
  {
    Serial.print("subiendo...\n");
    digitalWrite(LED1,1);
    digitalWrite(LED2,0);
    giroSub(1);
  }
  else if(digitalRead(BOT2))
  {
    Serial.print("bajando...\n");
    digitalWrite(LED1,0);
    digitalWrite(LED2,1);
    giroBaj(1);
  }
  else
  {
    digitalWrite(LED1,0);
    digitalWrite(LED2,0);
  }
  delay(20);
}

void giroSub(int a)
{
  for (int i = 0; i < a; i++)
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

    digitalWrite(IN1_M1, LOW); // detiene por 0.2 seg.
    digitalWrite(IN1_M2, LOW);
    digitalWrite(IN2_M1, LOW);
    digitalWrite(IN2_M2, LOW);
    digitalWrite(IN3_M1, LOW);
    digitalWrite(IN3_M2, LOW);
    digitalWrite(IN4_M1, LOW);
    digitalWrite(IN4_M2, LOW);
    delay(200);
  }
}

//________________________________________________________________
//________________________________________________________________

void giroSub(int a)
{
  for (int i = 0; i < a; i++)
  {
    digitalWrite(IN1_M1, LOW); // paso 4
    digitalWrite(IN1_M2, LOW);
    digitalWrite(IN2_M1, LOW);
    digitalWrite(IN2_M2, LOW);
    digitalWrite(IN3_M1, LOW);
    digitalWrite(IN3_M2, LOW);
    digitalWrite(IN4_M1, HIGH);
    digitalWrite(IN4_M2, HIGH);
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

    digitalWrite(IN1_M1, LOW); // paso 2
    digitalWrite(IN1_M2, LOW);
    digitalWrite(IN2_M1, HIGH);
    digitalWrite(IN2_M2, HIGH);
    digitalWrite(IN3_M1, LOW);
    digitalWrite(IN3_M2, LOW);
    digitalWrite(IN4_M1, LOW);
    digitalWrite(IN4_M2, LOW);
    delay(demora);
    
    digitalWrite(IN1_M1, HIGH);  // paso 1 
    digitalWrite(IN1_M2, HIGH);
    digitalWrite(IN2_M1, LOW);
    digitalWrite(IN2_M2, LOW);
    digitalWrite(IN3_M1, LOW);
    digitalWrite(IN3_M2, LOW);
    digitalWrite(IN4_M1, LOW);
    digitalWrite(IN4_M2, LOW);
    delay(demora);
    
    digitalWrite(IN1_M1, LOW); // detiene por 0.2 seg.
    digitalWrite(IN1_M2, LOW);
    digitalWrite(IN2_M1, LOW);
    digitalWrite(IN2_M2, LOW);
    digitalWrite(IN3_M1, LOW);
    digitalWrite(IN3_M2, LOW);
    digitalWrite(IN4_M1, LOW);
    digitalWrite(IN4_M2, LOW);
    delay(200);
  }
}
