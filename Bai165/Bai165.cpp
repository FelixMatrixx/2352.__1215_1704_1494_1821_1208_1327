#include<iostream>

using namespace std;
void Nhap(float[], int&);
void XoaViTri(float[], int&, int);
float LonNhat(float[], int);
void XoaLonNhat(float[], int&);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	XoaLonNhat(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
void XoaViTri(float a[], int &n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}
float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}
void XoaLonNhat(float a[], int& n)
{
	float lc = LonNhat(a, n);
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == lc)
			XoaViTri(a, n, i);
}