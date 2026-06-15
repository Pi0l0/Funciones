#include <stdio.h>

int num,prant =0,dif,ppt = 0;
int primo(int);

int main(){

          for(int i = 5000; i < 10000;i++){
                    if(primo(i)){
                              if((dif = i - prant) == 2){
                                        ppt++;
                              }
                                        prant = i;
                    }

          }
          printf("numeros pares primos totales =       %d",ppt);

return 0;
}

primo(int num){
          int aux = 1;

          for(int i = 2; i < num; i++ ){
                    if( (num%i) == 0 ){
                              aux = 0;
                    }
          }
          return aux;
}
