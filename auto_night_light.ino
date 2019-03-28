void setup ()
{
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int i=analogRead(A0);
  Serial.println(i);
  //delay(1000);
  if (i > 500)  {
    Serial.print("nighty night bois");
    Serial.print("\n");
    
    digitalWrite(10, HIGH);
    delay(5000); 
}
  else{
    digitalWrite(10, LOW);
    delay(1000);  
  }
}
  
