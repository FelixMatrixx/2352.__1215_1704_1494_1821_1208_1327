#include<iostream>

using namespace std;
void Nhap(int[], int&);
bool ktHoanThien(int);
void HoanVi(int& , int&);
void HoanThienGiam(int[], int);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	HoanThienGiam(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
bool ktHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i <= n - 1; i++)
		if (n % i == 0)
			s += i;
	if (s == n)
		return true;
	return false;
}
void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void HoanThienGiam(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (ktHoanThien(a[i]) && ktHoanThien(a[j]) && a[i] < a[j])
				HoanVi(a[i], a[j]);
}