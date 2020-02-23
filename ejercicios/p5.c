#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double sumaSeries( int x, int n);
int factorial(int num);

int main(int argc, char* argv[]){
  int x, n;
  if (argc !=3){// If  para el control de ingreso de los argumentos
    printf("Error: ingrese solo 2 argumentos: x y n\n");
    return 1;
  }
  x = strtol(argv[1],NULL,10);//convierte el argumento en entero base(10)
  n = strtol(argv[2],NULL,10);//convierte el argumento en entero base(10)

  double sumaS=sumaSeries(x,n);
  printf("Valor de entrada de x:%d \n",x);
  printf("Numero de terminos:%d \n",n);

  printf("Suma :%f \n",sumaS);


  return 0;
}

int factorial(int n){
  if(n==0){
    return 1;
  }else{
    return n*factorial(n-1);
  }
}

double sumaSeries(int x, int n){
  int exp=(n-1)*2;
  float result=0.0;
  if((n-1)>0){
      result=pow(x,exp);
      result=result/(factorial((n-1)*2));
      if((n-1)%2!=0){
          result=result*(-1);
      }
      result= result + sumaSeries(x,n-1);
  }
  else{
      resultado=resultado+1;
  }
  return resultado;
}
