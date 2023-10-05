#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void LietKe(int[], int);

int main()
{
	int b[500];
	int k;
	Nhap(b, k);
	cout << "Mang ban dau: ";
	Xuat(b, k);
	LietKe(b, k);
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
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
	cout << endl;
}
void LietKe(int a[], int n)
{
	if (n <= 1)
	{
		return;
	}
	cout << "Liet ke: ";
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		cout << setw(4) << a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] % 2 == 0)
			if (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)
				cout << setw(4) << a[i];
	if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
		cout << setw(4) << a[n - 1];
}