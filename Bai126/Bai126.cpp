#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[], int&);
bool Kiemtragiam(int[], int);
int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << Kiemtragiam(a, n);
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
bool Kiemtragiam(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < a[i + 1])
			return false;
	}
	return true;
}