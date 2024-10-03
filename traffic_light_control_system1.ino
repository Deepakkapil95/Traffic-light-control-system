void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
}
void loop()
{
  digitalWrite(2, HIGH);//for green led
    delay(20000); // Wait for 20000 millisecond(s)
  digitalWrite(2, LOW);
  
  digitalWrite(4, HIGH);//for yellow led
    delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(4, LOW);
  
  digitalWrite(7, HIGH);//for red led
    delay(20000); // Wait for 20000 millisecond(s)
  digitalWrite(7, LOW);
}