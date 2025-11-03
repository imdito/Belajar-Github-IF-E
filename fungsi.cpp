#include <iostream>
#define PHI 3.14
using namespace std;
float hitung_volume_tabung(float , float );
float hitung_luas_lingkaran(int);
float hitung_volume_kerucut(float, float);

int main(){
	int pilih;
	int jari_lingkaran, tinggi_tabung, tinggi_kerucut;
	float volume_tabung, volume_kerucut;
	do{
		cout << "==== Menghitung Volume dan Keliling ===\n";
		cout << "1. Volume Tabung\n";
		cout << "2. Volume Kerucut\n";
		cout << "3. Keliling dan Luas Segitiga\n";
		cout << "4. Keliling dan Luas Persegi Panjang\n";
		cout << "5. Keluar\n"	;
		cin >> pilih;
		
		if(pilih == 1){
			system("cls");
			cout << "Masukkan jari-jari : ";
			cin >> jari_lingkaran;
			cout << "Masukkan Tinggi Tabung : ";
			cin >> tinggi_tabung;
			cout << "=============================\n";
			
			volume_tabung = hitung_volume_tabung(tinggi_tabung, hitung_luas_lingkaran(jari_lingkaran));
			
			cout << "Volume Tabung : "<< volume_tabung << endl;
		}else if(pilih == 2){
			system("cls");
			cout << "Masukkan jari-jari : ";
			cin >> jari_lingkaran;
			cout << "Masukkan Tinggi Kerucut : ";
			cin >> tinggi_kerucut;
			cout << "=============================\n";
			volume_kerucut = hitung_volume_kerucut(tinggi_kerucut, hitung_luas_lingkaran(jari_lingkaran));
			cout << "Volume Kerucut = " << volume_kerucut << endl;
			}else if(pilih == 3){
				
				}else if(pilih == 4){
					
					}else if(pilih > 5){
							system("cls");
							cout << "Menu Tidak Tersedia!!\n\n";
						}	
	}while(pilih != 5);
		
	return 0;
}

float hitung_luas_lingkaran(int jari_lingkaran){
		float lingkaran = PHI * jari_lingkaran * jari_lingkaran;
		cout << "Luas Lingkaran = " << lingkaran << endl;
		return lingkaran;
	}

float hitung_volume_tabung(float tinggi, float luas_lingkaran){
		float volume_tabung;
		volume_tabung = luas_lingkaran * tinggi;
			
		return volume_tabung;
	}

float hitung_volume_kerucut(float tinggi, float luas_lingkaran){
		float volume_kerucut =  tinggi * luas_lingkaran / 3;
		cout << "Volume kerucut = " << volume_kerucut << endl;
		return volume_kerucut;
	}
