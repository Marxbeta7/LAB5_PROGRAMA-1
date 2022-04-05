#include <iostream>

//Incluimos librerias propias de C++
using namespace std;


//En este segmento de código es necesario definir primero cómo funciona la suma pues
//No es algo que c++ conozca 


//SUMA
void suma(int n,int m,double A[][3],double B[][3],double D[][3]){
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			D[i][j]=A[i][j]-B[i][j];
}


//Se implementa la función imprimir para poder visualizar el resultado 

void imprimir(int n, int m, double D[][3]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<D[i][j]<<" ";
		cout<<endl;
	}
}

//Ahora si inicializamos las variables para probar que 
//Las funciones operan correctamenten 


int main(){
    
    //Con n filas y m columnas 
    
	int n=2;
	int m=3;
	
	double A[n][3]={{1,2,3},{4,5,6}};
	double B[n][3]={{6,5,4},{3,2,1}};


	//OUTPUT
	double D[n][3];
	
	//vISUALIZACIÓND DE LAS DOS MATRICES 
	
	cout<<"A=";
	imprimir(n,m,A);
	cout<<"B=";
	imprimir(n,m,B);
	
	
	//Mostrar el resultado de la suma 
	
	cout<<"Suma de A y B"<<endl;
	suma(n,m,A,B,D);
	imprimir(n,m,D);

	return 0;
}