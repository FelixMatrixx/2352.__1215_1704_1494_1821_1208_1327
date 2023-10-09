#include <iostream>
using namespace std;
void Nhap(float[], int &);
int KiemTraBang(float[], int);
void Xuat(int);
int main()
{
	float a[100];
	int k;
	Nhap(a, k);
	Xuat(KiemTraBang(a, k));
	return 0;

}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
}
int KiemTraBang(float a[], int n)
{
	float lc = a[0];
	int flag = 1;
	for (int i = 1; i <= n - 1; i++)
		if (a[i] != lc)
			flag = 0;
	return flag;
}
void Xuat(int n)
{
	if (n ==true)
		cout << "Bang nhau";
	else
	cout << "Khong bang";
}