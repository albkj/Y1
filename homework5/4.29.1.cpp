#include<iostream>
using namespace std; 
int main(){
	int n;
	int a[100][100];
	cin>> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin>>a[i][j];
		}
	} 
	int rowMax[100],colMin[100];
	for(int i = 0; i < n; i++){
		int max = a[i][0];
		for(int j = 0; j < n; j++){
			if(a[i][j] > max) max = a[i][j];
		}
		rowMax[i] = max;
	} 
	for(int j = 0; j < n; j++){
		int min = a[0][j];
		for(int i = 0; i < n; i++){
			if(a[i][j] < min) min = a[i][j];
		}
		colMin[j] = min;
	} 
	int flag = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(rowMax[i] == colMin[j]) {
				cout<< i<< " "<< j<< endl;
				flag = 1;
			}
		}
	}
	if(!flag) cout<< "NO"<< endl;
	return 0;
}

