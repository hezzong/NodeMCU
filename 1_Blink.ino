
/*
 
  Blink
  2018-3-22 class
  nodeMCU 사용
  
*/


int pin[10] = { D0, D1, D2, D3, D4, D5, D6, D7, D9, D10 };

void setup() {
 
  for (int i=0; i< 11; i++)
    pinMode(pin[i], OUTPUT);
  
}

void loop() {


  /* 1. light blink at the same time */

  /*
   
  for (int i=0; i< 11; i++)
     digitalWrite(pin[i], HIGH);

  delay(1000);

  for (int i=0; i< 11; i++)
    digitalWrite(pin[i], LOW);

  delay(1000);

  */


  /* 2. light blink accelerating speed  */

  for (int i=0; i< 11; i++)
    digitalWrite(pin[i], LOW);

  for (int i=0; i<11 ; i++){
    digitalWrite(pin[i], HIGH);
    delay(200-i*20);
  }

  delay(100);

  for ( int i=10; i>=0; i--){
    digitalWrite(pin[i], LOW);
    delay(200-i*20);
   }
  

}
