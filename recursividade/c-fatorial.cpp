#include<stdlib.h>
#include<stdio.h>

int fatorial(int n){
    if (n<=1){
        return 1;
    }else if (n>0){
        int result = n*fatorial(n-1);
        return result;
    }
}

main(){
	int fat;
	printf ("Valor para fatorial: ");
	scanf("%d", &fat);
	printf("fatorial de %d: %d", fat, fatorial(fat));
}
