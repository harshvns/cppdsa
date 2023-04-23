#include <iostream>
using namespace std;
void print(int*p){
    cout<<*p<<endl;
}
void update(int*p){
    // p=p+1;
    *p=*p+1;
}
int getSum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=i[arr];//arr[i]=*(arr+i)
    }
    return sum;
}
int main() {
    int value=5;
    int *p=&value;
    print(p);
    update(p);
    print(p);
    int arr[5]={1,2,3,4,5};
    cout<<getSum(arr,5)<<endl;
    cout<<getSum(arr+2,3)<<endl;


    return 0;
}