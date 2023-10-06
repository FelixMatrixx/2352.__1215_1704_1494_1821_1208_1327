#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
bool ktHoanThien(int);
int HoanThienCuoi(int[], int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	cout << "So hoan thien cuoi: " << HoanThienCuoi(a, n);
	return 0;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}
bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}
int HoanThienCuoi(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktHoanThien(a[i]) == 1)
			return a[i];
	return -1;
}