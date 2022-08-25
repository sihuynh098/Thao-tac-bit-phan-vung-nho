#include <stdio.h>
#include <stdint.h>

#define HIGH 1
#define LOW 0
int PORT_A = 0b00000000;

void digitalWrite(char PIN, char STATUS){
    
    if(STATUS == HIGH){
        int bien = 0x80 >> PIN;
        PORT_A = PORT_A | bien;
    }else{
        int bien2 = 0x7F >> PIN;
        PORT_A = PORT_A & bien2;
    }

}

int main(){
    digitalWrite(2, HIGH);
    // //0b00100000
    digitalWrite(3, HIGH);
    // //0b00110000
    digitalWrite(2, LOW);
    //0b00110000
    //0b11011111
    //0b00010000
    printf("%d", PORT_A);
    return 0;
}


