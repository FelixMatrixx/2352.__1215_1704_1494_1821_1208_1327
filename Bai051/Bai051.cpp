#include<iostream>

using namespace std;
void Nhap(int[], int&);
int DemGiaTri(int[], int);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int dem = DemGiaTri(a, n);
	cout << dem;
	return 0;
}
void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
int DemGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0 && a[i] % 7 == 0)
			dem++;
	return dem;
}