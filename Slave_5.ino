#include <Wire.h>

int s = 0;



int bp1 = 10; 
int bp2 = 11;
 int bp3 = 12;

  int state = 0;   
  

void setup() {
  Serial.begin(9600); 
pinMode(bp1, INPUT_PULLUP);
 pinMode(bp2,INPUT_PULLUP);
 pinMode(bp3, INPUT_PULLUP);
 Wire.begin(5);                // join i2c bus with address #8
 Wire.onRequest(requestEvent5); // register event

}


void loop() { 
  state = 0;

  
   if(digitalRead(bp1) == LOW){
   state += 1;
 }
 if(digitalRead(bp2) == LOW){
   state += 1;
 }
 if(digitalRead(bp3) == LOW){
   state += 1;
 }
 
  switch (state){    
   case 0:
Serial.println("<25%");
 s = 0;

 
   break;
   case 1:
Serial.println("<50%");
 s = 25;


   break;
   case 2:
Serial.println("<75%");
 s = 50;


   break;   
      case 3:
Serial.println(">75%"); 
 s = 75;


   break;   
   default: 
Serial.println(100);
  }
  
delay(100);

Serial.println(s);
}



void requestEvent5() {
  
        Wire.write(s); 

      
}


