#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int main(){
    char c;
    char may;
    int n = 0;
    do{
        n= read(STDIN_FILENO,&c,1); // Variable dentro de la librería, esta variable, tamaño de paso
        may = toupper(c);
        write(STDOUT_FILENO,&may,1); // Variable dentro de la librería, esta variable, tamaño de paso
    } while(n != 0); // Termina cuado n = 0;
    return 0;
}


// [Comando] gcc -o min2may min2may.c // compilarlo
// [Comando]./min2may //para correrlo
// [Comando]control+d // Termina la terminal

// [Comando]./min2may < min2may.c
// Al momento de correrlo, la entrada es lo que va después del símbolo "<"
// Al no colocarlo, la entrada es el teclado

// [Comando]./min2may < min2may.c > salida.txt
// Se le agrega la salida del archivo. En caso de que exista, se sobreescribe.

