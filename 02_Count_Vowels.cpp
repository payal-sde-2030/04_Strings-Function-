#include <iostream>
using namespace  std ;

  int countVowel(string str) {
    int count = 0 ;
    
    for (int i = 0 ; i < str.length() ; i++) {
        char c = str[i] ;
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
             count++ ;
             } 
    }
     return count ;
}

int main( ) {
    string word = "Payal" ;
    cout << "Vowels : " << countVowel(word) ;
    
    return 0 ;
    
}
