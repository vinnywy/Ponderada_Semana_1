const int led_interno = LED_BUILTIN;
const int led_externo = 3;

void setup()
{
  // Primeira parte da Ponderada
  pinMode(led_interno, OUTPUT);
  
  //Segunda parte da Ponderada
  pinMode(led_externo, OUTPUT);
}

void loop()
{
 parte_1();
 parte_2();
}

void parte_1()
{
// Primeira parte da Ponderada
  digitalWrite(led_interno, HIGH);
  delay(1000); 
  digitalWrite(led_interno, LOW);
  delay(1000); 
}

void parte_2()
{
  //Segunda parte da Ponderada
  digitalWrite(led_externo, HIGH);
  delay(1000); 
  digitalWrite(led_externo, LOW);
  delay(200); 
}