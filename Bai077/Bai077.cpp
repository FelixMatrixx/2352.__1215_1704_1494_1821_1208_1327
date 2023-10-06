#include <iostream>
#include <iomanip>

using namespace std;

float LonNhat(float[], int); 
float NhoNhat(float[], int);
void TimDoan(float[], int, float&, float&);

int main()
{
	float a[500];
	int n;
	float x, y;
	cout << "Nhap so phan tu n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
	TimDoan(a, n, x, y);
	cout << "Doan: [" << x << ";" << y << "]";
	return 0;
}
float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}
float NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}
void TimDoan(float a[], int n, float& x, float& y)
{
	x = NhoNhat(a, n);
	y = LonNhat(a, n);
}