#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
void Tron(int[], int, int[], int, int[], int&);
void Hoanvi(int&, int&);
void Tangdan(int[], int n3);
void SapXepTang(int[], int, int[], int, int[], int);
void Xuatmang(int[], int);

int main()
{
	int x[50], y[50], z[100];
	int n1, n2,  n3;
	Nhap(x, n1);
	Nhap(y,n2);
	Tron(x, n1, y, n2, z, n3);
	SapXepTang(x, n1, y, n2, z, n3);
	Xuatmang(z, n3);
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
void Hoanvi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void Tangdan(int z[], int n3)
{
	for (int i= 0; i < n3; i++)
	{
		for (int j = i + 1; j < n3; j++)
			if (z[j] < z[i])
				Hoanvi(z[i], z[j]);
	}
}
// tron mang x,y thanh z
void Tron(int x[], int n1, int y[], int n2, int z[], int& n3)
{
	n3 = 0;
	for (int i1 = 0; i1 < n1; i1++)
	{
		z[n3] = x[i1];
		n3++;
	}
	for (int i2 = 0; i2 < n2; i2++)
	{
		z[n3] = y[i2];
		n3++;
	}
}
void SapXepTang(int x[], int n1, int y[], int n2, int z[], int n3)
{
	Tron(x,n1, y,n2, z,n3);
	Tangdan(z, n3);
}
void Xuatmang(int z[], int n3)
{
	for (int i = 0; i < n3; i++)
		cout << z[i] << setw(4);
}