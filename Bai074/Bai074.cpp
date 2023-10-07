#include <iostream>
using namespace std;
void Nhap(float [], int&);
int Linhcanh(float[], int);
void Xuat(int);
int main()
{
	float a[100];
	int k;
	Nhap(a, k);
	Xuat(Linhcanh(a, k));
	return 0;
}
void Nhap(float a[], int &n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
int Linhcanh(float a[], int n)
{
	int lc = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] < a[lc])
			lc = i;
	return lc;

}
void Xuat(int lc)
{
	cout << "Vi tri ma tai do gia tri tai vi tri do la nho nhat: " << lc;
}