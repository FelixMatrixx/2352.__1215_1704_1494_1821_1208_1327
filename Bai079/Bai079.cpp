#include <iostream>

using namespace std;

void Nhap(float[], int&);
float DuongDau(float[], int);

int main()
{
	float a[500];
	int n;
	Nhap(a, n);
	float lc = DuongDau(a, n);
	if (lc == 0)
		cout << "Mang khong co gia tri duong.";
	else
		cout << "Gia tri duong dau tien cua mang: " << lc;
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
float DuongDau(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0)
			return a[i];
	return 0;
}
