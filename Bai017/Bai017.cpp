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
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0)
			cout << setw(2) << a[i];
	cout << endl;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 != 0)
			cout << setw(2) << a[i];
}