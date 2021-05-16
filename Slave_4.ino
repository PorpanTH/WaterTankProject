#include <Wire.h>

int a = 0;



int bp1 = 10; 
int bp2 = 11;
 int bp3 = 12;

  int state = 0;   
  

void setup() {
  Serial.begin(9600); 
pinMode(bp1, INPUT_PULLUP);
 pinMode(bp2,INPUT_PULLUP);
 pinMode(bp3, INPUT_PULLUP);
 Wire.begin(4);                // join i2c bus with address #8
 Wire.onRequest(requestEvent4); // register event

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
 a = 0;

 
   break;
   case 1:
Serial.println("<50%");
 a = 25;


   break;
   case 2:
Serial.println("<75%");
 a = 50;


   break;   
      case 3:
Serial.println(">75%"); 
 a = 75;


   break;   
   default: 
Serial.println(100);
  }
  
delay(100);

Serial.println(a);
}



void requestEvent4() {
  
        Wire.write(a); 

      
}


