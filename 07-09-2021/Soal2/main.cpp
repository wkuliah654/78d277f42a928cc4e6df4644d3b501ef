#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct stack {
	int max;
	int num;
	string nama[100];
	int nik[100];
} tiket;

void init();
bool isEmpty();
void in();
void out();
void view();

int main(int argc, char** argv) {
	init();
	int pil;
	
	cout << "Masukkan jumlah antrian : "; cin >> tiket.max;
	
	do {
		cout << "Menu" << endl;
		cout << "1. In" << endl;
		cout << "2. Out" << endl;
		cout << "3. View" << endl;
		cout << "Masukkan menu yang di pilih : "; cin >> pil;
		if(pil == 1)
			in();
		else if(pil == 2)
			out();
		else if(pil == 3)
			view();
	}while(pil <= 3);
	
	return 0;
}

void init() {
	tiket.num = 0;
}

bool isFull() {
	if(tiket.num == tiket.max)
		return true;
	else
		return false;
}

bool isEmpty() {
	if(tiket.num == 0)
		return true;
	else
		return false;
}

void in() {
	if(!isFull()) {
		cin.ignore();
		cout << "Nama : "; getline(cin, tiket.nama[tiket.num]);
		cout << "NIK : "; cin >> tiket.nik[tiket.num];
		tiket.num++;
	}
}

void out() {
	int x;
	if(!isEmpty()) {
		for(x=0; x<tiket.num; x++) {
			tiket.nama[x] = tiket.nama[x+1];
			tiket.nik[x] = tiket.nik[x+1];
		}
		tiket.num--;
	}
}

void view() {
	int x;
	if(!isEmpty()) {
		cout << "No - Nama - NIK" << endl;
		for(x=0; x<tiket.num; x++) {
			cout << x+1 << " - " << tiket.nama[x] << " - " << tiket.nik[x] << endl;
		}
	}
}

