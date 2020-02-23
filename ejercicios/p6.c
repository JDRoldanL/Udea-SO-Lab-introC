#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void reverseNum(int n);
int longuitud(int n);
int main(int argc, char* argv[]){

  int num;
  if(argc!=2){
    printf("Error: ingrese solo 1 argumento:\n");
    return 1;
  }

  num = strtol(argv[1],NULL,10);
  reverseNum(num);
  return 0;
}

int longuitud(int n){
  int cont=1;
  while (n/10>0) {
    n=n/10;
    cont++;
  }
  return cont;
}
void reverseNum(int num){
  int lendenumero=longuitud(num);
  int iter=lendenumero*pow(10,(lendenumero-1))/lendenumero;
  int dig, i=0;
  int vec[lendenumero];
  while (iter>=1 && i<=lendenumero ) {
    dig=num/iter;
    dig= dig%10;
    vec[i]=dig;
    iter=iter/10;
    i++;
  }
  for (int j=lendenumero-1;j>=0;j--) {
    printf("%d",vec[j] );
  }
  printf("\n");
}
