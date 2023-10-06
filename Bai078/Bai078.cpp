#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[], int&);
float Max(float[], int);
float Min(float[], int);
void TimX(float[], int);
int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	TimX(a, n);

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
	float max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	return max;
}
float Min(float a[], int n)
{
	float min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min)
			min = a[i];
	}
	return min;
}
void TimX(float a[], int n)
{
	if (abs(Max(a,n)) > abs(Min(a,n)))
		cout << " X la [" << -1 * abs(Max(a,n)) << ", " << abs(Max(a,n)) << "] ";
	else 
		cout << " X la [" << -1 * abs(Min(a,n)) << ", " << abs(Min(a,n)) << "] ";
}