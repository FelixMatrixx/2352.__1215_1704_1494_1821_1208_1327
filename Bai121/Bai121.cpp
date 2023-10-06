#include <iostream>
#include <cmath>
using namespace std;

#define MAX 256

void Nhap(int[], int&);
bool ktHoanThien(int);
int ktTinhChat(int[], int);
int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	if (ktTinhChat(a, n))
		cout << "Thoa man";
	else
		cout << "Khong thoa mam";
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
bool ktHoanThien(int k)
{
	int t = k;
	int dn = 0;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t /= 10;
	}
	if (dn == k)
		return true;
	else
		return false;
}
int ktTinhChat(int a[], int n)
{
	for (int i = 0; i <= n; i++)
		if (ktHoanThien(a[i]) && a[i] <= MAX)
			return 1;
	return 0;
}