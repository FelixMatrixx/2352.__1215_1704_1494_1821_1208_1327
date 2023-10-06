#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(double[], int&);
void Xuat(double[], int);
void Lietke(double[], int);

int main()
{
	int n;
	double a[100];
	Nhap(a, n);
	Lietke(a, n);



	return 0;
}
void Nhap(double a[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap mang a[" << i << "] ";
		cin >> a[i];
	}

}
void Xuat(double a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(6) << a[i];
}
void Lietke(double a[], int n)
{
	cout << "Cac gia tri thoa man la ";
	for (int i = 0; i < n; i++)
	{
		if ((i - 1) >= 0 and (i + 1) < n)
		{
			if (a[i] * a[i + 1] < 0.0 or a[i] * a[i - 1] < 0.0)
				cout << setw(4) << a[i];
		}
		else if (i - 1 < 0)
		{
			if (a[i] * a[i + 1] < 0.0)
				cout << setw(4) << a[i];
		}
		else if (i + 1 >= n)
		{
			if (a[i] * a[i - 1] < 0.0)
				cout << setw(4) << a[i];
		}
	}
}