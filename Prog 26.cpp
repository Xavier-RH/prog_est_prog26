/* Autor: Xavier Romero Hernández, Realizado: 24/02/2022 
	Programa que calcule el área de un círculo, pidiendo al usuario que introduzca el radio, 
	el valor del radio debe ser un numero positivo mayor que 0, el programa debe revisar que el radio que se introdujo sea válido, 
	en caso contrario debe mandar un mensaje y volver a pedir el valor tantas veces sea necesario, hasta que se introduzca un numero valido.
	*/
	
#include <stdio.h>
#include <math.h>

int main(){
	float area, radio;
	
	do{
		printf("Introduce el radio del circulo: ");
		scanf("%f",&radio);
		if(radio<=0){
			printf("El radio introducido no es valido\n");
		}
	}while(radio<=0);
	
	area=M_PI*pow(radio,2);
	
	printf("El area del circulo es de %.2f u2",area);
}
