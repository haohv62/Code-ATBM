#include<iostream>
using namespace std;
main(){
	//Tim ma hash 
	string S; char H = 0;
	cout << "Nhap chuoi S : "; getline(cin, S);
	for(int i = 0; i < S.size(); i++){
		H = H ^ S[i];	
	}
	cout << "Ma hash : " << H;
}
