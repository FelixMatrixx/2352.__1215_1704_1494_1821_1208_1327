#include <iostream>
using namespace std;
void Nhap(int[], int);
int main()
{

}
void Nhap(int a[], int &n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	if (n <= 2)
		return ;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}

