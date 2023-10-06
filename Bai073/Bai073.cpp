#include <iostream>

using namespace std;

void Nhap(float[], int&);
float NhoNhat(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	float lc = NhoNhat(a, n);
	cout << "Gia tri nho nhat trong mang la: " << lc;
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
float NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (lc > a[i])
			lc = a[i];
	return lc;
}
