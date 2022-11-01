/***16_forenIF.cpp******
Estructura For dentro de if's
*****17 de oct 2022 Diego Marquez********/
/*Estructura while c++ */
#include<iostream>
using namespace std;
int main()
{
	char c;
	cout <<"Pulsa S para Mayusculas o N para minusculas: ";
	cin>> c;
	if(c=='s' or c=='S')
	{
		for (int i=65;i<=90;i++)
		{
			cout << char(i);
			if (i==90) continue;
			cout <<", ";
		}
	}
	else if (c=='N' or c=='n')
	{
		for(int i=97; i<=122;i++)
		{
			cout <<char(i);
			if (i==122) continue;
			cout <<", ";
		}
	}
	else
	{
		cout<<"No has escrito ni S ni N";
	}
	cout<<endl;
}
