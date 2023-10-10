#include <iostream>
using namespace std;
void Nhap(float[], int&);
void Tim_Ba_So(float[], int);
int main()
{
	float a[100];
	int m;
	Nhap(a, m);
	Tim_Ba_So(a, m);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]=";
		cin >> a[i];
	}
}
void Tim_Ba_So(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		for (int j =0; j <= n - 1; j++)
		{
			for (int k = 0; k <= n - 1; k++)
			{
				if (i != j && j != k &&
					((a[i] == a[j] + a[k]) || (a[j] == a[i] + a[k]) || (a[k] == a[j] + a[i])))
					cout << "(" << a[i] << " " << a[j] << " " << a[k] << ")";
			}
		}
	}
}




