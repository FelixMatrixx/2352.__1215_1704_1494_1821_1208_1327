#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void Lietke(float[], int);
int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	Lietke(a, n);


	return 0;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap n " << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i<<"] ";
		cin >> a[i];
	}
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}
void Lietke(float a[], int n)
{
	cout << "Cac cap x,y la ";
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (j != i)
					cout << setw(4) << a[i] << "," << a[j];
			}
			cout << endl;
		}

}