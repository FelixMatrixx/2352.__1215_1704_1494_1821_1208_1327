#include <iostream>

using namespace std;

void Nhap(int[], int&);
int ChanDau(int[], int);
int ChanNhoNhat(int[], int);
int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	int lc = ChanNhoNhat(a, n);
	if (lc == -1)
		cout << "Mang kh co so chan.";
	else
		cout << "So chan nho nhat trong mang la: " << lc;
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
int ChanDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}
int ChanNhoNhat(int a[], int n)
{
	int lc = -1;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0 && a[i] < lc)
			lc = a[i];
	return lc;
}