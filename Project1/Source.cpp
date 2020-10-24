#include<iostream>
#include<fstream>
#include<iomanip>
#include<cmath>
void Ivesti(int Mas[], int n);
void Apversti(int Mas[], int n);


const int nMax=500;

using namespace std;

int main()
{
	int n;

	cout << "Iveskite skaiciu" << endl;
	cin >> n;

	cout << "-----------------" << endl;

	int Mas[nMax];

	Ivesti(Mas, n);
	Apversti(Mas, n);
	

	system("pause");
	return 0;
}
void Ivesti(int Mas[], int n)
{
	int s;
	ifstream fd("Duom.txt");
	for (int i = 0; i < 2; i++)
	{
		fd >> Mas[i];
	}
	fd.close();
	for (int i = 2; i < n; i++)
	{
		Mas[i] = Mas[i - 1] + Mas[i - 2];

	}


	for (int i = 0; i < n; i++)
	{
		cout << Mas[i] << endl;
		

	}

	cout << "-----------------" << endl;
}
void Apversti(int Mas[], int n)
{
	for (int i = n-1; i >= 0; i--)
	{
		cout << Mas[i] << endl;

	}

}
