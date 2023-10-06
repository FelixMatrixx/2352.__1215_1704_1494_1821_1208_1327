#include<iostream>

using namespace std;
void Nhap(int[], int&);
void DichPhai(int[], int);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	DichPhai(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
void DichPhai(int a[], int n)
{
	int temp = a[n - 1];
	for (int i = n - 1; i >= 1; i--)
		a[i] = a[i - 1];
	a[0] = temp;
}