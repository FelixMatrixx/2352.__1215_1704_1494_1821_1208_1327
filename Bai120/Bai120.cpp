#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[], int&);
bool Ktnguyento(int);
int  Tontai(int[], int);
int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << Tontai(a, n);
	return 0;
}
void Nhap(int  a[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] ";
		cin >> a[i];
	}
}
bool Ktnguyento(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return n > 1;
}
int Tontai(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (Ktnguyento(i))
			return 1;
	}
	return 0;
}