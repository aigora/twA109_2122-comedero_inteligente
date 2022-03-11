#include<stdio.h>
#include<stdlib.h>

int menu_ppal(int); 

int menu_ppal(int opcion) {
	do {
		printf("\tMENU PRINCIPAL COMEDERO INTELIGENTE\n");
		printf("========================================================\n");
		printf("1- Talla del perro\n2- Introducir la cantidad de comida\n3- Elegir horario\n4- Salir\n");
	} while ((opcion != 1) && (opcion != 2) && (opcion != 3) && (opcion != 4));

}

