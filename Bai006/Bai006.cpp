#include<iostream>
#include<iomanip>
using namespace std;
void nhap(float[], int&);
void xuat(float[], int);
void lietke(float[], int);
int main()
{
	int n;
	float a[100];
	nhap(a, n);
	lietke(a, n);
	return 0;
}
void nhap(float a[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap mang a[" << i << "]";
		cin >> a[i];
	}

}
void xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];

}
void lietke(float a[], int n)
{
	cout << "\nCac so am trong mang la:";
	for (int i = 0; i < n; i++)
	{
		
		if (a[i] < 0)
			cout << setw(8) << a[i];
	}
}