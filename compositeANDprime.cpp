#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter N : ";
    cin>>n;
    bool flag=true;
    for(int i = 2; i<=n/2;i++){
        if(n%i==0){
             flag=false; // it meanse it is composite 
        break;  // to get out the loop immidiatly when ever we use break statment .
        }
       
    }
    if(n==1) cout<<"nighter composite nor prime";
    else if(flag==true) cout<<"prime";
    else cout<<"composite"; 

}