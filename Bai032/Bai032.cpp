#include <iostream>
using namespace std;
void Nhap(int[], int&);
int ChuSoDau(int);
int TongGiaTri(int[], int);
void Xuat(int[], int);
int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	int S = TongGiaTri(a, k);
	cout << S;
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]=";
		cin >> a[i];
	}
}
int ChuSoDau(int n)
{
	int dt = abs(n);
	while (dt >= 10)
	{
		dt /= 10;
		return dt;
	}
}
int TongGiaTri(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		int S = 0;
		if (ChuSoDau(a[i]) % 2 != 0)
		{
			S = S + a[i];
			cout << S;
			return S;
		}
	}
}




