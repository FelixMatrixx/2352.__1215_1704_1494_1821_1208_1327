#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void Lietke(float[], int);
float Kiemtra(float[], int);
int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	Lietke(a, n);


}
void Nhap(float a[], int& n)
{
	cout << "Nhap n";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap mang a [" << i << "] ";
		cin >> a[i];
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}
float Kiemtra(float a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];

	}
	return max;
}
void Lietke(float a[], int n)
{
	cout << "Vi tri ma gtri lon nhat la ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] == Kiemtra(a, n))
			cout << setw(4) << i;
	}
}