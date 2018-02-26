    /**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
float KgCo2m2 = 50;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (KgCo2m2 < 3.5)
  {
    Serial.print("A"); // Emissions under 3.5KgCo2/m2
  }
   else if (KgCo2m2 >= 3.6 && KgCo2m2<6.5)
   {
  Serial.print("B"); // Emissions between 6.6KgCo2/m2 and 11.2KgCo2/m2
   }
  else if (KgCo2m2 >= 6.6 && KgCo2m2<11.1)
  Serial.print("C"); // Emissions between 11.2KgCo2/m2 and 11.2KgCo2/m2
   else if (KgCo2m2 >= 11.2 && KgCo2m2<17.7)
   {
  Serial.print("D"); // Emissions between 17.8KgCo2/m2 and 38.2KgCo2/m2
   }
   else if (KgCo2m2 >= 17.8 && KgCo2m2<38.2)
   {
  Serial.print("E"); // Emissions between 38.3KgCo2/m2 and 43.2KgCo2/m2
   }
   else if (KgCo2m2 >= 38.3 && KgCo2m2<43.2)
   {
  Serial.print("F"); // Emissions between 38.3KgCo2/m2 and 43.2KgCo2/m2
   }
   else if (KgCo2m2 >= 43.2)
   {
  Serial.print("G"); // Emissions above 43.2KgCo2/m2
  
  }
}
 



//********** Loop *****************************************************************
void loop()     // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************



