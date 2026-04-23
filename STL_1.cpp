// To find common element in an single array using STL unordered map
#include <iostream>
#include <unordered_map>
int main(){
    int arr[] = {4,5,7,4,5,5,1,2,3,9};

    int size = sizeof(arr)/sizeof(arr[0]);
    std::unordered_map<int,int> freq;

    for(int i=0;i<size;i++){
        freq[arr[i]]++;
    }

    for(auto &ref : freq){
        if(ref.second > 1){
            std::cout<<ref.first<<" ";
        }
    }

    return 0;
}