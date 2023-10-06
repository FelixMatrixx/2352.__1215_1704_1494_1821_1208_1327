#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
int TanSuat(int[], int, int);
int DemGiaTri(int[], int, int[], int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	int b[500];
	int m;	 
	Nhap(b, m);
	int dem = DemGiaTri(a, n, b, m);
	cout << "Ket qua: " << dem;
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "]:";
		cin >> a[i];
	}
}
int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}
int DemGiaTri(int a[], int n, int b[], int m)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 0;
		if (TanSuat(b, m, a[i]) == 0 && flag == 1)
			dem++;
	}
	for (int i = 0; i <= n - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (b[j] == b[i])
				flag = 0;
		if (TanSuat(a, m, b[i]) == 0 && flag == 1)
			dem++;
	}
	return dem;
}