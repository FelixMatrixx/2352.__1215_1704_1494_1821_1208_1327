#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void Nhap(string, float[], int&);
void Xuat(float[], int);

int main()
{
	float b[500];
	int n;
	Nhap("filename", b, n);
	cout << "Mang ban dau";
	Xuat(b, n);
	return 0;
}

void Nhap(string filename, float a[], int& n)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i <= n - 1; i++)
		fi >> a[i];

}

void Xuat(float a[], int n)
{
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << setprecision(5) << a[i];
}