#include<iostream>

using namespace std;
void Nhap(float[], int);
float TongDuong(float[], int);
float DemDuong(float[], int);
float TrungBinhCong(float a[], int n);
int main()
{
	float a[100];
	int n;
	cin >> n;
	Nhap(a, n);
	float tbc = TrungBinhCong(a, n);
	cout << tbc;
}
void Nhap(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
	}
}
float TongDuong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0)
			s += a[i];
	return s;
}
float TrungBinhCong(float a[], int n)
{
	float s = TongDuong(a, n);
	int dem = DemDuong(a, n);
	if (dem == 0)
		return 0;
	return s / dem;
}
float DemDuong(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0)
			dem++;
	return dem;
}
