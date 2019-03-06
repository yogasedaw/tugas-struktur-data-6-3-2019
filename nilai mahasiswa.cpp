#include <iostream>
#include <cstdlib>
using namespace std;

struct nilai
{
	float tugas,kuis,uts,uas,a;
}mahasiswa;
int main()
{
	cout<<"masukkan nilai tugas harian\t\t:";
	cin>>mahasiswa.tugas;
	
	cout<<"masukkan nilai kuis\t\t:";
	cin>>mahasiswa.kuis;
	
	cout<<"masukkan nilai uts\t\t:";
	cin>>mahasiswa.uts;
	
	cout<<"masukkan nilai uas\t\t:";
	cin>>mahasiswa.uas;
	system("cls");
	
	mahasiswa.a=mahasiswa.tugas*0.1+mahasiswa.kuis*0.2+mahasiswa.uts*0.3+mahasiswa.uas*0.4;
	cout<<"nilai tugas anda\t\t:"<<mahasiswa.tugas<<endl;
	cout<<"nilai kuis anda\t\t:"<<mahasiswa.kuis<<endl;
	cout<<"nilai UTS anda\t\t:"<<mahasiswa.uts<<endl;
	cout<<"nilai UAS anda\t\t:"<<mahasiswa.uas<<endl;
	cout<<"total nilai anda\t\t:"<<mahasiswa.a<<endl;
	
	if (mahasiswa.a>=85)
		cout<<"anda mendapata grade A";
	else if (mahasiswa.a>=70)
		cout<<"anda mendapat grade B";
	else if (mahasiswa.a>=55)
		cout<<"anda mendapat grade C";
	else if (mahasiswa.a>=40)
		cout<<"anda mendapat grade D";
	else if (mahasiswa.a<40)
		cout<<"anda mendapat grade E";
}
