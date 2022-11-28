#include<bits/stdc++.h>
using namespace std ;
#define infinity 99999

int mat[10][10] , s[10][10] , n ;

int main(){
    cout << "Enter the number of node : " ;
    cin >> n ;
    cout << "Enter the adjacency matrix : " << endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> mat[i][j] ;
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(mat[i][j] != 0){
                s[i][j] = mat[i][j] ;
            }
            else{
                s[i][j] = infinity ;
            }
        }
    }
    for(int k = 0 ; k < n ; k++){
         for(int i = 0 ; i < n ; i++){
             for(int j = 0 ; j < n ; j++){
                 s[i][j] = min(s[i][j] , (s[i][k] + s[k][j])) ;
             }
         }
    }
    cout << "The shortest path matrix : " << endl ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << s[i][j] << " " ;
        }
        cout << endl ;
    }
    return 0 ;
}