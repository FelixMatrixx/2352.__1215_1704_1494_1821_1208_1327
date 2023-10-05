#include<iostream>

using namespace std;
void Nhap(float[], int);
int AmDau(float[], int);
void LietKe(float[], int);
int main()
{
	float a[100];
	int n;
	cin >> n;
	Nhap(a, n);
	LietKe(a, n);
}
void Nhap(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
	}
}
int AmDau(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] < 0)
			return a[i];
	return 0;
}
void LietKe(float a[], int n)
{
	if (AmDau(a, n) == 0)
	{
		cout << "Khong co gia tri am";
		return;
	}
	for (int i = 0; i < n; i++)
		if (a[i] == AmDau(a, n))
			cout << i;
}