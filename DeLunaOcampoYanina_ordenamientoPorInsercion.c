#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void listaOrdenada(int n, int *array);

int main(int argc, char *argv[]){

	int N, p=0;

   srand(time(NULL));

   printf("Digite la cantidad de elementos que desea para el arreglo: ");
   scanf("%d", &N);
   int array[N];
   printf("\n");

	for (p = 0; p < N; p++){
		array[p]=p;
	}

	for (p = 0; p < N; p++){
		array[p] = rand()%10+1;
		printf("En la posicion [%d] se asigno el numero aleatorio %d", p, array[p]);
		printf("\n");
	}
	printf("\n");
	listaOrdenada(N,array);
	return 0;	
}

void listaOrdenada(int N, int *array){
	int x=0, y=0, pivote=0;

	for (y = 1; y < N; y++){
		pivote = array[y];
		x = y - 1;

		while(array[x] > pivote && x >= 0){
			array[x+1] = array[x];
			x = x - 1;
		}
	array[x + 1] = pivote;
	}
	
	printf("Lista ordenada por insercion.\n");
    for(x = 0; x < N; x++){
	   printf("Ahora, en la posicion [%d] encontramos al numero %d", x, array[x]);
	   printf("\n");
    }
}
