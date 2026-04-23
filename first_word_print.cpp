#include <iostream>
#include <string>

int main()
{
    std::string s;

    std::getline(std::cin,s);

    for(int i=0;i<=s.length();i++){

        if(i == 0 || s[i-1] == ' ')
            std::cout<<s[i]<<std::endl;
    }

    return 0;
}