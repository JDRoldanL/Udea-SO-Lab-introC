#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){
    int rows = 0;
    printf("Ingrese el número de líneas: ");
    scanf("%d", &rows);
    char *bin;
    char *aux;
    bin = (char *) malloc(1);
    aux = (char *) malloc(1);
    int change = 0;
    for (int i = 0; i <= rows; i++){
        if(i>0){
            
            if(change == 0){
                bin = (char *)realloc(bin, i);
                aux = (char *)realloc(aux, i);
                strcpy(aux, "0");
                change = 1;
            }else{
                bin = (char *)realloc(bin, i);
                aux = (char *)realloc(aux, i);
                strcpy(aux, "1");
                change = 0;
            }
            strcat(aux, bin);
            strcpy(bin,aux);
            printf("%s \n", bin);
        }
    }
    return 0;
}
