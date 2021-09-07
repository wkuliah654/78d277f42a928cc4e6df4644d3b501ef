#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, x, y, pil;
	char ch;
	cout << "ordo 3x3, inputkan 3 saja." << endl;
	cout << "Masukkan ordo matriks : "; cin >> n;
	int arr1[n][n], arr2[n][n], arr[n][n];
	
	cout << "Array 1" << endl;
	for(x=0; x<n; x++) {
		for(y=0; y<n; y++) {
			cout << "Masukkan nilai array index [" << x << "][" << y << "] = "; cin >> arr1[x][y];
		}
	}
	
	cout << "Array 2" << endl;
	for(x=0; x<n; x++) {
		for(y=0; y<n; y++) {
			cout << "Masukkan nilai array index [" << x << "][" << y << "] = "; cin >> arr2[x][y];
		}
	}
	
	cout << "Menu Operator" << endl;
	cout << "1. Tambah [+]" << endl;
	cout << "2. Kurang [-]" << endl;
	cout << "3. Kali   [*]" << endl;
	cout << "4. Bagi   [/}" << endl;
	cout << "Masukkan operator yang di pilih : "; cin >> pil;
	
	switch(pil) {
		case 1:
			ch = '+';
			for(x=0; x<n; x++) {
				for(y=0; y<n; y++) {
					arr[x][y] = arr1[x][y] + arr2[x][y];
				}
				cout << endl;
			}
			break;
			
		case 2:
			ch = '-';
			for(x=0; x<n; x++) {
				for(y=0; y<n; y++) {
					arr[x][y] = arr1[x][y] - arr2[x][y];
				}
				cout << endl;
			}
			break;
			
		case 3:
			ch = '*';
			for(x=0; x<n; x++) {
				for(y=0; y<n; y++) {
					arr[x][y] = arr1[x][y] * arr2[x][y];
				}
				cout << endl;
			}
			break;
			
		case 4:
			ch = '/';
			for(x=0; x<n; x++) {
				for(y=0; y<n; y++) {
					arr[x][y] = arr1[x][y] / arr2[x][y];
				}
				cout << endl;
			}
			break;
		
		default:
			return 0;
	}
	
	for(x=0; x<n; x++) {
		for(y=0; y<n; y++) {
			cout << arr1[x][y] <<  " ";
		}
		if(x==0) cout << ch << " ";
		else cout << "  ";
		for(y=0; y<n; y++) {
			cout << arr2[x][y] <<  " ";
		}
		if(x==0) cout << "= ";
		else cout << "  ";
		for(y=0; y<n; y++) {
			cout << arr[x][y] <<  " ";
		}
		cout << endl;
	}
	
	return 0;
}
