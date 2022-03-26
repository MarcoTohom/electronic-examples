int led = 9; 
int potenciometro =A0; 
int valor_potenciometro;
long valor_led;

void setup()
{
}
void loop()
{
  valor_potenciometro = analogRead(potenciometro); 
  // Convertir el rango de señales del potenciometro (1024) 
  // al del led (255) (255/1024 = 0.2490)
  valor_led = 0.2490 * valor_potenciometro; 
  analogWrite(led, valor_led);
}
