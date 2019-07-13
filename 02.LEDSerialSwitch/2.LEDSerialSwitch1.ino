int x;

void setup() 
{ 
  Serial.begin(9600); 
  pinMode(13, OUTPUT); 
}
 
void loop() 
{
while (Serial.available())
  {
    x = Serial.read();
  }

  if (x == '1')
  digitalWrite (13, HIGH);

  else if (x == '0')
  digitalWrite (13, LOW);

}
