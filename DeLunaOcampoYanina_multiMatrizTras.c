//Multiplicación de matrices (transpuesta)

#include<stdio.h>
#include<stdlib.h>

int matUno[100][100], matDos[100][100];
int  resMat[100][100];
int fil, col, filDos, colDos, i, j, k, suma;

//Matriz 1
int main(){
	
/*EJEMPLO
FILAS: 3
COLUMNAS: 2
[1][2]
[0][-1]
[0][1]

FILAS: 2
COLUMNAS: 3
[0][3][0]
[3][0][3]

Resolviendo:
(0+6  3+0  0+6)
(0-3  0+0  0-3)
(0+3  0+0  0+3)

Respuesta:
( 6 3  6)
(-3 0 -3)
( 3 0  3)
*/

printf("Filas mat1: ");
scanf("%d", &fil);
printf("Columnas mat1: ");
scanf("%d", &col);

//Llenar la matriz
for(i=0; i<fil; i++){ 

    for(j=0; j<col; j++){
        printf("Digite el numero deseado en la posicion [%d][%d]: ", i ,j);
        scanf("%d", &matUno[i][j]);   
    }
}
printf("\n");

//Mostrar la matriz1
for(i=0; i<fil; i++){
	
    for(j=0; j<col; j++){
        printf("[%d]", matUno[i][j]);
    }
    printf("\n");
    
}

//Matriz 2
printf("\nFilas Matriz 2: ");
scanf("%d", &filDos);
printf("Columnas Matri2 1: ");
scanf("%d", &colDos);

//Llenar la matriz
for(i=0; i<filDos; i++){
	
    for(j=0; j<colDos; j++){
        printf("Digite el numero deseado en la posicion [%d][%d]: ", i, j);
        scanf("%d", &matDos[i][j]);
    }
    
}
printf("\n");

//Mostrar la matriz2
for(i=0; i<filDos; i++){
	
    for(j=0; j<colDos; j++){
        printf("[%d]", matDos[i][j]);
    }
    printf("\n");
    
}

printf("\n");
printf("Multiplicacion de la matriz:\n");
if(col != filDos){
    printf("\nLas matrices son incompatibles");
}else{
    for (i = 0; i < fil; i++) {
       	for (j = 0; j < colDos; j++) {
           	suma = 0;
           		for (k = 0; k < col; k++) {
               		suma += matUno[i][k] * matDos[k][j];
           		}
                resMat[i][j] = suma;
       	}
   	}

    for(i=0; i<fil; i++) {
    	
        for(j=0; j<colDos; j++){
            printf("[%d]", resMat[i][j]);
        }
        printf("\n");
        
    }
}
          
return 0;
}
