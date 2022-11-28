#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int a[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    int beg = 0 , end = n-1 , mid = (beg+end)/2 , item = 22 ;
    while(beg <= end && item != a[mid]){
        if(item < a[mid]){
            end = mid - 1;
        }
        else{
            beg = mid + 1 ;
        }
        mid = (beg + end) / 2 ;
    }
    if(a[mid] == item){
        cout << "found" << endl;
    }
    else
       cout << "Not found" << endl;
}