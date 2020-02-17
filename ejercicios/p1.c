#include <stdio.h>
#include <stdlib.h>

#define per1  0.05
#define per2  0.07
#define per3  0.1
#define sales1  20000
#define sales2  50000

double percentage(int sales);

double percentage(int sales){
    double commission = -1;
    if (sales > 0 && sales <= sales1){
        commission = sales*per1;
    }else if (sales > sales1  && sales <= sales2){
        commission = ((sales-20000) * per2) + 1000;
    }else if(sales > sales2){
        commission = ((sales-50000) * per3) + 3100;
    }
    return commission;
}

int main(int argc, char const *argv[])
{
    /* code */
    int sales = 0;
    printf("Ingrese el numero de ventas: ");
    scanf("%d", &sales);
    double commission = percentage(sales);
    if(commission == -1){
        printf("Numero de ventas erroneo");
    }else{
        printf("su comisión es de: : %f \n", commission);
    }
    return 0;
}
