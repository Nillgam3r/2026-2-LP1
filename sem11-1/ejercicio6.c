#include <stdio.h>
#include <stdlib.h>
struct nodo{
  int valor;
  struct nodo*next;
};

int main(){
  
  //deficion de la lista
  struct nodo *lista=NULL;
  struct nodo *head =NULL;
  struct nodo *aux=NULL;
  //primer elemento
  lista = malloc(sizeof(struct nodo));
  if(lista!=NULL){ //si hay espacio de mmeoria, poner el 1er elemento
    lista->valor = 10;
    lista->next = NULL;
  }else{
    printf("No hay memoria");
    return 1;
  }

  //segundo elemento
  head = lista; //head apunta a lista
  head->next = malloc(sizeof(struct nodo));
  if(head->next!=NULL){ //si hay espacio de mmeoria, poner el 1er elemento
    head = head->next; //head apunta a next
    head->valor = 100;
    head->next = NULL;
  }else{
    printf("No hay memoria");
    return 2;
  }

  //tercer elemento
  head = lista; //head apunta a lista
  while(head->next != NULL) { // Corregido: avanzamos hasta el último nodo para no sobrescribir el segundo
    head = head->next;
  }
  head->next = malloc(sizeof(struct nodo));
  if(head->next!=NULL){ //si hay espacio de mmeoria, poner el 1er elemento
    head = head->next; //head apunta a next
    head->valor = 1000;
    head->next = NULL;
  }else{
    printf("No hay memoria");
    return 3;
  }
  //mostrar los valores
  head = lista; //apunta al inicio de la lista
  while(head!=NULL){ // Corregido: se usa head!=NULL para que imprima también el último elemento
    printf("Valor: %d\n",head->valor);
    head=head->next;
  }

  //liberar memoria
  head = lista; //apunta al inicio de la lista
  while(head!=NULL){ // Corregido: se usa head!=NULL para que imprima también el último elemento
    printf("Valor: %d\n",head->valor);
    aux = head;
    head=head->next;
    free(aux);
  }

  return 0;
}
