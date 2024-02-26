
#include<bits/stdc++.h>

using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int S[100] , i = 0 ;
    while( n > 0 ){ 
        S[i] = n % 2 ;
        n /= 2 ;
        i++ ;
    }
    for(int j = i-1 ; j >= 0 ; j--) {
        cout << S[j] ;
    }
    
}