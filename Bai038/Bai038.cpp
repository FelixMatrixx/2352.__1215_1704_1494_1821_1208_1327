#include <iostream>
using namespace std;
void Nhap(int[], int&);
int ChuSoDau(int n);
int Tong(int[], int);
void Xuat(int);
int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	Xuat(Tong(a, k));
	return 0;
}
void Nhap(int a[], int &n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
int ChuSoDau(int n)
{
	int dt = abs(n);
	while(dt >= 10)
		dt /= 10;
	return dt;
}
int Tong(int a[], int n)
{
	int S = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		if (ChuSoDau(a[i]) % 2 != 0)
			S += a[i];
	}
	return S;
}
void Xuat(int S)
{
	cout << "Tong cac gia tri co chu so dau tien la chu so le: " << S;
}

