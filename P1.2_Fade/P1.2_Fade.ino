int velocitat = 500; 

void setup()
{
  pinMode(3, OUTPUT);     
  pinMode(5, OUTPUT);     
  pinMode(6, OUTPUT);     
  pinMode(9, OUTPUT);     
  pinMode(10, OUTPUT);     
  pinMode(11, OUTPUT);     
}


void loop()
{
  analogWrite(3, 0);      
  analogWrite(5, 0);      
  analogWrite(6, 0);     
  analogWrite(9, 0);      
  analogWrite(10, 0);     
  analogWrite(11, 0);     

  delay(velocitat);           
  
  analogWrite(3, 40);      
  analogWrite(5, 0);      
  analogWrite(6, 0);     
  analogWrite(9, 0);      
  analogWrite(10, 0);     
  analogWrite(11, 0);     

  delay(velocitat);           
  
  analogWrite(3, 80);      
  analogWrite(5, 40);      
  analogWrite(6, 0);     
  analogWrite(9, 0);      
  analogWrite(10, 0);     
  analogWrite(11, 0);     

  delay(velocitat);           
  
  analogWrite(3, 120);      
  analogWrite(5, 80);      
  analogWrite(6, 40);     
  analogWrite(9, 0);      
  analogWrite(10, 0);     
  analogWrite(11, 0);     

  delay(velocitat);           
  
  analogWrite(3, 160);      
  analogWrite(5, 120);      
  analogWrite(6, 80);     
  analogWrite(9, 40);      
  analogWrite(10, 0);     
  analogWrite(11, 0);     

  delay(velocitat);           
  
  analogWrite(3, 200);      
  analogWrite(5, 160);      
  analogWrite(6, 120);     
  analogWrite(9, 80);      
  analogWrite(10, 40);     
  analogWrite(11, 0);     

  delay(velocitat);           
  
  analogWrite(3, 255);      
  analogWrite(5, 200);      
  analogWrite(6, 160);     
  analogWrite(9, 120);      
  analogWrite(10, 80);     
  analogWrite(11, 40);     

  delay(velocitat);           
  
  analogWrite(3, 255);      
  analogWrite(5, 255);      
  analogWrite(6, 200);     
  analogWrite(9, 160);      
  analogWrite(10, 120);     
  analogWrite(11, 80);     

  delay(velocitat);           
  
  analogWrite(3, 255);      
  analogWrite(5, 255);      
  analogWrite(6, 255);     
  analogWrite(9, 200);      
  analogWrite(10, 160);     
  analogWrite(11, 120);     

  delay(velocitat);           
  
  analogWrite(3, 255);      
  analogWrite(5, 255);      
  analogWrite(6, 255);     
  analogWrite(9, 255);      
  analogWrite(10, 200);     
  analogWrite(11, 160);     

  delay(velocitat);           
  
  analogWrite(3, 255);      
  analogWrite(5, 255);      
  analogWrite(6, 255);     
  analogWrite(9, 255);      
  analogWrite(10, 255);     
  analogWrite(11, 200);     

  delay(velocitat);           
  
  analogWrite(3, 255);      
  analogWrite(5, 255);      
  analogWrite(6, 255);     
  analogWrite(9, 255);      
  analogWrite(10, 255);     
  analogWrite(11, 255);     

  delay(velocitat);           
}


