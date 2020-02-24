#include <stdio.h>
#include <stdlib.h> //rand() y srand()
#include <string.h>

#define numberOfStrings 4
#define sizeOfEachString 40

int main (int argc, char const *argv[]) {
    char correctAnswer[numberOfStrings][sizeOfEachString] = {
        "Muy bien!",
        "Excelente!",
        "Buen trabajo!",
        "Sigue haciéndolo bien!"};
    char wrongAnswer[numberOfStrings][sizeOfEachString] = {
        "No. Por favor trata de nuevo.", 
        "Incorrecto. Trata una vez más.",
        "No te rindas!",
        "No. Trata de nuevo"};
    int number1, number2, result, response;
    number1 = rand() % 10 + 1;
    number2 = rand() % 10 + 1;   
    do{
        response = rand() % 4;
        printf("¿Cuánto es %d veces %d? Para terminar ingrese como  resultado '0' \n", number1, number2);
        scanf("%d", &result);
        if(result == number1*number2){
            printf("%s \n", correctAnswer[response]);
            number1 = rand() % 10 + 1;
            number2 = rand() % 10 + 1; 
        }else{
            if(result != 0){
                printf("%s \n", wrongAnswer[response]);
            }
        }
    }while (result != 0);
    return 0;
}
