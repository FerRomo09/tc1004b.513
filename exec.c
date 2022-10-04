#include <stdio.h>
#include <unistd.h>

int main(){
    printf("Prueba\n");
    int pid = fork();

    if(pid == 0){
        printf("Soy el proceso hijo y me voy a convertir en ls\n");
        //execl("/usr/bin/ls", "ls","/etc",NULL); //primero
        execl("/workspace/tc1004b.513/hola", "holamundo",NULL);
        //execl("/usr/bin/fulanito", "ls","/etc",NULL);  //si no existe, no puede ejecutarse
        printf("Esto no debe ejecutarse.\n");
    } else{
        printf("Soy el proceso padre\n");
    }
    return 0;
}