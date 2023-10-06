#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[], int&);
bool KTdoixung(int);
int Demdoixung(int[], int);
int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << "So luong so doi xung la " << Demdoixung(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap mang a[" << i << "] ";
		cin >> a[i];
	}
}
bool KTdoixung(int n)
{
	int t = n;
	int reverse = 0; // tim so sau khi dao nguoc
	while (t != 0)
	{
		reverse = reverse * 10 + (t % 10);
		t = t / 10;
	}
	if (reverse == n)
		return true;
	return false;
}
int Demdoixung(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KTdoixung(a[i]))
			dem++;
	}
	return dem;
}