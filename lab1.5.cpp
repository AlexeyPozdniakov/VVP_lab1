
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float sum,proizv,chast,a,b,raz;
    cout<<"Input numbers"<<endl;
    cin>>a>>b;
    a=abs(a);
    b=abs(b);
    sum=a+b;
    raz=a-b;
    proizv=a*b;
    chast=a/b;
    cout<<"chastnoe="<<chast<<endl<<"raznost="<<raz<<endl<<"proizvedenie="<<proizv<<endl<<"summ="<<sum<<endl;
    return 0;
}
