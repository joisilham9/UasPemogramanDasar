#include <iostream>
using namespace std;
class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {

		presensi = 0;
		activity = 0;
	 	exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir(){ return 0 ; }
	void hitungNilaiAkhir(int ) {
	}

	virtual void cekKelulusan( ) { return ; }
	
	void cekKelulusan(float nilai) {
		this->cekKelulusan = nilai;

	}
	
		 
	virtual void input() { return ; }
	
	
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}
	int nilai() {
		return 0;
	}
};


class Pemrograman : public MataKuliah { //isi disini
public:
	void input() {
		int p,a,e,ua;
	}
	float presensi () {
		int p;
		cout << "masukan nilai presensi : " << endl;
		cin >> p;
		return 0;
	}
	float activity() {
		int a;
		cout << "masukan nilai activity : " << endl;
		cin >> a;
		return 0;
	}
	float exercise() {
		int e;
		cout << "masukan nilai exercise : " << endl;
		cin >> e;
		return 0;
	}
	float ujianakhir() {
		int ua;
		cout << "masukan nilai : " << endl;
		cin >> ua;
		return 0;
	}

};

int main() {
	Pemrograman Pemrograman ;

	cout << "program dibuat" << endl;
	
	Pemrograman.input();
	return 0;};