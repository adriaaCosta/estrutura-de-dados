#include<stdio.h>
#include<stdlib.h>

float soma_mult(float n1, float n2){
	
	if(n2==1){
		return n1;	
	}else if(n2==0){
		return 0;	
	}
	else{
		return n1 + soma_mult(n1, n2-1);
	}
}	
main(){
	float a1=3, a2=2;
	printf("  %.2f", soma_mult(a1, a2));
}
