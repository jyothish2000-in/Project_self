#include<iostream>

int main(){

    int arr[] = {1,2,3,4,4,4,3,4,5,6};
    int pos =0;

    int size = sizeof(arr)/sizeof(arr[0]);
    std::cout<<size;
    for(int i=0;i<size;i++){
        if(arr[i]!=4){
            arr[pos] = arr[i];
            pos++;
        }
    }

    while(pos<size){
        arr[pos] = 4;
        pos++;
    }

    for(int i=0;i<size;i++){
        std::cout<<arr[i];
    }
    return 0;
}