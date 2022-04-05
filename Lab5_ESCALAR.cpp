#include <iostream>


//Incluimos librerias propias de C++

using namespace std;


//En este segmento de código es necesario definir primero cómo funciona el producto escalar pues
//No es algo que c++ conozca 


void prodescalar(int n,double k,double A[],double C[]){
	for(int i=0;i<n;i++)
		C[i]=k*A[i];
}

//DEFINO CÓMO MOSTRAR EL RESULTADO 


void imprimir(int n,double C[]){
	cout<<"(";
	for (int i=0;i<n;i++)
		cout<<C[i]<<",";
	cout<<")"<<endl;
}


//INICIALIZO VARIABLE 


int main(){
    
    //Tamaño n 
	int n=3;
	//Escalar 
	
	int k=3;//escalar
      
	double A[n]={1,2,3};

	double C[n]={0,0,0};

	//llamar a las funciones
	
	prodescalar(n,k,A,C); 
	
	
	//Imprimir Prod. escalar 

	cout<<"El vector A es:"<<endl;
	imprimir(n,A);
    cout<<"Como el escalar k es 3, el producto escalar da:"<<endl;

	imprimir(n,C);


	return 0;
}