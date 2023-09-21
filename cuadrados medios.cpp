#include<iostream>
#include<math.h>

using namespace std;

//accion de elevar al cuadrado y sacar los digitos de enmedio
int operacion(int numero)
{
	int cuadrado , resultado , a;
	cuadrado = pow(numero,2);
	resultado = (cuadrado%1000000);
	a = resultado/100;
	return a;
}



//funcion recursiva
int bucle(int i)
{	
	int s;
	if (i==1)
	{
		s = 4321; // <----------Semilla
	}
	else if (i>1)
	{
		s = operacion(bucle(i-1));
	}
	return s;
}



//funcion principal
int main()
{
	float v;  //para mostrar como punto decimal
	
	for(int i=1;i<200;i++)
	{
		v = bucle(i);
		cout<<bucle(i)<<endl; //numeros sin el punto decimal
		//cout<<v/10000<<endl;  //numeros con el punto decimal
	}
	
	return 0;
}







