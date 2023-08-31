#include <stdio.h>
#include <stdlib.h>

void ele();
void come (int op);
void empezarJ (char palabras[][15], char nombre[]);
void muneco (int intentos);

int main(){
	ele();
	return 0;
}

void ele(){
	int op;
	do{
		system("cls");
		printf("\n|------------------------|");
		printf("\n|--AHORCADO De Frutas!!--|");
		printf("\n|------------------------|");
		printf("\n|-Oprime 1 para iniciar:-|");
		printf("\n|------------------------|");
		printf("\n\n");
		scanf("%i",&op);		
	}while(op<1 || op>1);

	if (op=1) come(op);
}


void come (int op){
	char nombrecat[4][15] = {"Frutas"};
	char frutas [10][15] = {"AGUACATE","COCO","SANDIA","MANZANA","CACAO","NARANJA","DURAZNO","FRESA","MELON","KIWI","MORA","PLATANO","TUNA","ZAPOTE"};
	switch(op){
		case 1:
			empezarJ(frutas,nombrecat[op-1]);
			break;
		case 2:
			break;
		
	}	
}

void empezarJ (char palabras[][15], char nombre[]){
	int opcion,i,j,k,longitud,espacios,puntos=100;
	char letra;
	int aciertos = 0;
	int intentos = 0;
	int ganar = 0;
	srand(time(NULL));
	
	opcion = rand() % 10; 
	longitud = strlen(palabras[opcion]);
	char frase[longitud];
	
	for(i=0; i < longitud; i++){
		frase[i] = '_';
	}
	
	do{
		aciertos = 0;
		system("cls");
		printf("\n|-------------------------|");
		printf("\n|--AHORCADO De Frutas!!---|");
		printf("\n|-------------------------|");
		printf("\n|------BUENA SUERTE-------|");
		printf("\n|-------------------------|");
		printf("\nPuntuacion: %i",puntos);
		printf("\nIntentos: %i",6-intentos);
		muneco(intentos);
		
		printf("\n\n\n");
		for(i=0; i < longitud; i++){
			printf(" %c ",frase[i]);
		}

		
		if (intentos == 10){
			printf("\n\n PERDISTE!!\n");
			printf(" La palabra es: %s\n\n",palabras[opcion]);
			
		}
		espacios=0;
		for (i = 0; i < longitud; i++){
			if (frase[i] == '_')
				espacios++;
		}
		if (espacios == 0){
			printf("\n\n GANASTE!!\n\n");
		}
		
		
		printf("\n\n Ingresa una letra (MAYUSCULA): ");
		scanf(" %c",&letra);
		
		for (j = 0; j < longitud; j++){
			if (letra == palabras[opcion][j]){
				frase[j] = letra;
				aciertos++;
			}	
		}
		
		if (aciertos == 0){
			intentos++;	
			puntos -= 10;
		}
		
		
			
	}while(intentos != 7);
	
	
	printf("\n\n");		
}

void muneco (int intentos){
	switch(intentos){
		case 0:
			printf("\n     _______\n    |       |\n    |\n    |\n    |\n    |\n    |\n ----------");
			break;
		case 1:
			printf("\n     _______\n    |       |\n    |       0\n    |\n    |\n    |\n    |\n ----------");
			break;
		case 2:
			printf("\n     _______\n    |       |\n    |       0\n    |       |\n    |\n    |\n    |\n ----------");
			break;
		case 3:
			printf("\n     _______\n    |       |\n    |       0\n    |      /|\n    |\n    |\n    |\n ----------");
			break;
		case 4:
			printf("\n     _______\n    |       |\n    |       0\n    |      /|");
			printf("\\");
			printf("\n");
			printf("    |\n    |\n    |\n ----------");
			break;
		case 5:
			printf("\n     _______\n    |       |\n    |       0\n    |      /|");
			printf("\\");
			printf("\n");
			printf("    |      /\n    |\n    |\n ----------");
			break;
		case 6:
			printf("\n     _______\n    |       |\n    |       0\n    |      /|");
			printf("\\");
			printf("\n");
			printf("    |      / ");
			printf("\\");
			printf("\n");
			printf("    |\n    |\n ----------");
			break;
	}
	
}


