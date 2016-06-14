#include <stdio.h>
#include <stdlib.h>
//Jafet Gabriel Benítez Hidalgo
//2013-1651

char tablero [3][3];
char jugadorActual = 'X';

void inicializar(){
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3;j++){
            tablero[i][j] = '-';
        }
    }
}

void desplegarTablero(){
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3;j++){
            printf("%c\t", tablero[i][j]);
        }
        printf("\n");
    }
}

bool hayGanador(){
    char jugadorEncontrado = tablero[0][0];


//Horizontal
         for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(tablero[i][j] == '-'){

                break; break;
                }

                if(jugadorEncontrado != tablero[i][j]){

                break; break;
                }

                jugadorEncontrado = tablero[i][j];
                if(j == 2){
                    printf("Ha ganado Horizontal %c ", jugadorEncontrado, "\n");
                    return true;
                }

            }


        }


//vertical


        jugadorEncontrado = tablero[0][0];

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(tablero[j][i] == '-'){

                break; break;
                }

                if(jugadorEncontrado != tablero[j][i]){

                break; break;
                }
                 jugadorEncontrado = tablero[j][i];
                if(j == 2){
                    printf("Ha ganado  Vertical%c", jugadorEncontrado, "\n");
                    return true;
                }


            }


        }


//diagonal de izquierda a derecha
    jugadorEncontrado = tablero[0][0];

    for (int i = 0; i<3; i++ ){
                if(tablero[i][i] == '-'){

                break;
                }

                if(jugadorEncontrado != tablero[i][i]){

                break;
                }
                 jugadorEncontrado != tablero[i][i];

                if(i == 2){
                    printf("Ha ganado Diagonal I%c", jugadorEncontrado, "\n");
                    return true;
                }

            }


//diagonal de derecha a izquierda

    jugadorEncontrado = tablero[0][2];

    for (int i = 2; i>=0; i-- ){
                if(tablero[2-i][i] == '-'){

               break;
                }

                 if(jugadorEncontrado != tablero[2-i][i]){

               break;
                }

                 jugadorEncontrado = tablero[2-i][i];
                if(i == 0){
                    printf("Ha ganado Diagonal D%c", jugadorEncontrado, "\n");
                    return true;
                }


            }

return false;
}


int main(){

    inicializar();
    desplegarTablero();

    while (!hayGanador()){

    int fila = 0;
    int columna = 0;
    printf("En que fila quiere jugar %c: ", jugadorActual);
    scanf("%d", &fila);
    printf("En que columna quiere jugar %c: ", jugadorActual);
    scanf("%d", &columna);

    if(tablero[fila][columna] != '-'){
        printf("Casilla ocupada \n");
    }
    else{
          tablero[fila][columna] = jugadorActual;
        if(jugadorActual == 'X'){
            jugadorActual = 'O';
        }
        else{
            jugadorActual = 'X';
        }

    }
     desplegarTablero();

    }

printf("\n");
desplegarTablero();
printf("\n");
system("pause");

}
//@Jafet7G
