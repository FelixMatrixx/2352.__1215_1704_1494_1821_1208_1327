#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
float LonNhat(float[], int);
int DemLonNhat(float[], int);

int main()
{
	float b[500];
	int k;
	Nhap(b, k);
	cout << "Mang da nhap la: ";
	Xuat(b, k);
	cout << "\nSo luong cac gia tri lon nhat co trong mang: " << DemLonNhat(b, k);
	return 0;
}

void Nhap(float  a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}

int DemGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (abs(a[i]) % 10 == 5)
			dem++;
	return dem;
}

float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

int DemLonNhat(float a[], int n)
{
	float ln = LonNhat(a, n);
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == ln)
			dem++;
	return dem;
}