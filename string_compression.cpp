#include<iostream>
#include<string>
int main(){

    std::string s;
    getline(std::cin,s);
    for(int i =0 ;i<s.length();){
        int count =0;
        char current = s[i];

        while(i<s.length() && current == s[i]){
            count++;
            i++;
        }

        std::cout<<current<<count;
    }
}