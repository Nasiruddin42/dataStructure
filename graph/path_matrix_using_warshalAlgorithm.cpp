#include<bits/stdc++.h>
using namespace std ;

int mat[10][10] , p[10][10] , n ;

int is_strong(){

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
             if(p[i][j] == 0){
                return 0 ;
             }
        }
    }
    return 1 ;
}

int main(){
    cout << "Enter the number of node : " ;
    cin >> n ;
    cout << "Enter the adjacency matrix : " << endl ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >>mat[i][j] ;
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            p[i][j] = mat[i][j] ;
        }
    }
    for(int k = 0 ; k < n ; k++){
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                p[i][j] = (p[i][j] || (p[i][k] && p[k][j])) ;
            }
        }
    }
    cout << "The path matrix is : " << endl ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    if(is_strong()){
        cout <<"The graph is strongly connected " << endl;
    }
    else{
        cout << "The graph is not strongly connected " << endl;
    }

    return 0 ;
}