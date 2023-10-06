#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
int ChanCuoi(int[], int);
int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	int lc = ChanCuoi(a, n);
	if (lc == -1)
		cout << "Mang khong co so chan";
	else
		cout << "So chan cuoi trong mang: " << lc;
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
int ChanCuoi(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}