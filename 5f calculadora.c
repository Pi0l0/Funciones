

/* 5. Realizar un programa que al ingresar solicite el ingreso de dos números enteros y luego
muestre por pantalla el siguiente menú (las xx de los números deben ser reemplazadas
con los valores correspondientes):
Menú de Opciones
---- -- --------
Numero 1: xx Numero 2: xx
1) Sumar
2) Restar
3) Multiplicar
4) Dividir
5) Ingresar Nuevos Números
6) Salir
Ingrese su opción:
Al ingresar el número de la opción del 1 al 4, se realiza la operación y muestra el resultado
hasta que se presione una tecla. Luego vuelve a mostrar el menú para poder realizar otra
operación con los mismos números. La opción 5 pide el ingreso de dos nuevos números
de trabajo mientras que la opción 6 sale y cierra el programa.
El ingreso de la opción debe estar validado y en caso de ingresarse un número no válido
debe solicitarlo nuevamente.
Usar una función para mostrar el menú y retornar el valor elegido.*/




#include <stdio.h>
int n1,n2,fun,res;
float resf;
char nada;

void clear();
void funbasics(int,int,int);
int menu();

int main(){

printf("\n\ningresar 2 numeros:  ");
          scanf("%d",&n1);
          scanf("%d",&n2);

while (fun != 6){
                    if(fun==5){
          printf("\n\ningresar 2 numeros:  ");
          scanf("%d",&n1);
          scanf("%d",&n2);
                    }

          fun = menu();
          printf("\n..........................................................\n");

          funbasics(n1,n2,fun);

          clear();
          }
return 0;
}

funbasics(int n1,int n2, int fun){

switch (fun){
                    case 1:
                              res = n1 + n2;
                              printf("1) Suma ---> %d + %d = %d \n",n1,n2,res);
                    break;

                    case 2:
                              res = n1 - n2;
                              printf("2) Resta ---> %d - %d = %d\n",n1,n2,res);
                    break;

                    case 3:
                              res = n1 * n2;
                              printf("3) Multiplicar ---> %d * %d = %d\n",n1,n2,res);
                    break;

                    case 4:
                              resf = (float)n1 / (float)n2;
                              printf("4) Dividir ---> %d / %d = %.2f\n",n1,n2,resf);
                    break;

                    }
          }

menu(){
                    printf("Menu de Opciones\n");
          printf("-------------------------------------------\n");
          printf("Numero 1: %d  Numero 2: %d \n",n1,n2);
          printf("\n");
          printf("1) Sumar\n");
          printf("2) Restar\n");
          printf("3) Multiplicar\n");
          printf("4) Dividir\n");
          printf("5) Ingrese nuevos numeros\n");
          printf("6) Salir\n");

          scanf("%d",&fun);
          return fun;
}

clear(int fun){
          printf("Presione  cualquier tecla ...... ");
          _getch();
          printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}
