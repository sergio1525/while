#include<stdio.h> 
int a,b,resultado;
int i=1;
int main() {
int a,b,resultado;
int i=1;	
printf("INGRESE EL PRIMER DIGITO\n");
scanf("%d",&a);
printf("INGRESE EL SEGUNDO DIGITO\n");
scanf("%d",&b);	
while(i<=a){	
resultado=resultado+b;
i=i+1;
}
printf("EL RESULTADO ES\n %d",resultado);
}	
