#include<iostream>
using namespace std;

main(){
	string k;
	cout <<"Nhap khoa K : "; cin >> k;
	k += "ABCDEFGHIKLMNOPQRSTUVWXYZ"; 
	
	//1. Xoa phan tu trung lap khoi chuoi 
	for(int i = 0; i < k.length(); i++){
		for(int j = i+1; j < k.length(); j++){
			if(k[i] == k[j]){
				k.erase(j, 1);
				j --;
			}
		}
	}
	
	cout << "Chuoi k moi : " << k << endl;
	
	//3.Dat k moi thu duoc vao ma tran 5*5
	int vt = 0;
	char M[5][5];
	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 5; j++){
			M[i][j] = k[vt];
			vt ++;
		}
	
	
	//Xuat ma tran
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cout << M[i][j] << " ";
		}
		cout << endl;
	
	}
	
}
