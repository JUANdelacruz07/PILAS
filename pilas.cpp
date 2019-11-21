#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};
void imprimirpila(Nodo *&, int&);
void agregarpila(Nodo *&,int);//el nodo se pasa por puntero y direccion , el "int" es el dato que el usuario desea agregar
int main(){
	int num,dato;
	char si;
	Nodo *pila=NULL;//el nodo que apunta a pila esta vacio y por lo tanto es igual a NULL
	do{
		cout<<"Ingresa el dato : ";
		cin>>dato;
		agregarpila(pila,dato);
		cout<<"quieres agragar otro dato a la pila :"<<endl;
		cin>>si;
	}while(si=='s'||si=='S');
	cout<<"se sacaron los elementos "<<endl;
	while(pila != NULL){
		imprimirpila(pila,dato);
		cout<<dato<<endl;
	}
	getch();
	return 0;
}
void agregarpila(Nodo *&pila,int n)//n es el dato que el usuario nos esta pasando
{
	Nodo *nuevonodo=new Nodo();//el new reserba el espacio en meria
	nuevonodo->dato=n;//rellenar el dato
	nuevonodo->siguiente=pila;//pasar pila a nuestro puntero siguiente
	pila=nuevonodo;//se iguala pila a nuevo nodo por que pila es igual a NULL
}
void imprimirpila(Nodo *&pila, int &n){
	Nodo *aux=pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
}
