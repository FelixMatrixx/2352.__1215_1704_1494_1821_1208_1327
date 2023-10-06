#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[], int&);
int ktCon(float[], int, int, int);
void DuongDaiNhat(float[], int);
void Xuat(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	DuongDaiNhat(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}
int ktCon(float a[], int n, int vt, int l)
{
	 int flag = 1;
	 for (int i = 0; i <= l - 1; i++)
		 if (a[vt + i] <= 0)
			flag = 0;
	 return flag;
 }
void DuongDaiNhat(float a[], int n)
{
	for (int l = n; l >= 1; l--)
		for (int vt = 0; vt <= n - l; vt++)
			if (ktCon(a, n, vt, l) == 1)
			{
				for (int i = 0; i < l; i++)
					cout << setw(8) << a[vt + i];
				return;
			}
}
void Xuat(float a[], int n)
{
	cout << "Mang duong dai nhat: ";
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}