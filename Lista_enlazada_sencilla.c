#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
  int id;
  struct Nodo *siguiente;
}Nodo;

typedef struct Lista{
  struct Nodo *inicio;
}Lista;


void insertafinal(Lista *lista,Nodo *nodo){
  Nodo *actual = lista->inicio;
  if (actual==NULL) {
    lista->inicio = nodo;
  }
  else{
    while (actual->siguiente) {
      actual = actual->siguiente;
    }
    actual->siguiente = nodo;
  }
}

Nodo *crearNodo(int id){
  Nodo *nodo = calloc(1,sizeof(Nodo));
  nodo->id = id;
  return nodo;
}

void imprimir_lista(Lista *lista){
  Nodo *temporal = lista->inicio;
  while (temporal != NULL) {
    printf("nodo: %d  \n",temp->id);
    temporal = temporal -> siguiente;
  }
}

int main(int argc, char const *argv[]) {

  Lista *lista =  (Lista*)calloc(1,sizeof(Lista));

  Nodo *nodito1 = crearNodo(1);
  Nodo *nodito2 = crearNodo(2);
  Nodo *nodito3 = crearNodo(3);
  Nodo *nodito4 = crearNodo(4);

  insertafinal(lista,nodito1);
  insertafinal(lista,nodito2);
  insertafinal(lista,nodito3);
  insertafinal(lista,nodito4);

  imprimir_lista(lista);

  return 0;
