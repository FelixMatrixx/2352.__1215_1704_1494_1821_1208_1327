#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[], int&);
void Hoanvi(float&, float&);
void Sapxep(float[], int);
void Xuat(float[], int);
int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	Sapxep(a, n);
	Xuat(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] ";
		cin >> a[i];
	}
}
void Hoanvi(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}
void Sapxep(float a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i+1 ; j  < n-1; j++) // a[j] cuoi cung trong mang >0 se duoc hoan vi voi a[i] dau tien >0
		{
			if (a[j]>0 and a[i]>0 )
				Hoanvi(a[i], a[j]);
		}
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(6) << a[i];
	}
}