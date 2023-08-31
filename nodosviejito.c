#include <string.h>
#include <stdio.h>
#include <stdlib.h>

	typedef struct nodo{
	char dato[100];
	struct nodo*siguiente;
	
} Nodo;

Nodo* primero= NULL;

void insertarNodos();
void verElementos();
void eliminarElemento();
void buscarElemento();

void insertarNodos(){
	Nodo* nuevo=(Nodo *)malloc(sizeof(Nodo));// agregar memoria dinamica
printf("escribe datos del nodo: ");
scanf("%s",&nuevo->dato);
nuevo->siguiente=primero;
primero=nuevo;
	
}


void verElementos(){
	Nodo* actual=(Nodo *)malloc(sizeof(Nodo));
	actual=primero;
	if(primero!= NULL){
while (actual!= NULL){
	printf("%s \n", &actual->dato);
	actual=actual->siguiente;
}
}else{
printf("la pila esta vacia\n");
}
	}
	
	
void eliminarElemento(){
	Nodo* actual=(Nodo *)malloc(sizeof(Nodo));
	actual=primero;
	if(primero!=NULL){
while (actual!=NULL){
	
	actual=primero;
	primero=primero->siguiente;
		free(actual);
	printf("\nse elimino el dato\n");	
	verElementos();
}
}else{
printf("\n la pila esta vacia\n");
}
	}
void buscarElemento(){
		Nodo* actual=(Nodo *)malloc(sizeof(Nodo));
	actual=primero;
	char ba[100];
	printf("\n\n ingresa el dato que desea buscar: ");
	scanf("%s",&ba);
	
	do{
		if (actual->dato == ba){
			
			printf("\n\n Se encontro el dato %s \n",ba);
			
		}else{
			actual=actual->siguiente;
			if(actual==NULL){
				printf("\n\n No se encontro el dato %s \n", ba);
			}
			actual= actual->siguiente;
		}
	}while (actual !=NULL);
}
int main(int argc, char *argv[]){
	
	insertarNodos();
	insertarNodos();
	insertarNodos();
	insertarNodos();
	verElementos();
	buscarElemento();
	eliminarElemento();
	
	verElementos();
	//eliminarDato();
	return 0;
	
	
}




//typedef struct pila{
	//Nodo* cima;
	
//};Pila;
