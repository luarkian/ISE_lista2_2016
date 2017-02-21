//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Questao 1 lista2
// 
// Made by kaype x
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/3997785-questao-1-lista2

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
#define H 0
#define L 1

int state1 = 0;
int state2 = 0;

int cont = 0;

const int led_a = 1;
const int led_b = 2;
const int led_c = 3;
const int led_d = 4;
const int led_e = 5;
const int led_f = 6;
const int led_g = 7;

#define bcres  9
#define bdecr  8

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(bcres,INPUT);
  pinMode(bdecr,INPUT);
  
  pinMode(led_a, OUTPUT);
  pinMode(led_b, OUTPUT);
  pinMode(led_c, OUTPUT);
  pinMode(led_d, OUTPUT);
  pinMode(led_e, OUTPUT);
  pinMode(led_f, OUTPUT);
  pinMode(led_g, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
	
	if(digitalRead(bcres) == HIGH){
		cont++;
      delay(500);
    }
	if(digitalRead(bdecr) == HIGH){
		cont--;
      delay(500);
    }
	
  if(cont == 0){
    digitalWrite(led_a,H);
    digitalWrite(led_b,H);
    digitalWrite(led_c,H);
    digitalWrite(led_d,H);
    digitalWrite(led_e,H);
    digitalWrite(led_f,H);
    digitalWrite(led_g,L);
    
  }
  else if(cont == 1){
    digitalWrite(led_a,L);
    digitalWrite(led_b,H);
    digitalWrite(led_c,H);
    digitalWrite(led_d,L);
    digitalWrite(led_e,L);
    digitalWrite(led_f,L);
    digitalWrite(led_g,L);
    
  }
  else if(cont == 2){
    digitalWrite(led_a,H);
    digitalWrite(led_b,H);
    digitalWrite(led_c,L);
    digitalWrite(led_d,H);
    digitalWrite(led_e,H);
    digitalWrite(led_f,L);
    digitalWrite(led_g,H);
   
  }
  else if(cont == 3){
    digitalWrite(led_a,H);
    digitalWrite(led_b,H);
    digitalWrite(led_c,H);
    digitalWrite(led_d,H);
    digitalWrite(led_e,L);
    digitalWrite(led_f,L);
    digitalWrite(led_g,H);
 
  }
  else if(cont == 4){
    digitalWrite(led_a,L);
    digitalWrite(led_b,H);
    digitalWrite(led_c,H);
    digitalWrite(led_d,L);
    digitalWrite(led_e,L);
    digitalWrite(led_f,H);
    digitalWrite(led_g,H);
  
  }
  else if(cont == 5){
    digitalWrite(led_a,H);
    digitalWrite(led_b,L);
    digitalWrite(led_c,H);
    digitalWrite(led_d,H);
    digitalWrite(led_e,L);
    digitalWrite(led_f,H);
    digitalWrite(led_g,H);
  
  }
  else if(cont == 6){
    digitalWrite(led_a,H);
    digitalWrite(led_b,L);
    digitalWrite(led_c,H);
    digitalWrite(led_d,H);
    digitalWrite(led_e,H);
    digitalWrite(led_f,H);
    digitalWrite(led_g,H);
  
  }
  else if(cont == 7){
    digitalWrite(led_a,H);
    digitalWrite(led_b,H);
    digitalWrite(led_c,H);
    digitalWrite(led_d,L);
    digitalWrite(led_e,L);
    digitalWrite(led_f,L);
    digitalWrite(led_g,L);
  
  }
  else if(cont == 8){
    digitalWrite(led_a,H);
    digitalWrite(led_b,H);
    digitalWrite(led_c,H);
    digitalWrite(led_d,H);
    digitalWrite(led_e,H);
    digitalWrite(led_f,H);
    digitalWrite(led_g,H);
  
  }
  else if(cont == 9){
    digitalWrite(led_a,H);
    digitalWrite(led_b,H);
    digitalWrite(led_c,H);
    digitalWrite(led_d,H);
    digitalWrite(led_e,L);
    digitalWrite(led_f,H);
    digitalWrite(led_g,H);
  
  }
  if(cont >=10){
  	cont =0;
  }else if(cont < 0){
  	cont = 9;
  }

}
