#include <stdio.h>
#include <signal.h>
#include <unistd.h>
int contador;

void holaMundo(int signalNumber){
    if (signalNumber = 10){
        printf("Es la senal 10\n");
        contador = 2;
    } else {
        printf("Es otra senal\n");
    }
    
}  /* Solo afecta en el proceso */

void nomeMatas(int sig){
    printf("Es la senal 10\n");
}

int main(){
    signal(12, holaMundo);
    signal(2, nomeMatas);
    signal(10, holaMundo);
    contador = 1;
    while(contador == 1){
        printf("Estoy trabajando\n");
        sleep(1);
    }
    printf("Nunca llega\n"); /*Proceso infinito while*/
    return 0;
}