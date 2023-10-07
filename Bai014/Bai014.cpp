#include <iostream>
using namespace std;
void Nhap(int[], int&);
bool ktChinhPhuong(int);
void LietKe(int[], int);
int main()
{
	int a[300];
	int k;
	Nhap(a, k);
	LietKe(a, k);
	return 0;

}
void Nhap(int a[], int& n)
{
	cout << "Nhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
bool ktChinhPhuong(int n)
{
	for (int i = 0; (i * i) <= n; i++)
		if (i * i == n)
			return true;
	return false;
}
void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ktChinhPhuong(a[i]))
			cout << i << " ";
}


