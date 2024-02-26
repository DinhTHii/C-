#include<bits/stdc++.h>

using namespace std ;

int main (){
    int n ;
    cin >> n ;
    int A[7] ;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 7 ; j++){
            cin >> A[j] ;   
        }
        sort ( A , A + 7 ) ;
        cout << A[0] << " " << A[1] << " " << A[6] - A[0] - A[1] ;


        
        cout << endl ;
    }
    
}