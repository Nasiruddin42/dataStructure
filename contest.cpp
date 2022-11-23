#include<bits/stdc++.h>
using namespace std;

int n ;
void insertInSortedArray(int num[] , int item ){
    int k ;
    for(int i = 0 ; i < n ; i++){
        if(num[i] > item) {
            k = i ;
            break ;
        }
    }
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
    
    n = 7 ;
    int arr[n] = {2 , 3 , 5 , 7 , 8 , 9 , 10} ;
    int item = 6 , k = 3;
    insertInSortedArray(arr , item) ;
    deleteElement(arr , k) ;

   // printArray(arr  , n) ;

    return 0 ;   
}