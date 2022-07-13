#include<iostream>
using namespace std;


void division(int num,int den){
    try{
        if(den!=0)cout<<num/den<<endl; 
        else throw den;
    }
    catch(int x){
        cout<<"caught division by zero"<<endl;
    }
    catch(...){
        cout<<"exception caught"<<endl;
    }
    // catch(int x){
    //     cout<<"caught division by zero"<<endl;
    // }
}
int main(){

    division(5,2);
    division(10,0);
    division(8,2);
    return 0;
}