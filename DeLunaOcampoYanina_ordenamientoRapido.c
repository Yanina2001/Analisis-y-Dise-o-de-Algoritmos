#include <stdio.h>

void ordCam(int array[], int l_Izq, int l_Der);
void quicksort(int array[], int n);

int main(int argc, const char *argv[]){

    int array[100];
        int lon, i;
        printf("Digite el tamanio del arreglo: ");
        scanf("%d", &lon);
 

        printf("\nDigite los elementos con los que desea llenar el arrreglo: \n");

        for(i=0; i<lon; i++)
           scanf("%d", &array[i]);

    printf("Muestro el arreglo con sus elementos desordenados: \n");
	//imprimimos el arreglo inicial dado para mostrar el cambio despues
    for (i=0; i<lon; i++) {
        printf("%d", array[i]);
        if(i<lon-1)
            printf(", ");
    }

    printf("\n");
    printf("\n");
    
    quicksort(array,lon); //odernamiento con sus parametros dados
    printf("Muestro el arreglo con sus elementos ordenados: \n");
	//imprimimos el arreglo con sus elementos ya ordenados
    for (i=0; i<lon; i++) {
        printf("%d", array[i]);
        if(i<lon-1)
            printf(", ");
    }
    return 0;
}

void ordCam(int array[], int l_Izq, int l_Der){

    int izq, der, temhe, piv;

    izq = l_Izq;
    der = l_Der;
    piv = array[(izq+der)/2];

    do{
        while(array[izq]<piv && izq<l_Der)izq++;
        while(piv<array[der] && der > l_Izq)der--;

        if(izq <=der){

            temhe= array[izq];
            array[izq]=array[der];
            array[der]=temhe;
            izq++;
            der--;
        }

    }while(izq<=der);

    if(l_Izq<der){
        ordCam(array,l_Izq,der);
    }

    if(l_Der>izq){
        ordCam(array,izq,l_Der);
    }
} 

//llama al metodo recursivo con el arreglo que modificamos junto con sus limites para ordenar
void quicksort(int array[],int n){
    ordCam(array,0,n-1);
}
