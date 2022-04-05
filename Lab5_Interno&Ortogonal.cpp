#include <iostream>


//Incluimos librerias propias de C++

using namespace std;


//En este segmento de código es necesario definir primero cómo funciona el producto interno 

 //PARA AMBOS CASO DEFINO A Y B , y A Y C COMO MATRIZ 1X3 PARA PODERLAS OPERAR 


//PRIMERO: UN EJEMPLO CON VECTORES ORTOGONALES 

double prodint_ORTOGONAL(int n,double A[],double B[]){ 
    
    //PARA ESTE CASO DEFINO A Y B COMO MATRIZ 1X3 PARA PODERLAS OPERAR 
    
	double d=0;
	for(int i=0;i<n;i++)
		d+=A[i]*B[i];
	return d;
	}
	
//SEGUNDO: EJEMPLO CON VECTORES NO ORTOGONALES 

double prodint_NOORTOGONAL(int n,double A[],double C[]){ 
    

    
	double e=0;
	for(int i=0;i<n;i++)
		e+=A[i]*C[i];
	return e;
	}
	

	

//defino el test de ortoganilidad pues se usa el valor de d y e 
	
void ortog1(int n,double A[],double B[]){
	double d=prodint_ORTOGONAL(n,A,B);
	if(d!=0)
		cout<<"Los vectores no son ortogonales pues el producto escalar es diferente de cero "<<endl;
	else
		cout<<"En el caso 1 los vectores  son ortogonales pues el producto escalar es cero "<<endl;
}

void ortog2(int n,double A[],double C[]){
	double e=prodint_NOORTOGONAL(n,A,C);
	if(e!=0)
		cout<<"En el caso 2 los vectores no son ortogonales pues el producto escalar es diferente de cero "<<endl;
	else
		cout<<"Los vectores son ortogonales pues el producto escalar es cero "<<endl;
}





//INICIALIZO VARIABLE 


int main(){
    
    //Tamaño n 
	int n=3;
	//Escalar 
	
      
	double A[n]={1,2,3};

	double B[n]={0,0,0};
	
	double C[n]={4,5,6};

	//llamar a las funciones
	
	prodint_ORTOGONAL(n,A,B);
	prodint_NOORTOGONAL(n,A,C);
	ortog1(n,A,B);
	ortog2(n,A,C);
	
	
	
	//Imprimir valor producto cruz o interno 

	cout<<"CASO 1 - El producto A*B es: "<<prodint_ORTOGONAL(n,A,B)<<endl;
	cout<<"CASO 2 - El producto A*C es:"<<prodint_NOORTOGONAL(n,A,C)<<endl;

	
	return 0;
}


