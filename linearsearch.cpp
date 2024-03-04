#include<iostream>
using namespace std;
bool search(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={5,4,-8,5,4,8,9,6,3,2};
    cout <<"enter the elements that you want to search:";
    int key;
    cin >> key;
    bool found=search(arr,10,key);
    if(found){
        cout<<"key is present.."<< endl;
    }else{
        cout<<" key is not present here.."<< endl;
    }
    return 0;
}
