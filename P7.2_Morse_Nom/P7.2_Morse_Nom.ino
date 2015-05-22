/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**                                                                           **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
// pin for speaker
 const int pin = 9;

 int note = 1047;
 int velocitat = 10;

//****** Setup ****************************************************************
 void setup()
{
}

//****** Loop *****************************************************************
 void loop()
{
  //H   ** Hola sóc el Juan **
  punt();
  punt();
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //O
  ratlla();
  ratlla();
  ratlla();
  //Espai entre lletres
  espaiL();
  //L
  punt();
  ratlla();
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //A
  punt();
  ratlla();
  //Espai entre paraules
  espaiP();
  //S
  punt();
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //O
  ratlla();
  ratlla();
  ratlla();
  //Espai entre lletres
  espaiL();
  //C
  ratlla();
  punt();
  ratlla();
  punt();
  //Espai entre paraules
  espaiP();
  //E
  punt();
  //Espai entre lletres
  espaiL();
  //L
  punt();
  ratlla();
  punt();
  punt();
  //Espai entre paraules
  espaiP();
  //J
  punt();
  ratlla();
  ratlla();
  ratlla();
   //Espai entre lletres
  espaiL();
  //U
  punt();
  punt();
  ratlla();
   //Espai entre lletres
  espaiL();
  //A
  punt();
  ratlla();
   //Espai entre lletres
  espaiL();
  //N
  ratlla();
  punt();
  //Espai entre paraules
  espaiP();  
  
  
}

//****** Funcions *************************************************************
 void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

 void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

 void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

 void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}

