#include<stdio.h>

int expo_recur(int base, int exp){
    int resultado;

    if(exp == 0){
        resultado = 1;
        return resultado;
    } if (exp > 0) {
        resultado=base * expo_recur(base,exp - 1);
    }else if (exp < 0){
        resultado = 1 / base * expo_recur(base,exp + 1);
    }

    return resultado;
}

void main (){
	int base=0;
	printf("Ingrese valor del numero: ");
	scanf("%d",&base);

	int exp=0;
	printf("Ingrese valor del exponente: ");
	scanf("%d",&exp);

	printf("\nLa potencia de %d^%d = %d",base,exp,expo_recur(base,exp));
}
