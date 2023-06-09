#include<iostream>
using namespace std;
template <class T> 
T find_min(T arr[],int n){
    int i;
    T min;
    min = arr[0];
    for(i=0;i<n;i++){
        if(min>arr[i])
            min = arr[i];
    }
    return min;
}
int main(){
    int arr[5] = {5,4,2,7,3};
    char ch[5] = {'c','g','f','z','x'};
    double point[5] = {3.5,1.3,1.1,0.5,9.2};
    cout<<"Integer Minimum from array: "<<find_min(arr,5)<<endl;
    cout<<"Character Minimum from array: "<<find_min(ch,5)<<endl;
    cout<<"Double Minumum from array: "<<find_min(point,5)<<endl; 
}