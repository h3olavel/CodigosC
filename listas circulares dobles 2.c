#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct nodo{
	int dato;
	struct nodo*siguiente;
	struct nodo*atras;
} Nodo;

Nodo* primero= NULL;
Nodo* ultimo= NULL;

void insertarNodos();
void buscarElemento();
void eliminarNodo();
void modificarNodo();
void verElementos();
void verElementosUP();

int main(){
	
	
	int opcionMenu = 0;
	int con,nn;
	system ("cls");
	do{
		printf("\n----------------------------------"); 
		printf("\n 1. Insertar                      |");      
		printf("\n 2. Buscar                        |");
		printf("\n 3. Modificar                     |");
		printf("\n 4. Eliminar                      |");		
		printf("\n 5. Ver lista de primer a ultimo  |");
		printf("\n 6. ver lista de ultimo a primero |");
		printf("\n 7. Salir                         |");
		printf("\n----------------------------------"); 
		printf("\n\n Escoja una Opcion:  ");
		scanf("%d", &opcionMenu);
		system("cls");
		switch(opcionMenu){
			case 1:
				printf("\n\n INSERTA NODO EN LA LISTA \n\n");
				printf(" ¿Cuantos nodos deseas crear? ");
				scanf("%d",&nn);
				for(con=0;con<nn;con++){
				insertarNodos();
				}
				system ("cls");
				return main();
				insertarNodos();
				break;
			case 2:
				printf("\n\n BUSCAR UN NODO EN LA LISTA \n\n");
				buscarElemento();
				break;	
			case 3:
				printf("\n\n MODIFICAR UN NODO DE LA LISTA \n\n");
				modificarNodo();
				break;
			case 4:
				printf("\n\n ELIMINAR UN NODO DE LA LISTA \n\n");
				eliminarNodo();
				break;
			case 5:
				printf("\n\n VER LISTA DE NODOS \n\n");
				verElementos();
				break;
			case 6:
				printf("\n\n VER LISTA DE NODOS \n\n");
				verElementosUP();
				break;
			case 7:
				printf("\n\n Programa finalizado...");
				break;
			default:
				printf("\n\n Opcion No Valida \n\n");	
		}
	}while(opcionMenu != 7);
	return 0;
}

void insertarNodos(){
		Nodo* nuevo=(Nodo *)malloc(sizeof(Nodo));
	printf("Ingrese el dato del nodo: ");
	scanf("%d",&nuevo->dato);
	
if(primero==NULL){
	primero = nuevo;
	primero->siguiente = primero;
	ultimo = primero;
	primero->atras=ultimo;	
}else{
	ultimo->siguiente = nuevo;
	nuevo->siguiente = primero;
	nuevo->atras = ultimo;
	ultimo = nuevo;
		primero->atras = ultimo;
}	
	
}

void verElementos(){
Nodo* actual=(Nodo *)malloc(sizeof(Nodo));
	actual=primero;
	if(primero!=NULL){
		do{
			printf("\n %d",actual->dato);
			actual=actual->siguiente;
		}while(actual != primero);
	}else{
		printf(" \n La lista esta vacia");
	}
}

void verElementosUP(){
Nodo* actual=(Nodo *)malloc(sizeof(Nodo));
	actual=ultimo;
	if(primero!=NULL){
		do{
			printf("\n %d",actual->dato);
			actual=actual->atras;
		}while(actual != ultimo);
	}else{
		printf(" \n La lista esta vacia");
	}
}

void buscarElemento(){
	Nodo* actual=(Nodo *)malloc(sizeof(Nodo));
	actual=primero;
	int nodoBuscar=0, encontrado=0;
	printf("\n \n Ingrese el valor que desea buscar:  ");
	scanf("%d",&nodoBuscar);
	if(primero!=NULL){
		do{
			if(actual->dato == nodoBuscar){
			printf("\n Se encontro el dato: %d ");
			encontrado=1;
			}
			actual=actual->siguiente;
		}while(actual != primero && encontrado != 1);
		if(encontrado==0){
			printf("\n No se encontro el dato ");
		}
	}else{
		printf("\n\n La lista esta vavia \n\n");
	}
	
}

void modificarNodo(){
	Nodo* actual=(Nodo *)malloc(sizeof(Nodo));
	actual=primero;
	int nodoBuscar= 0,encontrado=0;
	printf("\n\nIngrese el valor del nodo a buscar para modificar: ");
	scanf("%d", &nodoBuscar);
	if(primero!=NULL){
		do{
			if(actual->dato == nodoBuscar){
			printf("\n Se encontro el dato: %d ");
			printf("\n Ingrese el nuevo dato:  ");
			scanf("%d",&actual->dato);
			encontrado=1;
			}
			actual=actual->siguiente;
		}while(actual != primero && encontrado != 1);
		if(encontrado==0){
			printf("\n No se encontro el dato ");
		}
	}else{
		printf("\n\n La lista esta vavia \n\n");
	}
	
}

void eliminarNodo(){
Nodo* actual=(Nodo *)malloc(sizeof(Nodo));
Nodo* anterior=(Nodo *)malloc(sizeof(Nodo));
	anterior=NULL;
	actual=primero;
	
	int nodoBuscar=0, encontrado=0;
	printf("\n \n Ingrese el valor que desea eliminar:  ");
	scanf("%d",&nodoBuscar);
	if(primero!=NULL){
		do{
			if(actual->dato == nodoBuscar){
			printf("\n Se encontro el dato: %d ",nodoBuscar);
			if(actual==primero){
				primero=primero->siguiente;
				primero->atras= ultimo;
				ultimo->siguiente=primero;
			}else if(actual==ultimo){
				ultimo= anterior;
				ultimo->siguiente=primero;
				primero->atras= ultimo;
			}else{
				anterior->siguiente = actual->siguiente;
				actual->siguiente->atras= anterior;
			}
			printf("\n Se elimino ");
			encontrado=1;
			}
			anterior = actual;
			actual=actual->siguiente;
		}while(actual != primero && encontrado != 1);
		if(encontrado==0){
			printf("\n No se encontro el dato ");
		}else{
			free(anterior);
	}
}else{
	printf("\n\n La lista esta vavia \n\n");
	}
}
