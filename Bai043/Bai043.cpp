#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(float[], int&);
float TongCucDai(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	float s  = TongCucDai(a, n);
	cout << "Tong cac gia tri cuc dai: " << s;
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
float TongCucDai(float a[], int n)
{
	if (n <= 1)
		return 0;
	float s = 0;
	if (a[0] > a[1])
		s += a[0];
	for (int i = 1; i < n - 1; i++)
		if (a[i - 1] < a[i] && a[i] > a[i + 1])
			s += a[i];
	if (a[n - 2] < a[n - 1])
		s += a[n - 1];
	return s;
}
