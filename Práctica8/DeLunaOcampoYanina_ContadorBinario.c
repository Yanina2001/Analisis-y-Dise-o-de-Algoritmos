 #include <stdio.h>
 #include <stdlib.h>

 int fillBin (int k);
 void increment (int arr[], int k);

 int main (){
 	
    int k=0;
    printf("Digite el tamanio que desea que tenga el contador: ");
    scanf("%d",&k);
    fillBin(k);
    
 }
 

 int fillBin (int k){
    int arr[k];
    int i;
    for(i=0; i<=k-1; i++){
        arr[i] = 0;
        printf(" %d", arr[i]);
    }
   printf("\n");
   increment (arr,k);
 }

 void increment (int arr[], int k){
  
  int logn=k;
  int noIn=0;
  printf("Digite las veces que desea repetir la funcion incremento: ");
    scanf("%d",&noIn);

    do{
    int i=0;
    while (i<logn &&  arr[i]==1){
        arr[i]=0;
        i = i + 1;
    } 
        if(i<logn){
            arr[i]=1;
        }
	int a;
    for(a=0; a<logn; a++){
        printf(" %d", arr[a]);
    } 
    noIn= noIn-1; 
    printf("\n");
    }while( noIn!=0);
   
 }

