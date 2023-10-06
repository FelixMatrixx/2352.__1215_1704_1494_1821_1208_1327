#include <iostream>
#include <iomanip>

using namespace std;

int TanSuat(float[], int, float);

int main()
{
	float a[500];
	int n;
	float x;
	cout << "Nhap so phan tu n cua mang : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
	cout << "Nhap x: ";
	cin >> x;
	cout << "Tan suat: " << TanSuat(a, n, x);
	return 0;
}
int TanSuat(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}