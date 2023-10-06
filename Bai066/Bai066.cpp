#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[], int&);
bool KTnguyento(int);
int Demnguyento(int[], int);
int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << "So luong la " << Demnguyento(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap mang a[" << i << "] ";
		cin >> a[i];
	}
}
bool KTnguyento(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return n > 1;
}
int Demnguyento(int a[], int n)
{
	int dem = 0;
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i-1; j++)
		{
			if (a[i] == a[j])
				flag = 0;
		}
		if (KTnguyento(a[i]) && flag == 1)
			dem++;
	}
	return dem;
}