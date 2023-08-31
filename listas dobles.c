#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct nodo{
	int dato;
	struct nodo* siguiente; 
	struct nodo* atras;
}nodo;

//se iniciliza lista
nodo* primero = NULL;
nodo* ultimo = NULL;

void insertarNodo();
void buscarNodo();
void modificarNodo();
void eliminarNodo();
void verListaPU();
void verListaUP();

int main(){
	int opcionMenu = 0;
	int con,nn;
	system ("cls");
	do{
		printf("\n----------------------------------"); 
		printf("\n 1. Insertar                     |");      
		printf("\n 2. Buscar                       |");
		printf("\n 3. Modificar                    |");
		printf("\n 4. Eliminar                     |");		
		printf("\n 5. Ve lista de primero a ultimo |");
		printf("\n 6. Ve lista de ultimo a primero |"); 
		printf("\n 7. Salir                        |");
		printf("\n----------------------------------"); 
		printf("\n\n Escoja una Opcion ");
		scanf("%d", &opcionMenu);
		system("cls");
		switch(opcionMenu){
			case 1:
				printf("\n\n INSERTA NODO EN LA LISTA \n\n");
				printf(" ¿Cuantos nodos deseas crear?");
				scanf("%d",&nn);
				for(con=0;con<nn;con++){
				insertarNodo();
				}
				system ("cls");
				return main();
				insertarNodo();
				break;
			case 2:
				printf("\n\n BUSCAR UN NODO EN LA LISTA \n\n");
				buscarNodo();
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
				printf("\n\n VER LISTA DE NODOS DEL PRIMERO AL UTLIMO\n\n");
				verListaPU();
				break;
			case 6:
				printf("\n\n VER LISTA DE NODOS DEL UTLIMO AL PRIMERO\n\n");
				verListaUP();
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

// primero =  null       ultimo=  null       nuevo= #

//lista Doble...    null <- # -> <- # -> <- # -> null
void insertarNodo(){
	nodo* nuevo = (nodo*)malloc(sizeof(nodo)); //se crea un nodo o se asigna un espacion en la memoria
	printf(" \n \n Ingrese el dato que contendra el nuevo Nodo: ");
	scanf("%d", &nuevo->dato); 
	
	if(primero==NULL){  //si el primer dato apunta a nulo se realizara esta accion
		primero = nuevo;   //nuevo nodo sea el primero
		primero->siguiente = NULL; //el primer nodo cuando apunta al siguiente sera NULL
		primero->atras = NULL;   //   y el q apunta atras tambien apuntara atras 
		ultimo = primero;       // el primero tambien sera el ultimo
	}else{     
		ultimo->siguiente = nuevo;   //el ultimo de la lista ahora va apuntar al nuevo dato 
		nuevo->siguiente = NULL;    // y el dato nuevo va apuntar a null
		nuevo->atras = ultimo;     //   y tambien va a puntar al dato ultimo
		ultimo = nuevo;       	// y aqui se actualiza el dato ultimo por el que acabamos de poner (dato nuevo)
	}
	printf(" \n \n Se inserto correctamente ");
}

void buscarNodo(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primero;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingrese el dato del nodo a Buscar: ");
	scanf("%d", &nodoBuscado);
	
	if(primero!=NULL){
		while(actual != NULL && encontrado != 1){
			
			if(actual->dato == nodoBuscado){
				printf("\n Se encontro el dato %d \n\n", nodoBuscado);
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
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primero;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingrese el dato para Modificar: ");
	scanf("%d", &nodoBuscado);
	
	if(primero!=NULL){
		while(actual != NULL && encontrado != 1){
			
			if(actual->dato == nodoBuscado){
				printf("\n Se encontro el nodo %d", nodoBuscado);
				printf("\n Ingrese el nuevo dato para este nodo: ");
				scanf("%d", &actual->dato);
				printf("\n Nodo modificado\n\n");
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

void eliminarNodo(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primero;
	nodo* anterior = (nodo*)malloc(sizeof(nodo));
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
	nodo* actual = (nodo*)malloc(sizeof(nodo));
	actual = primero;  //se empezara a recorrer la lista desde el primero 
	if(primero!=NULL){  
		while(actual != NULL){
			printf("\n %d", actual->dato); //se imprime el dato empezando por el primero
			actual = actual->siguiente;  //se va actualizando al siguiente dato o va pasando al que sigue 
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}

void verListaUP(){
	nodo* actual = (nodo*)malloc(sizeof(nodo));
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
