#include<stdio.h>
int a,b,resultado;
int i=1;
int main() {
printf("INGRESE EL PRIMER DIGITO\n");
scanf("%d",&a);
printf("INGRESE EL SEGUNDO NUMERO\n");
scanf("%d",&b);	
do{		
resultado=resultado+b;
i=i+1;		
}while(i<=a);	
printf("EL RESULTADO ES\n %d",resultado);	
return 0;
}

