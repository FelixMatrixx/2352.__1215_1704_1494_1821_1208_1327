#include<iostream>

using namespace std;
void Nhap(int[], int&);
int ktMangCon(int[], int, int, int);
void LietKe(int[], int);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
int ktMangCon(int a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = vt; i <= vt + l - 2; i++)
		if (a[i] > a[i + 1])
			flag = 0;
	return flag;
}
void LietKe(int a[], int n)
{
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - l; vt++)
			if (ktMangCon(a, n, vt, l) == 1)
				for (int i = vt; i <= vt + l - 1; i++)
					cout << a[i];
}