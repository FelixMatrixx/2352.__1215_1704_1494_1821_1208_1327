#include <iostream>
using namespace std;
void Nhap(float[], int&);
int AmDauTien(float[], int);
int TimViTri(float[], int);
void Xuat(int);
int main()
{
	float a[100];
	int k;
	Nhap(a, k);
	Xuat(TimViTri(a, k));
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
int AmDauTien(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] < 0)
			return i;
	return -1;
}
int TimViTri(float a[], int n)
{
	int lc = AmDauTien(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] < 0 && (a[i] > a[lc]))
			lc = i;
	return lc;
}
void Xuat(int lc)
{
	cout << "Vi tri gia tri am lon nhat la: " << lc;
}


