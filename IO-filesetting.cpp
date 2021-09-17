#include<iostream>
using namespace std;

int main(){
    //defining inut and output files and methods
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    //character integer initialization
    int x='a';
    char y= '0';
    int z=y;
    cout<<"The number entered is "<<z<<endl;

    //checking for a vowel
    int isLowerVowel,isUpperVowel;
    char c;
    cin>>c;
    isLowerVowel=(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u');
    isUpperVowel=(c=='A' || c=='E' || c=='I' || c=='O'  || c=='U');
    if(isLowerVowel || isUpperVowel){
        cout<<"The character is a Vowel"<<endl;
    }
    else{
        cout<<"The character is a constonant"<<endl;
    }

    //multiplication tablr of 10
    x=10;
    for(int i=1;i<=10;++i){
        cout<<x<<" * "<<i<<" = "<<x*i<<endl;
    }
    return 0;

    
}