
    /**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 101;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua < 90)
  {
    Serial.print("L'aigua encara no bull"); // Water temperature under 90ºC
  }
   else if (tempAigua >= 90 && tempAigua<100)
   {
  Serial.print("Aigua apunt de bullir"); // Water temperature between 90ºC and 100º
   }
  else 
  Serial.print("L'aigua esta bullint!"); // Water temperature above 100ºC
  }
  
 



//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************



