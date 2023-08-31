#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
	int dato;
	struct nodo*siguiente;
	
} Nodo;

Nodo* primero= NULL;
Nodo* ultimo= NULL;

void insertarNodos();
void modificarNodo();
void buscarElemento();
void eliminarElemento();
void verElementos();
int main(int argc, char *argv[]){
	
    insertarNodos();
    insertarNodos();
    insertarNodos();
    insertarNodos();
	verElementos();
	buscarElemento();
	modificarNodo();
	verElementos();
	eliminarElemento();
	verElementos();
	return 0;	
}

void insertarNodos(){
	Nodo* nuevo=(Nodo *)malloc(sizeof(Nodo));// agregar memoria dinamica
printf("escribe datos del nodo: ");
scanf("%d",&nuevo->dato);
if (primero == NULL){
	primero = nuevo;
	primero->siguiente = NULL;
	ultimo = nuevo;
}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		ultimo = nuevo;
  }
}

void verElementos(){
Nodo* actual=(Nodo *)malloc(sizeof(Nodo));
	actual=primero;
	if(primero!=NULL){
		
while (actual!=NULL){
	printf("%d\n", actual->dato);
	actual= actual->siguiente;
}
}else{
printf("la pila esta vacia\n");
}
	}
	
void buscarElemento(){
	Nodo* actual=(Nodo *)malloc(sizeof(Nodo));
	actual=primero;
	int nodoBuscar= 0,encontrado=0;
	printf("Ingrese el valor del nodo a buscar: ");
	scanf("%d", &nodoBuscar);
	if(primero!=NULL){
		
		while (actual!=NULL){
			if(actual->dato==nodoBuscar){
				printf("\n Se encontro el dato %d \n",nodoBuscar);
				encontrado=1;
			}
			actual= actual->siguiente;
}
if(encontrado == 0){
	printf(" \n nodo no encontrado \n\n");
}
}else{
printf("la pila esta vacia\n");
}
	
}

void modificarNodo(){
	Nodo* actual=(Nodo *)malloc(sizeof(Nodo));
	actual=primero;
	int nodoBuscar= 0,encontrado=0;
	printf("Ingrese el valor del nodo a buscar para modificar: ");
	scanf("%d", &nodoBuscar);
	if(primero!=NULL){
		
		while (actual!=NULL && encontrado != 1){
			if(actual->dato==nodoBuscar){
				printf("\n Se encontro el dato %d \n",nodoBuscar);
				printf("\n Ingrese el nuevo dato para nodo: ");
				scanf("%d", &actual->dato);
				printf("\n Nodo modificado :) \n\n");
				encontrado=1;
			}
			actual= actual->siguiente;
}
if(encontrado == 0){
	printf(" \n nodo no encontrado \n\n");
}
}else{
printf("la pila esta vacia\n");
}
	
}	

void eliminarElemento(){
	
	Nodo* actual=(Nodo*)malloc(sizeof(Nodo));
	actual=primero;
	Nodo* anterior= (Nodo*)malloc(sizeof(Nodo));
	anterior=NULL;
	int nodoBuscar= 0,encontrado=0;
	printf("Ingrese el valor del nodo a eliminar: ");
	scanf("%d", &nodoBuscar);
	if(primero!=NULL){
		
		while (actual!=NULL && encontrado != 1){
			if(actual->dato==nodoBuscar){
				
				if(actual->dato== primero){
					primero=primero->siguiente;
				}else{
					anterior->siguiente = actual->siguiente;
				}
				printf(" \n El nodo ha sido eliminado \n\n");
				encontrado=1;
			}
			anterior=actual;
			actual= actual->siguiente;
}
if(encontrado == 0){
	printf(" \n nodo no encontrado \n\n");
}else{
	free(anterior);
}
}else{
printf("la pila esta vacia\n");
}
	
}
