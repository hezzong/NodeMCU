
/*
 
  Blink_3Color
  2018-4-12 class
  nodeMCU 사용
  
*/


int pin[3] = { D1, D2, D3 };

void setup() {

  /* GND setting */
  pinMode(D4,OUTPUT);
  digitalWrite(D4,LOW);

  /* RGB setting */
  for (int i=0; i< 3; i++)
    pinMode(pin[i], OUTPUT);

  for (int i=0; i< 3; i++)
    digitalWrite(pin[i], LOW);

}

void loop() {


  /* 
   *  
   *  all color represent
   *  & is bit operator
   *  
  */
//  for(int i=0 ; i<8 ; i++){
//    digitalWrite( pin[0], i&1);
//    digitalWrite( pin[1], i&2);
//    digitalWrite( pin[2], i&4);
//
//    delay(1000);
//
//    digitalWrite( pin[0], LOW);
//    digitalWrite( pin[1], LOW);
//    digitalWrite( pin[2], LOW);
//     
//  }


   /*
    * Sound
   */

   digitalWrite( D4 , HIGH);
   delay(1000);

   digitalWrite( D4 , LOW);
   delay(1000);


   
}
