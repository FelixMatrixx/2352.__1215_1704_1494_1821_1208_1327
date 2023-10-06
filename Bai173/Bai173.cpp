#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&, int&, int&);
void XuatCon(int[], int, int, int);

int main()
{
	int a[500];
	int n, vt, l;
	Nhap(a, n, vt, l);
	XuatCon(a, n, vt, l);
	return 0;
}
void Nhap(int a[], int& n, int& vt, int& l)
{
	cout << "Nhap so phan tu n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
	cout << "Nhap vi tri bat dau mang con: ";
	cin >> vt;
	cout << "Nhap do dai: ";
	cin >> l;
}
void XuatCon(int a[], int n, int vt, int l)
{
	for (int i = 0; i <= l - 1; i++)
		cout << setw(8) << a[vt + i];
}