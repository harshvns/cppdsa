#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int smaller=factorial(n-1);
    int bigger=n*smaller;
    return bigger;
}
int main() {
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
    return 0;
}
// power of number
/*
#include <iostream>
using namespace std;
int power(int n){
    if(n==0){
        return 1;
    }
    int smaller=power(n-1);
    int bigger=2*smaller;
    return bigger;
}
int main() {
    int n;
    cin>>n;
    int ans=power(n);
    cout<<ans<<endl;
    return 0;
}
*/