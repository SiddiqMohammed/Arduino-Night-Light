void setup ()
{
  //Define pin 10 as the output
  pinMode(10, OUTPUT);
  //Define the baud rate
  Serial.begin(9600);
}
void loop()
{
  //photoresistor input is A0
  //Input from the photoresistor is read
  int i=analogRead(A0);
  Serial.println(i);

  //If the resistance is high, it means the room is dark
  if (i > 500)  {
    Serial.print("nighty night bois");
    Serial.print("\n");

    //The lamp is sent a signal to turn on
    digitalWrite(10, HIGH);
    delay(5000);
}
  else{
    //If the resistance is lesser than the defined value above
    //then the lamp is kept off
    digitalWrite(10, LOW);
    delay(1000);
  }
}
