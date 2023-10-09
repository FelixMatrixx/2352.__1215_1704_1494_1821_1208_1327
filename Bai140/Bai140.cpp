#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
bool ktSoNguyenTo(int);
void Hoanvi(int &, int&);
void NguyenToTang(int[], int);
void Xuat(int[], int);
 
int main()
{
	int a[100];
	int k;
	Nhap(a, k);
	NguyenToTang(a, k);
	Xuat(a, k);
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
void Hoanvi(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}
void NguyenToTang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (ktSoNguyenTo(a[j]) && ktSoNguyenTo(a[i]) && a[i] > a[j])
				Hoanvi(a[i], a[j]);
}
void Xuat(int a[], int n)
{
	cout << "Cac phan tu trong mang a sau khi sap xep ";
		for (int i = 0; i < n; i++)
			cout << a[i] << setw(7);
}