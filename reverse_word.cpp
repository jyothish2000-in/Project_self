#include <iostream>
#include <string>

void reverseOrder(std::string& s,int start, int end){
    while(start<end){
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
    
}

int main()
{
    std::string s;
    getline(std::cin,s);

    int length = s.length();
    int start, end;

    for(int i =0; i < length ; i++)
    {
        if(s[i] == ' ')
            i++;
        
        start = i;
        while(s[i]!= ' '&&s[i]!= '\0')
            i++;
        end = i-1;

        if(start<end)
            reverseOrder(s,start,end);
            
    }

    std::cout<<s;

    return 0;
}

