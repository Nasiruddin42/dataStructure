#include<bits/stdc++.h>
using namespace std ;

int precedence(char ch ){
    if(ch == '^') return 3 ;
    else if(ch == '*' || ch == '/') return 2 ;
    else if(ch == '+' || ch == '-') return 1 ;
    else return -1 ;
}

string infixToPostfix(string infix){
    stack < char > st ;
    string postfix = " " ;
    for(int i = 0 ; i < infix.length() ; i++){
        char ch = infix[i] ;
        if((ch >= 'a'&& ch <= 'z') || (ch >='A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            postfix += ch ;
        }
        else if(ch =='('){
            st.push(ch) ;
        }
        else if(ch == ')'){
            while(!st.empty() and st.top() != '('){
                postfix +=st.top() ;
                st.pop() ;
            } 
            st.pop() ;
        }
        else{
            while(!st.empty() && precedence(ch) <= precedence(st.top())){
                postfix += st.top() ;
                st.pop() ;
           }
           st.push(ch) ;
        }
    }
    while(!st.empty()){
        postfix += st.top() ;
        st.pop() ;
    }
    return postfix ;
}

int main(){ 
    string infix = "a+b*(c^d-e)^(f+g*h)-i" ;
    string postfix = infixToPostfix(infix) ;

    cout << postfix << endl ;
}