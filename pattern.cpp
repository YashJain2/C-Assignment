#include<iostream>
using namespace std;

int factorial(int n){
    int result=1;
    for(int i=2;i<=n;i++){
        result*=i;
    }
    return result;
}

int main(){

    //defining inut and output files and methods
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    //rectangle pattern
    cout<<"Rectangle Pattern"<<endl;
    cout<<endl;
    for(int i=5;i>0;--i){
        for(int j=1;j<=4;j++){
            cout<<"*\t";
        }
        cout<<endl;
    }


    // hollow rectangle pattern
    cout<<endl<<"Hollow Rectangle Pattern"<<endl;
    cout<<endl;
    for(int i=9;i>0;--i){
        for(int j=1;j<=4;j++){
            if(i==9 || i==1 || j==1 || j==4){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }

    // Inverted Half Pyramid
    cout<<endl<<"Inverted Half Pyramid"<<endl;
    cout<<endl;
    for(int i=0;i<9;++i){
        for(int j=9-i;j>0;--j){
            cout<<"*\t";
        }
        cout<<endl;
    }


    //  Half Pyramid 180 degree
    cout<<endl<<"Half Pyramid 180 degree"<<endl;
    cout<<endl;
    for(int i=1;i<=5;++i){
        for(int j=5;j>0;--j){
            if(j>i)
                cout<<" \t";
            else
                cout<<"*\t";
        }
        cout<<endl;
    }

    //  Half Pyramid of numbers
    cout<<endl<<"Half Pyramid of numbers"<<endl;
    cout<<endl;
    for(int i=1;i<=5;++i){
        for(int j=1;j<=5;++j){
            if(j<=i){
                cout<<i<<"\t";
            }
            else{
                break;
            }
        }
        cout<<endl;
    }


    //  Flyod's Tringle
    cout<<endl<<"Flyod's Triangle"<<endl;
    cout<<endl;
    int x=1;
    for(int i=1;i<=6;++i){
        for(int j=1;j<=6;++j){
            if(j<=i){
                cout<<x<<"\t";
                ++x;
            }
            else{
                break;
            }
        }
        cout<<endl;
    }

    //butterfly pattern
    cout<<endl<<"Butterfly Pattern"<<endl;
    cout<<endl;
    int n=4;
    for(int i=1;i<=2*n;++i){
        for(int j=1;j<=2*n;++j){
            if(i<=n){
                if((j<=i) || (j+i>2*n)){
                cout<<"*\t";
            }
            else{
                cout<<" \t";
            }
            }
            else{
                if(((j+i-n)<=n+1) || ((i-n<=j-n) && j>=4) ){
                    cout<<"*\t";
                }
                else{
                    cout<<" \t";
                }
            }
            
        }
        cout<<endl;
    }

    //inverted half pyramid number pattern
    cout<<endl<<"Inverted half pyramid number pattern\n"<<endl;
    n=5;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;++j){
            if(j<=n-i+1){
                cout<<j<<"\t";
            }
        }
        cout<<endl;
    }

    //0-1 Patttern
    cout<<endl<<"0-1 Pattern\n"<<endl;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;++j){
            if(((i+j)%2)==0){
                cout<<"1\t";
            }
            else{
                cout<<"0\t";
            }
        }
        cout<<endl;
    }

    //Rhombus Pattern
    cout<<endl<<"Rhombus Pattern\n"<<endl;
    n=10;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=2*n-i;++j){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    //number pyramid
    cout<<endl<<"Numbers Pyramid Pattern\n"<<endl;
    n=5;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    //Palindrome Pattern
    cout<<endl<<"Palindrome Pattern"<<endl;
    n=5;
    for(int i=1;i<=5;i++){
        int j;
        for(j=1;j<=n-i;j++){
            cout<<"\t";
        }
        int k=i; 
        for(;j<=n;j++){
            cout<<k--<<"\t";
        }

        k=2;
        for(;j<n+i;j++){
            cout<<k++<<"\t";
        }
        cout<<endl;
    }


    // Star Pattern
    cout<<endl<<"Star Pattern \n"<<endl;
    n=4;
    for(int i=1;i<=4;i++){
        int j;
        for(j=1;j<=n-i+1;j++){
            cout<<"\t";
        }
        for(;j<=n+i;j++){
            cout<<"*\t";
        }
        cout<<endl;
    }

    for(int i=1;i<=9;i++){
        cout<<"*\t";
    }
    cout<<endl;
    for(int i=1;i<=4;i++){
        int j;
        for(j=1;j<i+1;j++){
            cout<<"\t";
        }
        for(;j<=2*n-i+1;j++){
            cout<<"*\t";
        }
        cout<<endl;
    }


    //Zig-Zag Pattern

    cout<<"\n\n Zig-Zag Pattern\n\n";
    for(int i=1;i<=3;i++){
        for(int j=1;j<=9;j++){
            if((((i+j)%4==0)) || (i==2 && j%2==0)){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }

    //Pascal Triangle
    cout<<"\n Pascal triangle \n\n";
    n=5;
    int temp;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            temp=factorial(i)/(factorial(j)*factorial(i-j));
            cout<<temp<<"\t";
        }
        cout<<endl;
    }
    
    return 0;
}