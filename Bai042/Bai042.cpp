#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[], int&);
float Tonggiatri(float[], int);
int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	cout << "Tong la " << Tonggiatri(a, n);
	return 0;
	
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap mang a[" << i << "] ";
		cin >> a[i];
	}
}
float Tonggiatri(float a[], int n)
{
	float Tong = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] > abs(a[i + 1]))
			Tong = Tong + a[i];
	}
	return Tong;
}