 int inPin = 9, ledpin13 =  13, ledpin12 = 12, ledpin11 = 11, ledpin10 = 10;                
 int ledState13 = LOW, ledState12 = LOW, ledState11 = LOW, ledState10 = LOW, i=0,q=0,w=0; 
 long interval = 250;
long previousMillis = 0;   

void setup() {
    
  pinMode(inPin, INPUT);  
  pinMode(ledpin13, OUTPUT); 
  pinMode(ledpin12, OUTPUT);   
  pinMode(ledpin11, OUTPUT);  
  pinMode(ledpin10, OUTPUT);  
}
void loop() {
 unsigned long currentMillis = millis();
if(digitalRead(inPin)==HIGH)
{
  
   if(currentMillis - previousMillis > interval) {
     previousMillis = currentMillis; 

   i++;
    if (ledState13 == LOW)
  {
   ledState13 = HIGH;
  }
      else
      {
      ledState13 = LOW;
      }
  if (i==2)
  {
   i=0;
   q++;
   if (ledState12 == LOW)
  {
   ledState12 = HIGH;
  }
      else
      {
      ledState12 = LOW;
      }
  }
 if (q==2)
  {
   q=0;
   w++;
   if (ledState11 == LOW)
  {
   ledState11 = HIGH;
  }
      else
      {
      ledState11 = LOW;
      }
  }
  if (w==2)
  {
   w=0;
   if (ledState10 == LOW)
  {
   ledState10 = HIGH;
  }
      else
      {
      ledState10 = LOW;
      }
  }
    
    digitalWrite(ledpin13, ledState13);
    digitalWrite(ledpin12, ledState12);
    digitalWrite(ledpin11, ledState11);
    digitalWrite(ledpin10, ledState10);
  }
  
}        
else
  {
    ledState13=LOW;
    ledState12=LOW;
    ledState11=LOW;
    ledState10=LOW;
    q=0;
    w=0;
    i=0;
   digitalWrite(ledpin13, ledState13);
   digitalWrite(ledpin12, ledState12);
   digitalWrite(ledpin11, ledState11);
   digitalWrite(ledpin10, ledState10);
  }  
}
