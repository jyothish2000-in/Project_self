#include "word_first_cap_last_cap.h"

void first_cap_last_cap::toUpperCast(int length, std::string s)
{
    for(int i=0; i<length;i++){
        if(i == 0 || s[i-1] == ' ')
            s[i] = toupper(s[i]);
        if ((s[i] != ' ')&&(i == length-1 || s[i+1] == ' ' ))
            s[i] = toupper(s[i]);
    }

    std::cout<<"Final string : "<<s<<std::endl;
}

int main()
{
    first_cap_last_cap obj;
    std::cout<<"Enter your string here : ";
    getline(std::cin,obj.s);
    obj.length = obj.s.length();
    obj.toUpperCast(obj.length,obj.s);

    return 0;
}