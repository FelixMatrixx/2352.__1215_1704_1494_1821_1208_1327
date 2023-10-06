#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void Nhap(float[], int&);
int DemGiaTri(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	int dem = DemGiaTri(a, n);
	cout << "Ket qua la: " << dem;
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "]:";
		cin >> a[i];
	}
}
int DemGiaTri(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] * a[i + 1] > 0 && abs(a[i]) < abs(a[i + 1]))
			dem++;
	return dem;
}
