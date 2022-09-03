#include <stdio.h>
#include <string>
#include <stdexcept>
#include <iostream>

class Palindrome{
public:
    static bool isPalindrome(const std::string &word){
        int stringLength=word.length();
        for(int i=0; i<stringLength; i++){
            if(tolower(word[i])!=tolower(word[stringLength-i-1])){
                //converting chars in string to lower case for comparison
                //cout<< "wordArray["<<i<<"] != wordArray["<<stringLength-i-1<<"]"<<endl;   //debug
                return false;
            }
        }
        return true;
    }
};