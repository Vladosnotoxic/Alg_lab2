#include <iostream>
#include <cmath>
using namespace std;

void main()
{
    float a;
    cout <<"Vveddite a ";
    cin>>a;
    if(a==2 || a==-2 || a==0){
        cout<< "Infin";
    }else{
    float z1= (((a+2)/sqrt(2*a)) -  (a/(sqrt(2*a)+2)) + (2/(a-sqrt(2*a)))) *((1/sqrt(a+2)));
    float z2= 1/(sqrt(a+2));
    cout << "z1 = " << z1 <<" z2= "<<z2;
    }
  


}

