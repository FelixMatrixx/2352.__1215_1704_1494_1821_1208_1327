#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[], int&);
int Timso(int[], int);
int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << Timso(a, n);
	return 0;
}
void Nhap(int  a[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] ";
		cin >> a[i];
	}
}

int Timso(int a[], int n)
{
	int Dem[10] = { 0 };
	for (int i = 0; i < n; i++)
	{
		int t = abs(a[i]);
		while (t > 0)
		{
			int dv = t % 10;
			Dem[dv]++;
			t /= 10;
		}
		int min = 10000000, xmin = 0;

		for (int i = 0; i < 9; i++)
		{
			if ((Dem[i] < min) and (Dem[i] > 0))
			{
				min = Dem[i];
				xmin = i;
			}
		}
		return xmin;

	}
}
