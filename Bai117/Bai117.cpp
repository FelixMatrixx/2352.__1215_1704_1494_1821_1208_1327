#include<iostream>

using namespace std;
void Nhap(int[], int);
int ktKhong(int[], int);
int main()
{
	int a[100];
	int n;
	cin >> n;
	Nhap(a, n);
	int kq = ktKhong(a, n);
	cout << kq;
	return 0;
}
void Nhap(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
int ktKhong(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == 0)
			flag = 0;
	return flag;
}