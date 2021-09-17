#include<iostream>
using namespace std;


int binarySearch(int a[],int size,int key){
    int ans,low=0,high=size-1,mid=(low+high)/2;
    while(high>=low){
        if(key==a[mid]){
            return (mid+1);
        }
        else if (key>a[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        mid=(low+high)/2;
    }
    return 0;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int a[5]={21,70,90,101,405};
    int key=21,size=5;
    int result=binarySearch(a,size,key);
    if(result==0){
        cout<<"Key not found"<<endl;
    }
    else{
        cout<<"Key is present at: "<<result<<endl;
    }
    return 0;
}