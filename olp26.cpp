#include<bits/stdc++.h>

using namespace std ;

int main ()
{
    double n ; long long  m ; cin >> n >> m ;
    long long nn = ceil(n) - 1 ; 
    long long mac = 1e9 +7 ;
    cout << ((m*(2*m+1)*(m+1))/6 - (nn*(2*nn+1)*(nn+1))/6) % mac ;
}   