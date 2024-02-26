#include<bits/stdc++.h>

using namespace std ;
void fibonacci(long long n )
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    long long f1 = 1 , f2 = 1 ; 
    long long fn = 0 ;
    long long a[n] , r = 1 ;
    a[-1] = 100000 ; a[0] = 1 ;
    while ( fn < n)
    {
        fn = f1 + f2 ; 
        a[r] = fn ; r++ ; 
        f1 = f2 ; f2 = fn ;
        
    }
    cout << n << " = " ;
    long long sum = 0 ;
    for( int i = r-1 ; i >= 0 ; i--)
    {
        if( sum + a[i] <= n )
        {
            cout << a[i] ;
            sum += a[i] ;
            if( sum < n ) cout << " + " ;
        }
        
    }
}

int main()
{
    long int n ; cin >> n ;
    fibonacci( n ) ;
}