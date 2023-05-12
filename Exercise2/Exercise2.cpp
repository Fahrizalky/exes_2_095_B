#include <iostream>
using namespace std;

const int MAX_SIZE = 37;
int fahri[MAX_SIZE];

void input(int& n) { //Procedure Input
	cout << "Masukkan elemen (max" << MAX_SIZE << ") :" ;
	cin >> n;
	cout << "Enter:\n";
	for (int i = 0; i < n; i++) {
		cin >> fahri[i];
	}
}
void algorithm(int n, int desired) { //Procedure Alghortima
	int rizal = 0, kusuma_yuda = n - 1, mid;
	while (rizal <= kusuma_yuda) {
		mid = (rizal + kusuma_yuda) / 2;
		if (fahri[mid] == desired) {
			cout << "Found" << endl;
			return;
		}
		else if (desired < fahri[mid]) {
			kusuma_yuda = mid - 1;
		}
		cout << "Not Found" << endl;
	}
 }

int main() { //Procedure Main
	int n, desired;
	input(n);
	cout << "Massukkan Elemen Yang Dicari : ";
	cin >> desired;
	algorithm(n, desired);
	return 0;

}