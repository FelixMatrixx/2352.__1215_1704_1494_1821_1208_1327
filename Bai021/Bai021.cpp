#include<iostream>

using namespace std;
void Nhap(int[], int&);
void LietKe(int[], int);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
}
void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		if (a[i] > abs(a[i + 1]))
			cout << a[i];
}