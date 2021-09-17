#include<iostream>
using namespace std;

int reverse(int x){
    int ans=0;
    while (x)
    {
        int temp=x%10;
        x/=10;
        ans=ans *10+temp;
    }
    
    return ans;
}

int addBinary(int a, int b){
    int ans=1,carry=0;
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            ans=ans*10+carry;
            carry=0;
        }
        else if ((a%2==1 && b%2==0) || (a%2==0 && b%2==1)){
            if(carry==1){
                ans=ans*10+0;
                carry=1;
            }
            else{
                ans=ans*10+1;
                carry=0;
            }
        }
        else if (a%2==1 && b%2==1){
            ans=ans*10+carry;
            carry=1;
        }
        // cout<<ans<<endl;
        a=a/10;
        b=b/10;
    }
    
    while(a>0){
        if(a%2==1){
            if(carry==1){
                ans=ans*10+0;
                carry=1;
            }
            else{
                ans=ans*10+1;
                carry=0;
            }
        }
        else{
            ans=ans*10+carry;
            carry=0;
        }
        a=a/10;
    }

    while(b>0){
        if(b%2==1){
            if(carry==1){
                ans=ans*10+0;
                carry=1;
            }
            else{
                ans=ans*10+1;
                carry=0;
            }
        }
        else{
            ans=ans*10+carry;
            carry=0;
        }
        b=b/10;
    }

    if(carry==1){
        ans=ans*10+1;
        carry=0;
    }
    ans=reverse(ans);
    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int a,b;
    cin>>a>>b;
    cout<<addBinary(a,b)/10<<endl;
    return 0;
}