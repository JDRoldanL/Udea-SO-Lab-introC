#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sumaProgresion( int x, int n);

int main(int argc, char* argv[]){
  int x, n;
  if (argc !=3){// If  para el control de ingreso de los argumentos
    printf("Error: ingrese solo 2 argumentos: x y n\n");
    return 1;
  }
  x = strtol(argv[1],NULL,10);//convierte el argumento en entero base(10)
  n = strtol(argv[2],NULL,10);//convierte el argumento en entero base(10)


  int r;
  r=sumaProgresion(x,n);
  printf("El resultado de la suma es:%d \n",r);
  return 0;
}
int sumaProgresion(int x, int n){
  int result=0;
  for (int i = 0; i <= n; i++){
    result= result+pow(x,i);
  }
  return result;
}
