#include<iostream>

using namespace std;
void Nhap(float[], int);
float ViTriDau(float[], int);
float TimViTri(float[], int);
int main()
{
	float a[100];
	int n;
	cin >> n;
	Nhap(a, n);
	int vt = TimViTri(a, n);
	cout << vt;
	return 0;
}
void Nhap(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
float ViTriDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			return i;
	return -1;
}
float TimViTri(float a[], int n)
{
	int lc = ViTriDau(a,n);
	if (lc == -1)
		return -1;
	for (int i = 0; i <= n - 1; i++)
	{
		if (a[i] > 0 && a[i] < a[lc])
			lc = i;
	}
	return lc;
}