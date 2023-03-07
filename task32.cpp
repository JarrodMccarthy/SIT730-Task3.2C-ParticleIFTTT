int analogPin = A1; //y-axis
int val = 0;       
int threshold = 3000;    

void setup()
{
    Particle.publish("Setup");
}

void loop()
{
  val = analogRead(analogPin);  // read the analogPin
  if (val > threshold)
  {
    Particle.publish("Sunlight", String(val));     
  }
  delay(30000);
}