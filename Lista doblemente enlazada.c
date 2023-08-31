#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	int dato;
	struct nodo*siguiente;
	struct nodo*atras;
} Nodo;

Nodo* primero= NULL;
Nodo* ultimo= NULL;

void insertarNodos();
void buscarNodo();
void modificarNodo();
void eliminarNodo();
void verListaPU();
void verListaPU();

int main(int argc, char *argv[]){
	
    insertarNodos();
    insertarNodos();
    insertarNodos();
    insertarNodos();
    buscarNodo();
	modificarNodo();
	eliminarNodo();
    printf("\n");
	verListaPU();
	printf("\n");
	verListaUP();

	return 0;	
}


void insertarNodos(){
	Nodo* nuevo=(Nodo *)malloc(sizeof(Nodo));// agregar memoria dinamica
printf("escribe datos del nodo: ");
scanf("%d",&nuevo->dato);
if (primero == NULL){
	primero = nuevo;
	primero->siguiente = NULL;
	primero->atras = NULL;
	ultimo = primero;
	
}else{
	
	ultimo->siguiente=nuevo;
	nuevo->siguiente =NULL;
	nuevo->atras = ultimo;
	ultimo=nuevo;
}
}

void buscarNodo(){
	Nodo* actual = (Nodo*)malloc(sizeof(Nodo));
	actual = primero;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingrese el dato del nodo a Buscar: ");
	scanf("%d", &nodoBuscado);
	
	if(primero!=NULL){
		while(actual != NULL && encontrado != 1){
			
			if(actual->dato == nodoBuscado){
				printf("\n El nodo con el dato ( %d ) Encontrado\n\n", nodoBuscado);
				encontrado = 1;
			}
			
			actual = actual->siguiente;
		}
		if(encontrado == 0){
			printf("\n Nodo no Encontrado\n\n");
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}

void modificarNodo(){
	Nodo* actual = (Nodo*)malloc(sizeof(Nodo));
	actual = primero;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingrese el dato del nodo a Buscar para Modificar: ");
	scanf("%d", &nodoBuscado);
	
	if(primero!=NULL){
		while(actual != NULL && encontrado != 1){
			
			if(actual->dato == nodoBuscado){
				printf("\n El nodo con el dato ( %d ) Encontrado", nodoBuscado);
				printf("\n Ingrese el nuevo dato para este nodo: ");
				scanf("%d", &actual->dato);
				printf("\n Nodo modificado con exito\n\n");
				encontrado = 1;
			}
			
			actual = actual->siguiente;
		}
		if(encontrado == 0){
			printf("\n Nodo no Encontrado\n\n");
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}


// 13, 16, 2, 9

// primero = 13      ultimo = 9      nuevo = 9      nodoBuscado = 2   encontrado = 0            actual    =  9        anterior   =  2                      13    16   2  9
 
// lista doble ------    NULL <- 13 -> <- 5 -> <- 2 -> <- 9 -> NULL        actual = null                                    9  2  16  13

void eliminarNodo(){
	Nodo* actual = (Nodo*)malloc(sizeof(Nodo));
	actual = primero;
	Nodo* anterior = (Nodo*)malloc(sizeof(Nodo));
	anterior = NULL;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingrese el dato del nodo a Buscar para Eliminar: ");
	scanf("%d", &nodoBuscado);
	
	if(primero!=NULL){
		while(actual != NULL && encontrado != 1){
			
			if(actual->dato == nodoBuscado){
				
				if(actual==primero){
					primero = primero->siguiente;
					primero->atras = NULL;
				}else if(actual==ultimo){
					anterior->siguiente = NULL;
					ultimo = anterior;
				}else{
					anterior->siguiente = actual->siguiente;
					actual->siguiente->atras = anterior;
				}
				printf("\n Nodo eliminado con exito\n\n");
				
				encontrado = 1;
			}
			anterior = actual;
			actual = actual->siguiente;
		}
		if(encontrado == 0){
			printf("\n Nodo no Encontrado\n\n");
		}else{
			free(anterior);
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}


void verListaPU(){
	Nodo* actual = (Nodo *)malloc(sizeof(Nodo));
	actual = primero;
	if(primero!=NULL){
		while(actual != NULL){
			printf("\n %d", actual->dato);
			actual = actual->siguiente;
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}

void verListaUP(){
	Nodo* actual = (Nodo*)malloc(sizeof(Nodo*));
	actual = ultimo;
	if(primero!=NULL){
		while(actual != NULL){
			printf("\n %d", actual->dato);
			actual = actual->atras;
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}	
}
