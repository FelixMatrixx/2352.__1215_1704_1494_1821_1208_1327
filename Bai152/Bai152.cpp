#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
bool ktSoNguyenTo(int);
void DuaVeCuoi(int [], int);
void Xuatmang(int[], int);
int main()
{
	int a[50];
	int k;
	Nhap(a, k);
	DuaVeCuoi(a, k);
	Xuatmang(a, k);
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
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
void DuaVeCuoi(int a[], int n)
{
	int vt = n - 1;
	for (int i=n-1;i>=0;i--)
		if (ktSoNguyenTo(a[i]))
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt--;
		}
}
void Xuatmang(int z[], int n3)
{
	for (int i = 0; i < n3; i++)
		cout << z[i] << setw(4);
}

