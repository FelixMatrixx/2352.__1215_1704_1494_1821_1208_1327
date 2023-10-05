#include <iostream>
#include <iomanip>

using namespace std;

int ChanDau(int[], int&);
int ChanLonNhat(int[], int);
void LietKe(int[], int);

int main()
{
	int a[500];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
	ChanDau(a, n);
	ChanLonNhat(a, n);
	LietKe(a, n);
	return 0;
}
int ChanDau(int a[], int& n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}
int ChanLonNhat(int a[], int n)
{
	int lc = ChanDau(a, n);
		return -1;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0 && a[i] > lc)
			lc = a[i];
	return lc;
}
void LietKe(int a[], int n)
{
	int dd = ChanLonNhat(a, n);
	if (dd == -1)
	{
		cout << "\nKhong co Chan";
		return;
	}
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == dd)
			cout << setw(4) << i;
}
