#include <Wire.h>

int x = 0;
int y = 0;



int bp1 = 10; 
int bp2 = 11;
 int bp3 = 12;


  int state = 0; 
  
  

void setup() {
  Serial.begin(9600); 
pinMode(bp1, INPUT_PULLUP);
 pinMode(bp2,INPUT_PULLUP);
 pinMode(bp3, INPUT_PULLUP);

 Wire.begin(1);                // join i2c bus with address #8
 Wire.onRequest(requestEvent);

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
 x = 0;

 
   break;
   case 1:
Serial.println("<50%");
 x = 25;


   break;
   case 2:
Serial.println("<75%");
 x = 50;


   break;   
      case 3:
Serial.println(">75%"); 
 x = 75;


   break;   
   default: 
Serial.println(100);
  }
  
delay(1000);
Serial.print("X equals:");
Serial.println(x);

}
 
 

void requestEvent() {
  
        Wire.write(x); 

      
}


