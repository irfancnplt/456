#include <iostream>

using namespace std;
void bolum(int dboyutu, int dizi[],int bol){
	int sayac=0;
	while(sayac != dboyutu)
	{
		if(sayac % bol !=0)
		{
			cout << dizi[sayac];
		}
		else if(sayac % bol == 0)
		{
			cout << endl;
			cout<< dizi[sayac];
		}
		sayac++;
	}
}
int main(int argc, char** argv) {
	int dizi[9]={1,2,3,4,5,6,7,8,9};
	int dboyutu=9;
	int bol;
	cout << "bolunmesi gereken sayi:";
	cin>>bol;
	if(dboyutu>bol && bol>0)
	{
		bolum(9,dizi,bol);
	}
	else 
	{
		cout << "Hatali Islem...";
	}
	return 0;
}
