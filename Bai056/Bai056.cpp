#include <iostream>
using namespace std;
void Nhap(int[], int&);
bool ktHoanThien(int);
int DemHoanThien(int [], int);
void Xuat(int);
int main()
{
	int a[100];
	int k;
	Nhap(a, k);
	Xuat(DemHoanThien(a, k));
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
bool ktHoanThien(int k)
{
	int S = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			S = S + i;
	if (S == k)
		return true;
	return false;
}
int DemHoanThien(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (ktHoanThien(a[i]))
			dem++;
	return dem;
}
void Xuat(int dem)
{
	cout << "So luong so hoan thien la: " << dem;
}


