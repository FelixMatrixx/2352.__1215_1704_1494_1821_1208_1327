#include <iostream>
using namespace std;
void Nhap(int[], int&);
int DemChuSoChan(int[], int);
void Xuat(int);
int main()
{
	int a[500];
	int k;
	Nhap(a, k);
	Xuat(DemChuSoChan(a, k));
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
int DemChuSoChan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0)
			dem++;
	return dem;
}
void Xuat(int dem)
{
	cout << "So luong gia tri chan la: " << dem;
}