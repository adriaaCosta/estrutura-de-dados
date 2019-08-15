#include<stdlib.h>
#include<stdio.h>

void torredehanoi(int disco, int origem, int destino, int trans ){
	
    if(disco==1){
    	printf("\nMover DISCO 01 da TORRE %d para TORRE %d\n", origem, destino);
    }else{
		torredehanoi(disco-1, origem, trans, destino ); //empilhando
    	printf("\n Mover DISCO 0%d da TORRE %d para TORRE %d\n",  disco, origem, destino);
        torredehanoi(disco-1, trans, destino, origem );
    }
}

main(){
    int disco;
    printf("***Torre de Hanoi***\n");
    printf("Numero de discos: ");
	scanf("%d", &disco);
	torredehanoi(disco, 1,3,2);
}	
