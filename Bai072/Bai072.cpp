#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[], int&);
float Max(float[], int);
int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	cout << "Gia tri lon nhat la " << Max(a, n);
	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap mang a[" << i << "] ";
		cin >> a[i];
	}
}
float Max(float a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
}