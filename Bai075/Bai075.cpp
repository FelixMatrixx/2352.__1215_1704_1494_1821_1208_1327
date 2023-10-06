#include<iostream>

using namespace std;
void Nhap(float[], int&);
float XaNhat(float[], int, float);
int main()
{
	float a[100];
	int n;
	cin >> n;
	Nhap(a, n);
	float x;
	cin >> x;
	float lc = XaNhat(a, n, x);
	cout << lc;
	return 0;
}
void Nhap(float a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
float XaNhat(float a[], int n, float x)
{
	float lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (abs(a[i] - x) > abs(lc - x))
			lc = a[i];
	return lc;
}