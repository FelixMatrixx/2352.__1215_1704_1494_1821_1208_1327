#include<iostream>

using namespace std;
void Nhap(int[], int);
int ChuSoDau(int);
int TongGiaTri(int[], int);
int main()
{
	int a[100];
	int n;
	cin >> n;
	Nhap(a, n);
	int tong = TongGiaTri(a, n);
	cout << tong;
}
void Nhap(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
	}
}
int ChuSoDau(int n)
{
	int t = abs(n);
	while (t >= 10)
		t /= 10;
	return t;
}
int TongGiaTri(int a[], int n)
{
	int s = 0;
	for (int i = 0; i <= n - 1; i++)
		if (ChuSoDau(a[i]) % 2 == 0)
			s += a[i];
	return s;
}