#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void Nhap(int[], int& , int& );
int Tongcon(int[], int, int, int);
void Timcon(int[], int , int , int& ,int& ,int&);
int main()
{
	int vtd, vtc, dodai;// xac dinh vi tri bat dau va do dai l cua mang
	int M;
	int n;
	int a [100];
	Nhap(a, M, n);
	Timcon(a, M, n , vtd , vtc , dodai);
	cout << "Vt dau thoa la " << vtd << endl;
	cout << "Vt cuoi thoa la " << vtc << endl;
	cout << "Do dai l la " << dodai << endl;
	return 0;
}
void Nhap(int a[], int& M , int& n)
{
	cout << "Nhap M ";
	cin >> M;
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] ";
		cin >> a[i];
	}
}
int Tongcon(int a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i < l; i++)
	{
		s = s + a[vt + i];
	}
	return s;
}
void Timcon(int a[], int M ,int n,int& vtd , int& vtc , int& dodai)
{
	for (int l = 1; l <= n; l++)
	{
		for ( int vt = 0 ; vt <= n-l ; vt++)
			if (Tongcon(a, n, vt, l) == M) 
			{
				vtd = vt;
				vtc = vt + l - 1;
				dodai = l;
				return;
			}

	}
	vtd = vtc = -1;
}