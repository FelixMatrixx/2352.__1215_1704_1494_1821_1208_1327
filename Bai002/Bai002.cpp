#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
void Nhap(float [], int&);
void Xuat(float [], int);
int main()
{
	float a[300];
	int k;
	Nhap(a, k);
	Xuat(a, k);
	return 0;
}
void Nhap(float a[], int&n)
{
	cout << "Nhap so phan tu n:";
	cin >> n;
	srand(time(NULL));
	for (int i=0;i<=n-1;i++)
		a[i] = -100.0 + (rand() /( RAND_MAX/(100.0-(-100.0))));
}
void Xuat(float a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) <<setprecision(5)<< a[i];
}
