#include<iostream>

using namespace std;
void Nhap(int[], int&);
int DemChan(int[], int);
int DemLe(int[], int);
int TuongQuan(int[], int);
int main()
{
	int a[100];
	int n;
	Nhap(a, n);
	int kq = TuongQuan(a, n);
	cout << kq;
	return 0;
}
void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}
int DemChan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0)
			dem++;
	return dem;
}
int DemLe(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 1)
			dem++;
	return dem;
}
int TuongQuan(int a[], int n)
{
	int chan = DemChan(a, n);
	int le = DemLe(a, n);
	if (chan >= le)
		if (chan = le)
			return 0;
		else 
			return -1;
	else 
		return 1;
}