#include <stdio.h>

int num = 0,aux = 0;

int fun(int);

int main(){

    printf("ingresar:   ");
    scanf("%d",&num);

    aux = fun(num);

    printf("Numero:  %d", aux );


return 0;
}


int fun(int num2){

    num2++;
    return num2;
}
