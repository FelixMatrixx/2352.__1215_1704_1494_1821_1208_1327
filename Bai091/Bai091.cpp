#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
int ktDoiXung(int);
int DoiXungDau(int[], int);
int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	int lc = DoiXungDau(a, n);
	if (lc == 10)
		cout << "Mang khong co so doi xung.";
	else
		cout << "So doi xung dau tien trong mang: " << lc;
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
int ktDoiXung(int n)
{
	int t = n;
	int dn = 0;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == n)
		return 1;
	else
		return 0;
}
int DoiXungDau(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ktDoiXung(a[i]) == 1)
			return  a[i];
	return 10;
}