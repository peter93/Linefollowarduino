int motorpin1 = 10;                  //define digital output pin no.
int motorpin2 = 11;                  //define digital output pin no.
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
 pinMode(motorpin1,OUTPUT);        //set pin 10 as output
 pinMode(motorpin2,OUTPUT);        // set pin 11 as output
}

void loop() {
  int motorvalue; 
  // put your main code here, to run repeatedly:
 while (Serial.available() == 0);  // Wait here until input buffer has a character
  {
      //Side 1
    motorvalue = Serial.parseInt();        // new command in 1.0 forward
    Serial.print("Give value b/w 0 - 255 = ");
    Serial.println(motorvalue);
 
     
 if(motorvalue >=0 && motorvalue <= 255)
 {
  analogWrite(motorpin1,LOW);
  analogWrite(motorpin2,motorvalue); 
 } 
    
  }

}
