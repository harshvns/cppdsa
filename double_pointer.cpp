#include <iostream>
using namespace std;
void update(int **p2){
    // p=p+1;
    // kuch change hoga-NO
    // *p=*p+1;
    // kuch change hoga-Yes
    **p2=**p2+1;
    // kuch change hoga-Yes
}
int main() {
    int i=5;
    int*p=&i;
    int**p2=&p;
    cout<<"before"<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p2<<endl;
    
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
    update(p2);
    cout<<"after "<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p2<<endl;
    
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    return 0;
}