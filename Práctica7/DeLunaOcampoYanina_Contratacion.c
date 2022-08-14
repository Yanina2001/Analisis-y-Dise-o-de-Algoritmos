#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>
   
int fillRan( int part), liMax(int cuenta[], int n);  

int liMax(int cuenta[],int n){
    int e=2.71828;
    int k=n;
    int end=0;

    printf("Primer valor de K es: %d\n", k);

    fflush(stdin);
    int mejorLug=1+rand()%(50 - 1);
    printf("Primer valor con mejor calificacion es: %d\n", mejorLug);
	
	int a;
        for(a=1; a<=k; a++){
            if(cuenta[a]>mejorLug){
                mejorLug = cuenta[a];
                k=a;
            }
        }
        printf("Segundo valor de mejor calificacion es: %d\n", mejorLug);
		
		int i;
        for (i=k+1; i<=n; i++){
          if(cuenta[i]>mejorLug){
                end=cuenta[i];
       		}
        }
        printf("Ultimo valor de k es: %d\n", k);
        printf("El mejor valor de mejor calificacion es de %d, este sera contratado.", end);
    }
    
 int main (){

    int part;
    printf("Digite el numero de participantes: ");
    scanf("%d",&part);
    fillRan(part);
    return 0;
}

int fillRan( int n){
    int cuenta[n];
    srand((time(NULL)));
    int i;
    for (i=0; i<=n; i++){
        cuenta[i] = 1+ rand()% (50-1+1);
        printf("%d\n",cuenta[i]);
    }
    liMax(cuenta,n);
} 






