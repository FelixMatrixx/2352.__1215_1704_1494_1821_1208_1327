#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float[], int&);
void GanNhat(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	GanNhat(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "]:";
		cin >> a[i];
	}
}
void GanNhat(float a[], int n)
{
	float x = a[0];
	float y = a[1];
	float lc = abs(x - y);
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
		{
			float temp = abs(a[i] - a[j]);
			if (temp < lc)
			{
				lc = temp;
				x = a[i];
				y = a[j];
			}
		}
	cout << "Cap gia tri gan nhau nhat: (" << x << "," << y << ")";
}
