#include <iostream>
#include <iomanip>
using namespace std;
void LietKe(int[], int);
int main()
{
	int a[500];
	int n;
	cout << "Nhap so phan tu n cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
	LietKe(a, n);
	return 0;
}
void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			cout << setw(10) << a[i];
}