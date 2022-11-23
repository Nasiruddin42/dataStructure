#include<bits/stdc++.h>
using namespace std ;

int main(){
    int row1 , col1 , row2 , col2 ;
    cout << "enter the first matrix :" ;
    cin >> row1 >> col1 ;
    int matrix1[row1][col1] ;
    for(int i = 0 ; i < row1 ; i++){
        for(int j = 0 ; j < col1; j++){
            cin >> matrix1[i][j] ;
        }
    }
    cout << "enter the second matrix :" ;
    cin >> row2 >> col2 ;
    int matrix2[row2][col2] ;
    for(int i = 0 ; i < row2 ; i++){
        for(int j = 0 ; j < col2 ; j++){
            cin >> matrix2[i][j] ;
        }
    }
    int newMatrix[row1][col1] ;
    for(int i = 0 ; i < row1 ; i++){
        for(int j = 0 ; j < col1 ; j++){
            newMatrix[i][j] = matrix1[i][j] + matrix2[i][j] ;
        }
    }
    cout << "Print new matrix :" << endl;
    for(int i = 0 ; i < row1 ; i++){
        for(int j = 0 ; j < col1 ; j++){
            cout << newMatrix[i][j] << " " ;
        }
        cout << endl;
    }
}