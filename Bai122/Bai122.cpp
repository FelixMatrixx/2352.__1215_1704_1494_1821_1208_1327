#include <iostream>
using namespace std;
void Nhap(int[], int&);
int ktToanChan(int[], int);
void Xuat(int);
int main()
{
	int a[100];
	int k;
	Nhap(a, k);
	Xuat(ktToanChan(a, k));
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
int ktToanChan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0)
			dem++;
	if (dem == n)
		return 1;
	return 0;
}
void Xuat(int n)
{
		cout << n;
}