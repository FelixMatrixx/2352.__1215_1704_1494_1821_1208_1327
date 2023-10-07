#include <iostream>
using namespace std;
void Nhap(int [], int&);
bool ktSoNguyenTo(int k);
int SoLonNhat(int[], int);
int TimGiaTri(int [], int );
void Xuat(int);
int main()
{
	int a[100];
	int k;
	Nhap(a, k);
	int lc = SoLonNhat(a, k);
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
bool ktSoNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
int SoLonNhat(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}
int TimGiaTri(int a[], int n)
{
	int lc = SoLonNhat(a, n) + 1;
	while (ktSoNguyenTo(lc) == 0)
		lc++;
	return lc;
}
void Xuat(int n)
{
	cout << "Gia tri thoa man yeu cau bai toan la: " << n;
}


