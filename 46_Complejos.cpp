/***45 Polimorfismo sobrecargado.cpp******
//Clases con sobrecarga de funciones (polimorfismo)
*****09 de nov 2022 Diego Marquez********/
#include<iostream>
using namespace std;

class Complejos
{
	private:
		int real,imag;
	public:
		Complejos(int r=0,int i=0)
		{
			real=r;
			imag=i;
		}
	Complejos operator + (Complejos const &obj)
	{
		Complejos res;
		res.real=real+obj.real;
		res.imag=imag+obj.imag;
		return res;
	}
	Complejos operator - (Complejos const &obj)
	{
		Complejos res;
		res.real=real-obj.real;
		res.imag=imag-obj.imag;
		return res;
	}
	void print()
	{
		cout<< real <<" +i " << imag<<endl;
	}
};
int main()
{
	Complejos c1(10,5),c2(2,4);
	Complejos c3=c1+c2;//se llama a: operador +
	c3.print();
	Complejos c4(10,1),c5(2,4);
	Complejos c6=c4-c5;//se llama a: operador +
	c6.print();
}
