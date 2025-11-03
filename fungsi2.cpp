#include <iostream>
using namespace std;


void inputNilai(int total, int jumlah){
	string pilih;
	
	cout << "Masukkan nilai mata kuliah ke- " << jumlah + 1 << "(Atau stop)";
	cin >> pilih;
	cin.ignore();
	
	if(pilih == "stop"){
		if(jumlah == 0){
			cout << "Belum ada nilai yang di input" << endl;
			return;
		}
	}
	jumlah++; 
	if (jumlah == 0) {
		cout << "Tidak ada nilai yang dihitung";
	} else if (jumlah != 0){
	double rata_rata = total / jumlah;
		cout << "Hasil Akhir" << endl;
		cout << "Total Nilai : " << total << endl;
		cout << "Jumlah Mata Kuliah : " << jumlah << endl;
		cout << "Rata-Rata Nilai : " << rata_rata << endl;
		
		if(rata_rata >= 85){
			cout << "Predikat anda A" << endl;
		} else if (rata_rata >= 75 && rata_rata < 85){
			cout << "Predikat anda B" << endl;
		} else if (rata_rata >= 65 && rata_rata < 75){
			cout << "Predikat anda C" << endl;
		}
		
		double nilai = stod(pilih);
		inputNilai (total + nilai, jumlah);
		}
	}



int main(){
	cout << "Program Menghitung Nilai" << endl;
	cout << "Ketik (stop) untuk mengakhiri program" << endl;
	
	inputNilai(0, 0);
	
	cout << "Program berakhir" << endl;
	return 0;
	
}
