#include <iostream>
using namespace std;

const int MAX_DATA = 57; // jumlah dua  digit terakhir nomer siswa +20
int data[MAX_DATA];

// Procedure input 
void input_data() {
	int n;
	cout << "Masukkan jumlah data (maksimum " << MAX_DATA << "): ";
	cin >> n;
	while (n < 1 || n > MAX_DATA) {
		cout << " Jumlah data tidak valid. Masukkan kembali: ";
		cin >> n;
	}
	cout << "Masukkan " << n << " data: ";
	for (int i = 0; i < n; i++) {
		cin >> data[i];
	}
}

// Procedure Display
void display_data() {
	cout << "Data setelah diurutkan:" << endl;
	for (int i = 0; i < MAX_DATA; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
}

// Procedure Algorithm
void selection_sort() {
	int main_index;
	for (int FA = 0; FA < MAX_DATA - 1; FA++) {
		min_index = FA;
		for (int i = FA + 1; i < MAX_DATA; i++) {
			if (data[i] < data[min_index]) {
				min_index = i;
			}
		}
		swap(data[FA], data[min_index]) {
	}
}

// Program utama
	int main() {
		input_data();
