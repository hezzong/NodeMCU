/*
 * 
 * 온도 경보 장치 프로그램
 * 2018-3-28 class
 * nodeMCU 사용
 * 
 */


/* 사용할 핀 정의 */
int pin[10] = { D0, D1, D2, D3, D4, D5, D6, D7, D9, D10 };

/* 아날로그 입력 0번 핀을 사용하는 온도 센서 TEMP 상수 정의  */
const int TEMP=0;

/* 온도 상/하한값 상수정의 */
const int LOWER_BOUND=0;  // 온도 하한값을 정의한 LOWER_BOUND 상수 정의
const int UPPER_BOUND=30;  //온도 상한값을 정의한 UPPER_BOUND 상수 정의 
 
/* 온도 센서의 현재값을 저장하는 val 변수 선언  */
int val=0; 
int voltage = 0; 
float temperature=0; 
 
 
void setup() {     

  /* Serial 통신을 초기화 */
  Serial.begin(9600);

  /* 출력값 SETUP */
  for (int i=0; i< 11; i++)
    pinMode(pin[i], OUTPUT);
  } 


void loop() { 

   val=analogRead(TEMP);             
   voltage = val * 5.0 / 1024.0;    // ADC 반환값을 전압으로 변환     
   temperature = voltage * 100;     //전압에 100을 곱하면 섭씨온도    

   for (int i=0; i< 11; i++)
    digitalWrite(pin[i], LOW);
    
   Serial.println("temperature"); 
   
    if(temperature <LOWER_BOUND)     {            
      digitalWrite(pin[2], HIGH); 
     } 
    else if(temperature >UPPER_BOUND){           
      digitalWrite(pin[0], HIGH);    
     }     
    else {         
      digitalWrite(pin[1], HIGH);    
     }
 
  }
