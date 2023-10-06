#include<iostream>

using namespace std;
void Nhap(float[], int&);
void XayDung(float [], int , float [], int& );
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	float b[100];
	int k;
	XayDung(a, n, b, k);
	return 0;
}
void Nhap(float a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
void XayDung(float a[], int n, float b[], int& k)
{
	if (n == 1)
	{
		b[0] = 0;
		return;
	}
	k = n;
	b[0] = a[1];
	for (int i = 1; i <= n - 2; i++)
		b[i] = a[i - 1] + a[i + 1];
	b[k - 1] = a[n - 2];
}