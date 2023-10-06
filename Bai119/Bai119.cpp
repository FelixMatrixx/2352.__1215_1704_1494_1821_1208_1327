#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
int ktTonTai(int[], int);

int main()
{
	int a[500];
	int n;
	Nhap(a, n);
	ktTonTai(a, n);
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
int ktTonTai(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			flag = 1;
	return flag;
}