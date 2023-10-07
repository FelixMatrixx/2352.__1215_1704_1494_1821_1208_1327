#include <iostream>
using namespace std;
void Nhap(int[], int &n);
void Lietke(int[], int n);
int main()
{
	int a[300], k;
	Nhap(a, k);
	Lietke(a, k);
	return 0;
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
void Lietke(int a[], int n)
{
	if (n == 1)
	{
		return;
	}
	if (a[0] < a[1])
		cout << a[0] << " ";
	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			cout << a[i] << " ";
	if (a[n - 1] < a[n - 2])
		cout << a[n - 1];
}