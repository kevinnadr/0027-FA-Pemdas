#include <iostream>
using namespace std;
class MasukUniversitas {
public: // isi access modifier disini
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	float totalBiaya;
	// isi daftar variable yang dibutuhkan di bawah ini
public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;
		// isi nilai default variable yang dibutuhkan di bawah ini
	}
	virtual void namaJalurMasuk() { return; }
	// isi disini dengan fungsi virtual yang dibutuhkan
	
	void namaJalurMasuk  () {
		cout << "SNBT" << endl;
		cout << "SNBP" << endl;
	};

	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = 10000000;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	void setuangSemesterPertama(int nilai) {
		this->uangSemesterPertama = 5000000;
	}
	float getuangSemesterPertama() {
		return uangSemesterPertama;
	}
	void setuangBangunan(int nilai) {
		this->uangBangunan = 9000000;
	}
	float getuangBangunan() {
		return uangBangunan;
	}
	// isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas {
public: 
	SNBT(int pMasukUniversitas) {
		//MasukUniversitas(pMasukUniversitas);
		cout << "Masuk Universitas jalur SNBT\n" << endl;
	}
	
	
	void input (){
		cout << "Masukan Uang Pendaftaran : " << endl;
		cin >> uangPendaftaran;
		cout << "Masukan Uang Semester Pertama : " << endl;
		cin >> uangSemesterPertama;
		cout << "Masukan Uang Bangunan : " << endl;
		cin >> uangBangunan;
	}
	void hitungTotalBiaya() {
		totalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
	}
	// isi disini untuk melengkapi class SNBT
};
class SNBP : public MasukUniversitas {
public:
	SNBP(int pMasukUniversitas) : {
		MasukUniversitas(pMasukUniversitas);
		cout << "Masuk Universitas Jalur SNBP\n" << endl;
	}
	// isi disini untuk melengkapi class SNBP
	void input() {
		cout << "Masukan Uang Pendaftaran : " << endl;
		cin >> uangPendaftaran;
		cout << "Masukan Uang Semester Pertama : " << endl;
		cin >> uangSemesterPertama;
		cout << "Masukan Uang Bangunan : " << endl;
		cin >> uangBangunan;
	}
	void hitungTotalBiaya() {
		totalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
	}

};
int main() {
	// isi disini untuk fungsi main
	cout << "data jalur masuk universitas" << endl;
	cout << "pilih jalur masuk" << endl;
	cout << "1. SNBT" << endl;
	cout << "2. SNBP" << endl;
	int pilihan;
	cout << "Masukan Pilihan Anda : ";
	cin >> pilihan;

	




}