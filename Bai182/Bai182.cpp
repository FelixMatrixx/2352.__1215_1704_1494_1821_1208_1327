#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
int ktTang(int[], int, int, int);
void LietKe(int[], int);
int main()
{
	int a[100];
	int k;
	Nhap(a, k);
	LietKe(a, k);
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
int ktTang(int a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 2; i++)
		if (a[vt + i] > a[vt + i + 1])
			flag = 0;
	return flag;
}
int LonNhat(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		if (lc < a[i])
			lc = a[i];
	return lc;
}
void LietKe(int a[], int n)
{
	int ln = LonNhat(a, n);
	for (int l = 1; l<= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (ktTang(a, n, vt, l) && a[vt + l - 1] == ln)
			{
				for (int i = 0; i <= l - 1; i++)
					cout << setw(3) << a[vt + i];
				cout << endl;
			}
		}
	}
}