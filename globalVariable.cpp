#include <iostream>
using namespace std;
    // global variable
    int score=15;
void a(int& i){
    cout<<score<<endl;
}
void b(int &i){
    cout<<score<<endl;
    cout<<i<<endl;
}

int main() {
    cout<<score<<endl;
    int i=5;
    b(i);

    return 0;
}