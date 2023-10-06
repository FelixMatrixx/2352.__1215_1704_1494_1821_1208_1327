#include<iostream>

using namespace std;
void Nhap(float[], int&);
float Tong(float[], int);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	float tong = Tong(a,n);
	cout << tong;
}
void Nhap(float a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
	}
}
float Tong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i <= n - 1; i++)
		s += a[i];
	return s;
}
