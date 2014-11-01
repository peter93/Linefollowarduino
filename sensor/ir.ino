int analogPin = 3;     // Infrared Sensor (Right lead) connected to analog pin 3
                                    // outside leads to ground and +5V
int val = 0;                  // variable to store the value read
int flag =0;

void setup()
{
  Serial.begin(9600);          //  setup serial
}

void loop()
{
  val = analogRead(analogPin);    // read the input pin
 
    if(val<200){
  Serial.println("White");                           // debug value
  Serial.println(val);
  delay(500);
}
  else{
      Serial.println("Black");                           // debug value
      Serial.println(val);
  delay(500);
}
}
