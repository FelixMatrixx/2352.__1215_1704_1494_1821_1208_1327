#include<iostream>

using namespace std;
void Nhap(int[], int&);
int ktCon(int[], int, int[], int);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int b[100];
	int m;
	Nhap(b, m);
	int kq = ktCon(a, n, b, m);
	cout << kq;
	return 0;
}
void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
int ktCon(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int flag = 0;
	for (int i = 0; i <= m - n; i++)
	{
		int co = 1;
		for (int j = 0; j <= n - 1; j++)
			if (b[i + j] != a[j])
				co = 0;
		if (co == 1)
			flag = 1;
	}
	return flag;
}