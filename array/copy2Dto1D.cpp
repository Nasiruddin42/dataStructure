#include<bits/stdc++.h>
using namespace std ;

int matrix[100][100] ;

void copy2Dto1D(int array[] , int totalElement, int row , int col){
    int k = 0 ;
    for(int i = 0 ; i < row; i++){
        for(int j = 0 ; j < col ; j++){
            array[k++] = matrix[i][j] ;
        }
    }
    for(int i = 0 ; i < totalElement ; i++){
        cout << array[i] << " " ;
    }
}

int main(){
    int row , col ;
    cout << "enter the number of row & column :" <<endl;
    cin >> row >> col ;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cin >> matrix[i][j] ;
        }
    }
    int totalElement = row*col ;
    int array[totalElement] ;
    copy2Dto1D(array, totalElement, row , col) ;

    return 0 ;
}