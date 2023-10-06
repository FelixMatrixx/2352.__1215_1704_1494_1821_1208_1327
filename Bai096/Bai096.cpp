#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[], int&);
int Sochandau(int[], int);
int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << Sochandau(a, n);
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

int Sochandau(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			return i;
	}
	return -1;
}