#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
int ktCon(int[], int, int);
int DemConGiam(int[], int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	int dem = DemConGiam(a, n);
	cout << "So luong mang con giam: " << dem;
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}
int ktCon(int a[], int l, int vt)
{
	int flag = 1;
	for (int i = 0; i <= l - 1; i++)
		if (a[i + vt] < a[i + vt + 1])
			flag = 0;
	return flag;
}
int DemConGiam(int a[], int n)
{
	int dem = 0;
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - l; vt++)
			if (ktCon(a, l, vt) == 1)
				dem++;
	return dem;
}