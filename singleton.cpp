#include<iostream>
using namespace std;

class singleton{
    private:
        int data;
        //because non static members cannot be defined outside the class
        //also static memebers are initialised only once
        static singleton *obj;
        singleton(){
            data=0;
        }
    public:
        //static members are accessed only through static func
        static singleton *getinstance(){
            if(!obj)obj=new singleton();
            return obj;
        }
        int getdata(){
            return data;
        }
        void setdata(int val){
            data=val;
        }
};
//if we dont give this it will give undefined reference for singleton::obj
singleton *singleton::obj=0;
int main(){
    singleton *s=s->getinstance();
    cout<<s->getdata()<<endl;
    s->setdata(10);
    cout<<s->getdata()<<endl;

    singleton *t=t->getinstance();
    t->setdata(20);
    cout<<s->getdata()<<endl;
}