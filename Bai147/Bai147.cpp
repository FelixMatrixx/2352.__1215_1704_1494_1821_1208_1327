#include<iostream>

using namespace std;
void Nhap(int[], int&);
void Tron(int[], int, int[], int, int[], int&);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int b[100];
	int m;
	Nhap(b, m);
	int c[100];
	int p;
	Tron(a, n, b, m, c, p);
	return 0;
}
void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
void Tron(int a[], int n, int b[], int m, int c[], int& p)
{
	int i = n-1;
	int j = m-1;
	p = 0;
	while (i >= 0 || j >= 0)
		if (a[i] > b[j])
		{
			c[p++] = a[i];
			i--;
		}
		else
		{
			c[p++] = b[j];
			j--;
		}
}