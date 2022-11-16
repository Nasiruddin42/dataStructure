#include<bits/stdc++.h>
using namespace std;

int n ;
void solve(){
}
void insert(int num[] , int item , int k ){
    for(int j = n ; j >= k ; j--){
        num[j+1] = num[j] ;
    }
    num[k] = item ;
    n= n + 1 ;
    for(int i = 0 ; i < n ; i++){
        cout << num[i] << " " ;
    }
    cout << '\n' ;
}

void deleteElement(int a[] ,  int k){
       int item = a[k] ;
       for(int i = k ; i < n - 1 ; i += 1){
             a[i] = a[i + 1] ;
       }

       n = n - 1 ;
       for(int i = 0 ; i < n ; i++){
        cout << a[i] << " " ;
       }
       cout << endl ;
}
// void printArray(int a[] , int n){
//      for(int i = 0 ; i < n ; i += 1){
//             cout << a[i] <<  ' ' ;
//      }
//      cout << '\n' ;
// }
int main(){ 
    // int t  =  1 ;
    // cin >>  t ;
    // while(t--){
    //       solve() ;
    // }
    n = 7 ;
    int arr[n] = {3 , 4 , 1 , 9 , 5 , 6 , 7} ;
    int item = 2 , k = 3 ;
    insert(arr , item , k) ;
    deleteElement(arr , k) ;

   // printArray(arr  , n) ;

    return 0 ;   
}