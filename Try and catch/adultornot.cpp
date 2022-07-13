#include<iostream>
using namespace std;


void adultornot(int x){
    try{
        if(x<=18){
            cout<<"Not adult"<<endl;
        }
        else throw x;
    }
    catch(int x){
        cout<<"yo exception Adult"<<endl;
        // exit(1);
    }
}
int main(){

    adultornot(22);
    adultornot(15);
    return 0;
}