#include <iostream>
#include <string.h>
using namespace std;

class Vape{
   public:
      void data();
};

typedef struct{
	int kode, stok;
	char nama[10];
}
   brg;
   brg barang[5];
   brg lok[5];
   brg temp;
   int n, i, b, j, cari, ada;
//LIFA
void Vape::data(){
	
	cout<<"*********************************************************************"<<endl;
	cout<<"                       UANG VAPE KEBUMEN                          "<<endl;
	cout<<"*********************************************************************"<<endl<<endl;

	cout<<"Masukan banyak Liquid = ";
	cin>>n;

	for(i=0;i<n;i++){
	    cout<<endl;
	    cout<<"liquid ke-"<<(i+1)<<":"<<endl;
	    cout<<"Masukan id Liquid    : ";cin>>barang[i].kode;
	    cout<<"Masukan Nama Liquid  : ";cin>>(barang[i].nama);
	    cout<<"Masukan Stock Liquid : ";cin>>barang[i].stok;
	    }
		cout<<endl;
	    cout<<"Data Belanja Anda"<<endl<<endl;
	    cout<<"*********************************************************************"<<endl;
	    cout<<"|   id liquid  |  Nama liquid  | Stock liquid | "<<endl;
	    cout<<"********************************************************"<<endl;

	    for(i=0;i<n;i++){
	    	cout<<"|      "<<barang[i].kode<<"\t\t"<<barang[i].nama<<"\t\t"<<barang[i].stok<<"     |"<<endl;
	        }
        cout<<endl;
cout<<"********************************************************"<<endl;

          for(i=0;i<n;i++){
             for(j=0;j<n-1;j++){
                if(barang[j].stok > barang[j+1].stok){
                	temp.kode=barang[j].kode;
                    barang[j].kode=barang[j+1].kode;
                    barang[j+1].kode=temp.kode;
	
		          	strcpy(temp.nama,barang[j].nama);
		          	strcpy(barang[j].nama,barang[j+1].nama);
		          	strcpy(barang[j+1].nama,temp.nama);

                	temp.stok=barang[j].stok;
                	barang[j].stok=barang[j+1].stok;
                	barang[j+1].stok=temp.stok;
                    }
                  }
               }
               cout<<endl;
        cout<<endl;
//QONITA AULYA
        cout<<"Setelah data diurutkan berdasarkan kode terkecil : "<<endl;
        cout<<"********************************************************"<<endl;
        cout<<"|  id liquid  |  Nama liquid  |  Stock liquid  | "<<endl;
        cout<<"********************************************************"<<endl;
        for(j=0; j<n; j++){
            cout<<"|       "<<barang[j].kode<<"\t\t"<<barang[j].nama<<"\t\t"<<barang[j].stok<<"     |"<<endl;
        }

        cout<<"********************************************************"<<endl;
        cout<<endl;
        cout<<"Masukan id Liquid untuk Mencari data : ";
        cin>>cari;
        ada = 0;
        for(j=0; j<n; j++){
            if(barang[j].kode==cari){
                    ada=1;
                    
					cout<<endl;
                    cout<<"********************************************************"<<endl;
                    cout<<"|      id liquid   |  Nama liquid   |       Stock liquid    |    "<<endl;
                    cout<<"********************************************************"<<endl;
                    cout<<"|         "<<barang[j].kode<<"\t\t  "<<barang[j].nama<<"\t\t     "<<barang[j].stok<<"\t\t "<<"|"<<endl;
                }
            }
            cout<<"********************************************************"<<endl;
	if (ada == 0){
		cout<<"Data Tidak ditemukan"<<endl;
	}	
}
int main(){
   Vape kebumen;
   kebumen.data();
   return 0;
}
