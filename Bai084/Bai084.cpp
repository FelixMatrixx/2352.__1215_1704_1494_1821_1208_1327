#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(float[], int&);
int Timvitri(float[], int);
int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	cout << Timvitri(a, n);
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
int Timvitri(float a[], int n)
{

	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] == a[i - 1] * a[i + 1])
			return i;
	}
	return -1;
}