#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool checkbound(int i,int j,int row,int col){
	if(i==0||j==0||i==row-1||j==col-1){
		return true;
	}else{
		return false;
	}
}
int medianfilter(int com,vector<int> vect){
	if(com==4)
		return vect[2];
	else
		return vect[4];
}
int main(){
	int row=0;
	int col=0;
	int com=0;
	cin>>col>>row>>com;
	row+=2;
	col+=2;
	int array[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(i==0||j==0||i==row-1||j==col-1)
				array[i][j]=0;
			else
				cin>>array[i][j];
		}
	}
	int median[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(checkbound(i,j,row,col)){
				median[i][j]=0;
			}else{
				vector<int> mediantemp;
				if(com==8){
					mediantemp.push_back(array[i][j]);
					mediantemp.push_back(array[i-1][j]);
					mediantemp.push_back(array[i+1][j]);
					mediantemp.push_back(array[i][j-1]);
					mediantemp.push_back(array[i][j+1]);
					mediantemp.push_back(array[i-1][j-1]);
					mediantemp.push_back(array[i+1][j+1]);
					mediantemp.push_back(array[i+1][j-1]);
					mediantemp.push_back(array[i-1][j+1]);
				}else{
					mediantemp.push_back(array[i][j]);
					mediantemp.push_back(array[i-1][j]);
					mediantemp.push_back(array[i+1][j]);
					mediantemp.push_back(array[i][j-1]);
					mediantemp.push_back(array[i][j+1]);
				}
				sort(mediantemp.begin(),mediantemp.end());
				median[i][j]=medianfilter(com,mediantemp);
			}
		}
	}
	for(int i=1;i<row-1;i++){
		for(int j=1;j<col-1;j++){
			cout<<median[i][j]<<" ";
		}
		if(row!=i){
			cout<<endl;	
		}
	}
}
