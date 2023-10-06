#include <iostream>
#include <iomanip>

using namespace std;

bool ktNguyenTo(int);
int NguyenToDau(int[], int);

int main()
{
	int a[500];
	int n;
	cout << "Nhap so phan tu n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
	cout << "So nguyen to dau tien: " << NguyenToDau(a, n);
	return 0;
}
bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
int NguyenToDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktNguyenTo(a[i]))
			return a[i];
	return 0;
}