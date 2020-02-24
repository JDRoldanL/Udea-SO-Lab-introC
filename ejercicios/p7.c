#include <stdio.h>
#include <stdlib.h> //rand() y srand()



int main (int argc, char const *argv[]) {
    
    int number1, number2, result;
    number1 = rand() % 10 + 1;
    number2 = rand() % 10 + 1;   
    do{
        printf("¿Cuánto es %d veces %d? Para terminar ingrese como  resultado '0'\n", number1, number2);
        scanf("%d", &result);
        if(result == number1*number2){
            printf("Muy bien! \n");
            number1 = rand() % 10 + 1;
            number2 = rand() % 10 + 1; 
        }else{
            if(result != 0){
                printf("No. Por favor intenta nuevamente \n");
            }
        }
    }while (result != 0);
    return 0;
}
