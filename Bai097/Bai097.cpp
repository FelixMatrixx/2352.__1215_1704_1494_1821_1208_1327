#include <iostream>

using namespace std;

void Nhap(int[], int&);
bool kthoanThien(int);
int ViTriCuoi(int[], int);
int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	int lc = ViTriCuoi(a, n);
	if (lc == -1)
		cout << "Khong co so hoan thien trong mang.";
	else
		cout << "So hoan thien dau tien: " << lc;
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "]:";
		cin >> a[i];
	}
}
bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s += i;
	if (s == k)
		return true;
	else
		return false;
}
int ViTriCuoi(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktHoanThien(a[i]))
			return  a[i];
	return -1;
}