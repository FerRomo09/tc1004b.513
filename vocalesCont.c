#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int main(){
    char c;
    int vocales = 0;
    int n = 0;
    char  may;
    do{
        n= read(STDIN_FILENO,&c,1); // Variable dentro de la librería, esta variable, tamaño de paso
        may = toupper(c);
        if (may == 'A' || may == 'E' || may == 'I' || may == 'O' || may == 'U'){
            vocales ++;
        }
    } while(n != 0); // Termina cuado n = 0;
    printf("El numero de vocales es: %d\n", vocales);
    return 0;
}