#include<stdio.h>
#include<stdlib.h>
int  cont=0;
int div_sub(int n1, int n2){
	int result;

	if(n1==0){
		return cont;	
	}else{
		result = div_sub(n1-n2,n2);
		cont++;		
	}
}	
main(){
	int n1=6, n2=2;
	printf("Resultado: %d", div_sub(n1, n2));
}
