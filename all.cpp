
#include <iostream>
using namespace std;

//function for addition

int display
(int a,int b){

    return a+b;

}

//function for subtraction

int display
(int a,int b){

    return a-b;
}

//function for multiplier

int display
(int a ,int b, double multi){

    return a*b;

}

//function for division

double display
(double a,double b){

    if(b!=0){
        return a/b;
    }
    else{
        cout<<"Error:Division by zero!"<<endl;
        return 0;
    }
}


int main(){
    int x,y;
    double multi;
    cout<<"Enter two integers";
    cin>>x>>y;

    cout<<"addition"<<display
    (x,y)<<endl;
    cout<<"subtraction"<<display
    (x,y)<<endl;
    cout<<"Multiplication"<<display
    (x,y,0)<<endl;
    cout<<"division"<<display
    ((double) x,(double) y)<<endl;

    return 0;
}

