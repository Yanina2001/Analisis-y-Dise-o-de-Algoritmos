#include <stdio.h>

void ordenamiento(int *array, int b, int m, int e);
void ordenamiento_mezcla(int *array, int b, int e);

int main(){
        int array[100];
        int tam, i;
        printf("Digite el tamanioo del arreglo: ");
        scanf("%d", &tam);
 

        printf("\nDigite los elementos con los que desea llenar el arrreglo: \n");

        for(i=0; i<tam; i++)
           scanf("%d", &array[i]);

        ordenamiento_mezcla(array, 0, tam-1); 

        printf("\nEl arreglo ordenado por mezcla es: \n");
        for(i=0; i< tam; i++){
           printf("%d ", array[i]);
        }
        return 0;
}

void ordenamiento(int *array, int v, int p, int k){       
        int l = p-v+1, r = k-p, i;
        int L[l+1], R[r+1];
        for(i=0; i< l; i++){
            L[i] = array[v+i];
        }

        for (i=0; i< r; i++){
            R[i] = array[p+i+1];
        }
        L[l] = 32767;
        R[r] = 32767;
        l = 0;
        r = 0;

        for(i=0; i< k-v+1; i++){
            if(L[l] < R[r]){
                array[v+i] = L[l];
                l ++;
            }
            else{
                array[v+i] = R[r];
                r ++;
            }
        }
}

void ordenamiento_mezcla(int *array, int v, int k){
        if(v < k){
            int p = (v + k) / 2;
            ordenamiento_mezcla(array, v, p);
            ordenamiento_mezcla(array, p+1, k);
            ordenamiento(array, v, p, k);
        }
}
