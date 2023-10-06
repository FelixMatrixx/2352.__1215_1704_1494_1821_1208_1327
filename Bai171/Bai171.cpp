#include<iostream>

using namespace std;
void Nhap(int[], int&);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	
	return 0;
}
void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
