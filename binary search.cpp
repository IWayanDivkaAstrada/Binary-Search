#include <iostream>

using namespace std;

int main(){      
	int nilai [8]={4, 8, 9, 12, 14, 20, 22, 23};
	for (int x=0; x<8; x++){
		cout<<nilai[x]<<" ";
	}
int cari;
cout<<"\nMasukkan Nilai yang dicari : ";
cin>>cari;
int awal, tengah, akhir, indikator=0;
awal=0; akhir=8-1;
while(indikator==0 && awal<=akhir){
	tengah=(awal+akhir)/2;
	if(nilai[tengah]==cari){
		indikator=1;
		break;
	}
	else if(nilai[tengah]<cari){
		awal=tengah+1;
	}
	else{
		akhir=tengah-1;
	}
}
if(indikator==1){
	cout<<"\nNilai yang ditentukan pada indeks ke : "<<tengah<<endl;
}
else {
 cout<<"\ndata tidak ditemukan";      
	}

}