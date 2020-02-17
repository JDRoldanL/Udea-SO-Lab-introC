#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */
    long toN = 0;
    printf("Ingrese un número ");
    scanf("%li", &toN);
    if (toN>0){
        for(long i=1;i<=toN;i++){
            for(int j=1;j<=10;j++){
                printf("%li x %d = %li -- ",i,j,i*j);
            }
            printf("\n");
        }
    }else{
        printf("Error");
    }
    return 0;
}
