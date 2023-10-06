#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[], int&);
int Demgiatri(float[], int);
int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	cout << "So luong  la " << Demgiatri(a, n);
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

int Demgiatri(float a[], int n)
{
	int dem = 0;
	for (int i = 1; i <= n - 2; i++)
	{
		if ((a[i] * a[i - 1]) < 0 or (a[i] * a[i + 1]) < 0)
			dem++;
	}
		if (a[n - 1] * a[n - 2] < 0)
			dem++;
	return dem;
}