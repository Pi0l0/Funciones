#include <stdio.h>

int PUNTAJE(int,int,int,int,int);

int CUADRANTE(int,int);
int x,y,cuad;
int TR = 0,TL = 0,BR = 0,BL = 0,CEN = 0;
int play,TOTAL;
int aux = 0, plays = 0;

int main(){

    printf("Jugador N*:  ");
    scanf("%d",&play);

        while (play >= 0){

            if(aux == 1){
                    printf("Jugador N*:  ");
                    scanf("%d",&play);
            } else {
                    aux = 1;
                    }
          if(play>= 0){
                              plays++;
                    for(int t = 0; t < 4; t++){
                              printf(" Tiro (%d): (x;y) \n",t+1);
                              scanf("%d%d",&x,&y);

                switch(CUADRANTE(x,y)){

                case 1: TR++; break;
                case 2: TL++; break;
                case 3: BL++; break;
                case 4: BR++; break;
                case 0: CEN++; break;


                }
            }
        }
        }
        int tot = PUNTAJE(TR,TL,BL,BR,CEN);

        printf("| PLAYER | POINTS | ");
        for(int t=0;t<plays;t++){

          printf("|     %d     |     %d     | ",play,);

        }

    //system("pause");

return 0; }


int CUADRANTE(int x, int y){

         if(x > 0 && y > 0){cuad = 1;}
    else if(x < 0 && y > 0){cuad = 2;}
    else if(x < 0 && y < 0){cuad = 3;}
    else if(x > 0 && y < 0){cuad = 4;}
    else if(x == 0 && y == 0){cuad = 0;}
    else { printf("Tiro Invalido");}

    return cuad;
}

int PUNTAJE(int TR,int TL,int BL,int BR,int CEN){
    TOTAL = ((TR + TL)*50) + ((BR + BL)*40) + CEN * 100;

    return TOTAL;

}
