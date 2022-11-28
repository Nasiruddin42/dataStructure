#include<bits/stdc++.h>
using namespace std ;

int getCalculate(int firstPopElement , int secondPopElement , char sign){
    if(sign == '+') return (firstPopElement + secondPopElement) ;
    if(sign == '-') return (firstPopElement - secondPopElement) ;
    if(sign == '*') return (firstPopElement * secondPopElement) ;
    if(sign == '/') return (firstPopElement / secondPopElement) ;
    if(sign == '^') return pow(firstPopElement , secondPopElement) ;

    return 0 ;
}

int evaluationFromPostfix(string postfix){
    stack < int > st ;
    for(int i = 0 ; i < postfix.length() ; i++){
        if(postfix[i] >= '0' && postfix[i] <= '9'){
            st.push(postfix[i] - '0');
        }
        else{
            int firstPopElement = st.top() ;
            st.pop() ;
            int secondPopElement = st.top() ;
            st.pop() ;

            int calculateValue = getCalculate(secondPopElement , firstPopElement , postfix[i]) ;
            st.push(calculateValue) ;
        }
    }
    return st.top() ;
}

int main(){
    string postfix = "46+2/5*7+" ;
    int evaluation = evaluationFromPostfix(postfix) ;
    cout << evaluation << endl ;

    return 0 ;
}

