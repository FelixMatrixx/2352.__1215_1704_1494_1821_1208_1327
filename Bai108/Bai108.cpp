#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[], int&);
int UCLN(int, int);
int TimUCLN(int[], int);	
int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << "UCLN la "<<TimUCLN(a,n);
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
int UCLN(int a, int b)
{
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
		
	}
	return a + b;
}
int TimUCLN(int a[], int n)
{
	int uoc = a[0];
	for (int i = 0; i < n; i++)
	{
		uoc = UCLN(uoc, a[i]);
	}
	return uoc;
}
