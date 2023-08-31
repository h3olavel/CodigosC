#include <string.h>
#include <stdio.h>
#include <stdlib.h>

	typedef struct nodo{
	int dato;
	struct nodo*siguiente;
	
} Nodo;

Nodo* primero= NULL;

void insertarNodos();
void verElementos();
void eliminarElemento();
void buscarElemento();

void insertarNodos(){
	Nodo* nuevo=(Nodo *)malloc(sizeof(Nodo));// agregar memoria dinamica
printf("escribe el primer dato del nodo:");
scanf("%d",&nuevo->dato);
nuevo->siguiente=primero;
primero=nuevo;
	
}


void verElementos(){
	Nodo* actual=(Nodo *)malloc(sizeof(Nodo));
	actual=primero;
	if(primero!=NULL){
while (actual!=NULL){
	printf("%d\n", actual->dato);
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
}
}else{
printf("la pila esta vacia\n");
}
	}
void buscarElemento(){
	
	Nodo *actual;
	actual=primero;
	int b;
	printf("\n\n ingresa el dato que desea buscar");
	scanf("%d",&b);
	
	do{
		if (actual->dato ==b){
			printf("\n\n Se encontro el dato %d \n",b);
			printf("\n\n En la direccion de memoria: %p \n",&actual->dato);
			break;
		}else{
			actual=actual->siguiente;
			if(actual==NULL){
				printf("\n\n No se encontro el dato %d \n", b);
			}
		}
	}while (actual !=NULL);
}
int main(int argc, char *argv[]){
	
	int numero,subnu,subnu2,n1,n2,r,op;
	
		op = 1;
		

	while(op==1)
	{
		system("cls");
	printf("Elija el menu(1-6):\n 1)insertar datos en la pila \n 2)mostrar dato de la pila \n 3)buscar dato en la pila \n 4)eliminar dato en la pila \n 5)modificar pila \n 6) salir \n     "),scanf("%i",&numero);
	
	
	switch(numero){
		
		case 1:
		
		
	insertarNodos();
	insertarNodos();
	insertarNodos();
	insertarNodos();
	printf("\n\n Listo ya insertaste los datos de la pila");
	printf("\n\n ¿quieres vorver almenu principal para ver los datos de la pila?");
							printf("\n 1.-si \n 2.-no \n Escriba 1 para si y 2 para no: "),scanf("%i",&op);
					
				
			break;
				
		case 2:
		printf("Datos de la pila : \n");
		verElementos();
			printf("\n\n ¿quieres vorver almenu principal?");
							printf("\n 1.-si \n 2.-No \n Escriba 1 para si y 2 para no: "),scanf("%i",&op);
				
		break;
		case 3:
		//buscar datos de la pila
		
		buscarElemento();
		
		
			printf("\n\n ¿quieres vorver almenu principal?");
					printf("\n 1.-si \n 2.-No \n Escriba 1 para si y 2 para no: "),scanf("%i",&op);
		break;
		case 4:
		
		//eliminar datos de la pila
	 eliminarElemento();
		printf("\n\n Has eliminado un dato \n");
		verElementos();
			printf("\n\n ¿quieres vorver almenu principal?");
							printf("\n 1.-si \n 2.-No \n Escriba 1 para si y 2 para no: "),scanf("%i",&op);
				
		break;
		case 5:
		//modificar pila
		numero=primero;
	primero=primero->siguiente;
		free(numero);
		insertarNodos();
		verElementos();
			printf("\n\n ¿quieres vorver almenu principal?");
							printf("\n 1.-si \n 2.-No \n Escriba 1 para si y 2 para no: "),scanf("%i",&op);
				
		break;
		case 6:
		printf("salir del programa");
		printf("\n 1.-no \n 2.-si \n Escriba 1 para no y 2 para si: "),scanf("%i",&op);
							break;
	}
	

}
	return 0;
}

