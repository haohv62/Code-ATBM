#include<iostream>
using namespace std;
main(){
	string S; char H = 0, Ho;
	cout << "Nhap chuoi S : "; getline(cin, S);
	for(int i = 0; i < S.size(); i++){
		Ho = H;
		H = H >> 1;
		if(Ho % 2 != 0)
			H = H + 128;
		H = H ^ S[i];	
	}	
	cout << "Ma hash : " << H;
}
