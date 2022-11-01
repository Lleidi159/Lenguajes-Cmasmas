/***17_for anidado.cpp******
for anidado
*****17 de oct 2022 Diego Marquez********/
/*Estructura while c++ */
#include<iostream>
using namespace std;
int main()
{
	int n=5,m;
	for (int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			cout << n<<" , ";
			n = n+4;
			n++;
		}
		cout<< endl;
	}
}
