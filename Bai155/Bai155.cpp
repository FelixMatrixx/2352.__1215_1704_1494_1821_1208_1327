#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
void DaoMang(int[], int);
void DaoChan(int[], int);
void Xuat(int[], int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	DaoChan(a, n);
	Xuat(a, n);
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
void DaoMang(int a[], int n)
{
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		int temp = a[d];
		a[d] = a[c];
		a[c] = temp;
		d++;
		c--;
	}
}
void DaoChan(int a[], int n)
{
	int b[100];
	int k;
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			b[k++] = a[i];
	DaoMang(b, k);
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			a[i] = b[k++];

}
void Xuat(int a[], int n)
{
	cout << "Mang duoc dao gia tri chan: ";
	for (int i = 0; i < n; i++)
		cout << setw(5) << a[i];
}