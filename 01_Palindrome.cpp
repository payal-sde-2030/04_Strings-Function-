#include <iostream>
using namespace  std ;

bool isPalindrome(string s) {
    int start = 0 ;
    int end = s.length()-1 ;
    
    while (start < end) {
        if (s[start] != s[end]) {
            return false ;
        }
            start++ ;
            end-- ;
    } 
     return true ;
}

int main( ) {
    string word = "racecar" ;
    if(isPalindrome(word)) {
        cout << "Palindrome hai" ;
    } else {
        cout << "Palindrome nhi hai" ;
    }
    
    return 0 ;
    
}
