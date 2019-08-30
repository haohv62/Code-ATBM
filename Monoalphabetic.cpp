#include<iostream>
using namespace std;
string A = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
main(){
	string P, K;
	cout << "Nhap chuoi P : "; cin >> P;
	cout << "Nhap khoa K : "; cin >> K;
	
	//Ma hoa
	for(int i = 0; i < P.length(); i++){
		for(int j = 0; j < A.length(); j ++){
			if(P[i] == A[j]){
				P[i] = K[j];
				break;
			}
		}
	}
	cout << "Chuoi sau khi ma hoa : " << P <<endl;
	
	//Giai ma 
	for(int i = 0; i < P.length(); i++){
		for(int j = 0; j < K.length(); j++){
			if(P[i] == K[j]){
				P[i] = A[j];
				break;
			}
		}
	}
	cout << "Chuoi sau khi giai ma : " << P;
	
}
