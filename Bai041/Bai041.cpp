#include <iostream>
#include <iomanip>

using namespace std;

float TongGiaTri(float[], int);

int main()
{
	float a[500];
	int n;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
	cout << "Tong cac gia tri lon hon gia tri lien truoc: " << TongGiaTri(a, n);
	return 0;
}
float TongGiaTri(float a[], int n)
{
	float s = 0;
	for (int i = 1; i < n; i++)
		if (a[i] > a[i - 1])
			s = s + a[i];
	return s;
}