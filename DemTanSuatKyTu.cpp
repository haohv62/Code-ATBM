//Lap trinh tinh tan suat xuat hien cua cac ky tu trong mot doan van ban cho truoc
#include<iostream>
using namespace std;

main(){
	string s, s1;
	int dem = 0;
	cout << "Nhap chuoi s : "; getline(cin, s);
	s1 = s;
	
	//Xoa cac phan tu trung lap trong s
	for(int i = 0; i < s1.length(); i++){
		for(int j = i+1; j < s1.length(); j++){
			if(s1[i] == s1[j]){
				s1.erase(j,1);
				j --;
			}
		}
	}
	
	//dem tan suat cac ky tu trong chuoi
	for(int i = 0; i < s1.length(); i++){
		for(int j = 0; j < s.length(); j++){
			if(s1[i] == s[j])
				dem ++;
		}
		cout <<"Ky tu ' "<<s1[i] <<"' xuat hien : " << dem << " lan" <<endl;
		dem = 0;
	}
	
}
