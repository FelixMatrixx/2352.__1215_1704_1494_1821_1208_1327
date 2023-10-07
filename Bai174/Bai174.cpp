#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[], int& , int&);
void Xuatcon(int[], int , int );
int main()
{
	int n, l;
	int a[100];
	Nhap(a, n , l);
	Xuatcon(a, n, l);
	return 0;
}
void Nhap(int a[], int& n ,int& l)
{
	cout << "Nhap n ";
	cin >> n;
	cout << "Nhap do dai l ";
	cin >> l;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] ";
		cin >> a[i];
	}
}
void Xuatcon(int a[], int n, int l)
{
	for (int i = 0; i <= n - l; i++)
	{
		for (int j = 0; j < l; j++)
			cout << setw(6) << a[i + j];
		cout << endl;
	}
}