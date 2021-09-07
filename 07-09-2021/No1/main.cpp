#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void calcPrima(int n, string* prima, int* count);

int main(int argc, char** argv) {
	int n, count = 0;
	string prima = "";
	
	cout << "Input bilangan : "; cin >> n;
	
	calcPrima(n, &prima, &count);
	
	cout << "Jumlah bilangan prima : " << count << endl;
	cout << "Bilangan prima : " << prima << endl;
	
	return 0;
}

void calcPrima(int n, string* prima, int* count) {
	int x, y, z;
	
	for(x=1; x<=n; x++) {
		z=0;
		for(y=x; y>0; y--) {
			if(x!=1 && y!=1 && x%y==0) {
				z++;
			}
		}
		
		if(z==1) {
			if((*count)!=0)
				(*prima)+=", ";
			++(*count);
			(*prima)+=(x+'0');
		}
	}
	
	
}
