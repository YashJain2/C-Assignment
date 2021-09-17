#include<iostream>
#include<cmath>
using namespace std;


void Armstrong_Number(int x){
    int temp=0,result=x;
    while(x){
        // cout<<x<<"\t"<<temp<<  endl;
        temp+=(x%10)*(x%10)*(x%10);
        // cout<<temp<<endl;
        x/=10;
    }
    if(result==temp){
        cout<<"The given number "<<result<< " is an armstrong number"<<endl;
    }
    else{
        cout<<"The given number "<<result<< " is not an armstrong number"<<endl;
    }
}



void Reverse_Number(int x){
    int temp=0,y=x;
    while(y){
        temp=temp*10+(y%10);
        y/=10;
    }
    cout<<"The reverse of "<<x<<" is "<<temp<<endl;
}

void Ascii(char a){
    int y=a;
    cout<<"The ASCII value of "<<a<<" is "<<y<<endl;
}

void Factor (int x){
    cout<<"The factors of "<<x<<" are: ";
    for(int i=2;i<x/2;i++){
        if(x%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

void Factorial(unsigned long long int x){
    unsigned long long int result=1,y=x;
    while(y){
        result=result*y;
        y--;
    }
    cout<<x<<"! = "<<result<<endl;
}

bool isPrime(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}

void fibonaci(int n){
    int t1=0,t2=1,next;
    while(n){
        cout<<t1<<" ";
        next=t1+t2;
        t1=t2;
        t2=next;
        n--;
    }
}


int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int x;
    unsigned long long int y=5;
    char a;
    cin>>x>>a;
    Armstrong_Number(x);
    Reverse_Number(x);
    Ascii(a);
    Factor(x);
    Factorial(y);

    // Print all Primes between two numbers
    int n1,n2;
    cin>>n1>>n2;
    cout<<"The Prime numbers between "<<n1<<" and "<<n2<<" are: ";
    for(int i=n1;i<=n2;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;

    //Fibonnai Series
    int n;
    cin>>n;
    cout<<"The fibonacci series upto "<<n<<" terms: ";
    fibonaci(n);
    cout<<endl;

    return 0;
}