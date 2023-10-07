#include <iostream>
using namespace std;
void Nhap(int[], int&);
int DemCucDai(int[], int);
int DemCucTieu(int[], int);
int DemCucTri(int[], int);
void Xuat(int);
int main()
{
	int a[100];
	int k;
	Nhap(a, k);
	Xuat(DemCucTri(a, k));
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
int DemCucDai(int a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] > a[1])
		dem++;
	for (int i = 1; i <= n - 2; i++)
		if ((a[i] > a[i - 1]) && (a[i]) > a[i + 1])
			dem++;
	if (a[n - 1] > a[n - 2])
		dem++;
	return dem;
}
int DemCucTieu(int a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] < a[1])
		dem++;
	for (int i = 1; i <= n - 2; i++)
		if ((a[i] < a[i - 1]) && (a[i]) < a[i + 1])
			dem++;
	if (a[n - 1] < a[n - 2])
		dem++;
	return dem;
}
int DemCucTri(int a[], int n)
{
	int dem1 = DemCucDai(a,n);
	int dem2 = DemCucTieu(a, n);
	int dem = dem1 + dem2;
	return dem;
}
void Xuat(int dem)
{
	cout << "So luong phan tu cuc tri la: " << dem;
}
