#include<bits/stdc++.h>

using namespace std ;

vector<string>vcc ;
int main()
{
    string n ;
    
    while( getline( cin , n ) )
    {
        string z ;
        string q ;
        for( auto &x : n )
        {
            if( x != '.' && x != ',' && x != ';' && x != ':' ) 
            {
                z += x ;
            }
        }
        stringstream nn ( z ) ;
        vector < string > vc ;
        string w ;
        while( nn >> w )
        {
            vc.push_back(w) ;
        }
        for( int i = (int)vc.size()-1 ; i >=0 ; i-- )
        {
            q += vc[i] ; 
        }
        vcc.push_back(q) ;
    }
    for( auto x : vcc) 
    {
        cout << x << " " ;
    }
}
