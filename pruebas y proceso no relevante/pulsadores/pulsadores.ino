const int BOT1 = 22;
const int BOT2 = 23;
const int LED1 = 24;
const int LED2 = 25;

void setup()
{
  pinMode(BOT1,INPUT);
  pinMode(BOT2,INPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
}


void loop()
{
  if(digitalRead(BOT1) == HIGH)
  {
    digitalWrite(LED1,255);
  }
  else
  {
    digitalWrite(LED1,0);
  }
  delay(20);
  
  if(digitalRead(BOT2) == HIGH)
  {
    digitalWrite(LED2,1);
  }
  else
  {
    digitalWrite(LED2,0);
  }
  delay(20);
}
