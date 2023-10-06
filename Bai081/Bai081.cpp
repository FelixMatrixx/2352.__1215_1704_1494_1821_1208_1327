#include<iostream>

using namespace std;
void Nhap(float[], int&);
float DauTien(float[], int);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	int dt = DauTien(a, n);
	cout << dt;
	return 0;
}
void Nhap(float a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
float DauTien(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 2003)
			return a[i];
	return 0;
}