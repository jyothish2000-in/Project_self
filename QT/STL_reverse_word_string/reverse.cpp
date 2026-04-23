#include "reverse.h"

reverse::reverse() {}

// std::string reverse::reverse_word(std::string s){
//     std::stringstream ss(s);

//     while(ss>>word){
//         std::reverse(word.begin(),word.end());
//         result+=word;
//     }

//     return result;
// }

std::string reverse::reverse_word(std::string s){
    int start =0;
    for(int i=0;i<s.length();i++){
        if(i == s.length() || s[i] == ' '){
            std::reverse(s.begin()+start,s.begin()+i);
            start=i+1;
        }
    }
    return s;
}
