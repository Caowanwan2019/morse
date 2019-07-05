
void setup() 
{
  
}

void loop() 
{
  
  
}

void dot()
{
  digitalWrite(pin,HIGH);
  delay(250);
  digitalWrite(pin,LOW);
  delay(250);
}
  
void dash()
{
  digitalWrite(pin,HIGH);
  delay(1000);
  digitalWrite(pin,LOW);
  delay(250);
}
void space()
{
  digitalWrite(pin,LOW);
  delay(750);
