#include<iostream>

using namespace std;
void Nhap(int[], int&);
void LietKe(int[], int, int, int);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int x, y;
	cin >> x >> y;
	LietKe(a, n, x, y);
	return 0;
}
void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
	}
}
void LietKe(int a[], int n, int x, int y)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] >= x && a[i] <= y)
			cout << a[i];
}