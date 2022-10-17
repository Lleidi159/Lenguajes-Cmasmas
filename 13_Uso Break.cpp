/***13_Uso Break.cpp******
*****17 de oct 2022 Diego Marquez********/
/*Estructura while c++ */
#include<iostream>
using namespace std;
int main()
{
	int n=6,i=1;
	while(i<=10)
	{
		cout<< n << " x " << i << " = " << n*i << endl;
		if(i==5) break;
		i++;
	}
}
