//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// elevador
// 
// Made by kaype x
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/3792714-elevador

#include <Servo.h>

Servo myservo;
const int Botao1 = 2;
const int Botao2 = 3;
const int Botao3 = 4;


int pos,andar = 0;

void setup(){
	myservo.attach(9);	
  
	pinMode(Botao1, INPUT);
	pinMode(Botao2, INPUT);
	pinMode(Botao3, INPUT);
 
	
}
void loop(){
 	int state1 = digitalRead(Botao1);
    int state2 = digitalRead(Botao2);
    int state3 = digitalRead(Botao3);
  
  if(state1 == HIGH){
    if(andar == 255){
    	for (andar = 255; andar >= 0; andar -= 1) {
 			myservo.write(andar);
        }
      andar = 0;
    }
    
    else if(andar == 127){
    for (andar = 127; andar >= 0; andar -= 1) {
 		myservo.write(andar);
  		}
      andar = 0;
    }
  }
  if(state2 == HIGH){
  	if(andar == 0){
    	for (andar = 0; andar <= 127; andar += 1) {
 			myservo.write(andar);
        }
      andar = 127;
    }
    
    else if(andar == 255){
    for (andar = 255; andar >= 127; andar -= 1) {
 		myservo.write(andar);
  }
      andar = 127;
  }
  } 
  if(state3 == HIGH){
   if(andar == 0){
    	for (andar = 255; andar >= 0; andar -= 1) {
 			myservo.write(andar);
        }
     andar = 0;
    }
    
    else if(andar == 127){
    for (andar = 127; andar <= 255; andar += 1) {
 		myservo.write(andar);
  }
      andar = 255;
  }
  }
}

