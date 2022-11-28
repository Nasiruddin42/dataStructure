#include<bits/stdc++.h>
using namespace std ;

int main(){
    int row , col ;
    cin >> row >> col ;
    int matrix[row][col] ;
    for( int i = 0 ; i < row ; i++){
        for(int  j = 0 ; j <= i ; j++){
            cin >> matrix[i][j] ;
        }
    }
    int n = (row*(row+1))/2 ;
    int newArray[n] , k = 0 ;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j <= i ; j++){
            newArray[k++] = matrix[i][j] ;
        }
    }
    for( int i = 0 ; i < n ; i++){
       cout << newArray[i] << " " ;
    }
}