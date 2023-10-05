#include<iostream>

using namespace std;
void Nhap(int[], int&);
void ChanDau(int[], int);
void LeCuoi(int[], int);
void ChanDauLeCuoi(int[], int n);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	ChanDauLeCuoi(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
void ChanDau(int a[], int n)
{
	int vt = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0 && a[i]!=0)
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt++;
		}
}
void LeCuoi(int a[], int n)
{
	int vt = n - 1;
	for (int i = n - 1; i >= 0; i--)
		if (a[i] % 2 != 0)
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt--;
		}
}
void ChanDauLeCuoi(int a[], int n)
{
	ChanDau(a, n);
	LeCuoi(a, n);
}