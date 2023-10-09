#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void XayDung(int[], int, int[], int&);

int main()
{
	int a[100], b[50];
	int n, k;
	Nhap(a, n);
	XayDung(a, n, b,k);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
bool ktSoNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
void XayDung(int a[], int n, int b[], int &k)
{
	k = 0;
	for (int i=0;i<n;i++)
		if (ktSoNguyenTo(a[i]))
		{
			b[k] = a[i];
			k++;
			cout << a[i] << setw(5);
		}
}