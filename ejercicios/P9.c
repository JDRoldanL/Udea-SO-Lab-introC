#include <stdio.h>
#include <stdlib.h> //rand() y srand()
#include <string.h>
#include <time.h>

#define numberOfStrings 4
#define sizeOfEachString 40

void average(int numberOfCorrectAnswers, int numberOfWrongAnswers, int numberOfQuestions);


int main (int argc, char const *argv[]) {
    srand(time(NULL));
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

    int number1, number2, result, response, numberOfCorrectAnswers, numberOfQuestions, numberOfWrongAnswers;

    numberOfQuestions = 0;
    numberOfCorrectAnswers = 0;
    numberOfWrongAnswers = 0;
    number1 = rand() % 10 + 1;
    number2 = rand() % 10 + 1;  

    do{
        response = rand() % 4;
        printf("¿Cuánto es %d veces %d? Para terminar ingrese como  resultado '0' \n", number1, number2);
        scanf("%d", &result);
        if(result == number1*number2){
            numberOfCorrectAnswers++;
            printf("%s \n", correctAnswer[response]);
            number1 = rand() % 10 + 1;
            number2 = rand() % 10 + 1;
        }else{
            if(result != 0){
                numberOfWrongAnswers++;
                printf("%s \n", wrongAnswer[response]);
            }
        }
        if(result != 0){
            numberOfQuestions++;
        }
    }while (result != 0);
    average(numberOfCorrectAnswers, numberOfWrongAnswers, numberOfQuestions);
    return 0;
}

void average(int numberOfCorrectAnswers, int numberOfWrongAnswers, int numberOfQuestions){
    float aver = 0;
    aver = (numberOfCorrectAnswers*100.0/numberOfQuestions);
    if(aver < 75){
        printf("Por favor pídele ayuda al instructor \n");
    }
}