#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int multiplo(int n1,int n2);

int multiplo(int n1,int n2){
    return ((n2%n1)==0)?1:0;
}

int main(int argc, char const *argv[]){
    int n1 = 0;
    int n2 = 0;
    int res=0;
    printf("Ingrese el primer número: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &n2);
   
    if(n1>0 && n2>0){
        res=multiplo(n1,n2);
        printf("%d",res);
    }else{
        printf("error");
    }
    
    return 0;
}
