#include <iostream>
using namespace std;
void Nhap(int[], int&);
int ChuSoDau(int);
int TimGiaTri(int[], int);
void Xuat(int);
int main()
{
	int a[100];
	int k;
	Nhap(a, k);
	Xuat(TimGiaTri(a, k));
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
	while (dt >= 10)
		dt /= 10;
	return dt;
}
int TimGiaTri(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ChuSoDau(a[i]) % 2 != 0)
			return a[i];
		return 0;
}
void Xuat(int n)
{
	cout << "Gia tri dau tien co chu so dau la chu so le: " << n;
}
