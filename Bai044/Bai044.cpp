#include <iostream>
using namespace std;
void Nhap(int[], int&);
int TongCucDai(int[], int);
int TongCucTieu(int[], int);
int TongCucTri(int[], int);
void Xuat(int);
int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	Xuat(TongCucTri(a, k));
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
int TongCucDai(int a[], int n)
{
	if (n <= 1)
		return 0;
	int S = 0;
	if (a[0] > a[1])
		S = S + a[0];
	for (int i = 1; i <= n - 2; i++)
		if ((a[i] > a[i - 1]) && (a[i] > a[i + 1]))
			S = S + a[i];
	if (a[n - 1] > a[n - 2])
		S = S + a[n - 1];
	return S;
}
int TongCucTieu(int a[], int n)
{
	if (n <= 1)
		return 0;
	int S = 0;
	if (a[0] < a[1])
		S = S + a[0];
	for (int i = 1; i <= n - 2; i++)
		if ((a[i] < a[i - 1]) && (a[i] < a[i + 1]))
			S = S + a[i];
	if (a[n - 1] < a[n - 2])
		S = S + a[n - 1];
	return S;
}
int TongCucTri(int a[], int n)
{
	int S1 = TongCucDai(a, n);
	int S2 = TongCucTieu(a, n);
	int S = S1 + S2;
	return S;
}
void Xuat(int S)
{
	cout << "Tong cac phan tu cuc tri: " << S;
}
