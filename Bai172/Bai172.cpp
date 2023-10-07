#include <iostream>
#include <iomanip>
using namespace std;

void NhapTang(float[], int&);
void Xuat(float[], int);

int main()
{
	float b[500];
	int k;
	NhapTang(b, k);
	cout << "Mang da nhap la: ";
	Xuat(b, k);
	return 0;
}

void NhapTang(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
		int x = a[i];
		int j;
		for (j = i - 1; j >= 0 && a[j] > x; j--)
			a[j + 1] = a[j];
		a[j + 1] = x;
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << a[i];
}