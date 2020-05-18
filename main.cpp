#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string abcd, wyraz1;
    cout << "Podaj wyraz/litery, ktore chcesz posortowac: ";
    cin >> wyraz1;
   	abcd = wyraz1;
   
    for( int i=0; i<abcd.length()-1; i++ )
    for( int j=0; j<abcd.length()-1; j++ )
    if( abcd[j]>abcd[j + 1] )
         swap( abcd[j], abcd[j + 1] );
   
    cout << abcd << endl;
   
    
    return 0;
}
