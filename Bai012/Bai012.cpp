#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void Lietke(float[], int);
int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	Lietke(a, n);


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
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(8) << a[i];
	}
}
void Lietke(float a[], int n)
{
	cout << "Vi tri ma gia tri am la ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			cout << setw(8) << i;
	}

}