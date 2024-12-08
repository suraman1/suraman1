#include<iostream>
using namespace std;
int add_diagonal(int arr[3][3], int row, int col) {
  int sum=0;
  for(int j=0; j<row; j++){
    for(int i=0 ; i<col; i++){
      if(i==j){
        sum+=arr[i][j];
      }
    }
  }
  return sum;
}
int main(){
  int row=3, col=3;
  int h[][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  cout<<add_diagonal(h,row,col);
}
