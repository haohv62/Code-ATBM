#include<iostream>
using namespace std;

main(){
	string s, C, P;
	char A[5][5];
	cout << "Nhap chuoi : "; getline(cin, s);
	
	//Tao ma tran
	int index = 0;
	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 5; j++)
			if(index < s.size()){
				A[i][j] = s[index];
				index ++;
			}
			else
				A[i][j] = '*';
				
	cout << "Ma tran : " << endl;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
		
	//Ma hoa
	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 5; j++)
			C += A[j][i];
			
	cout << "Chuoi sau khi ma hoa : " << C << endl;
	
	// Giai ma 
	index = 0;
	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 5; j++){
			A[j][i] = C[index];
			index ++;
		}
	
	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 5; j++)
			P += A[i][j];	
	cout << "Chuoi ban dau : " << P;		
}
