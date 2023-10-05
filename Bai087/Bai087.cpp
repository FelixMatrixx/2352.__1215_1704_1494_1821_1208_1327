#include<iostream>

using namespace std;
void Nhap(float[], int);
float CuoiCung(float[], int);
int main()
{
	float a[100];
	int n;
	cin >> n;
	Nhap(a, n);
	float cc = CuoiCung(a, n);
	cout << cc;
	return 0;
}
void Nhap(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
float CuoiCung(float a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] > -1 && a[i] < 0)
			return a[i];
	return 0;
}