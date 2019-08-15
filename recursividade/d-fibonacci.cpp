#include<stdlib.h>
#include<stdio.h>

int fibonacci(int n){
    if(n==1||n==2){
        return 1;
    }else{
        int result = fibonacci(n-1)+fibonacci(n-2);
        return result;
    }
}

main(){
    int termo=10, i;
    printf("fibonacci:");
    
	for(i=1;i<=termo;i++){
		printf(" %d", fibonacci(i));
	}
	
}
