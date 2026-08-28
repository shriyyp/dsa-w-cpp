#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number of your choice: ";
    cin>>n;
    int i=1;
    for ( ;; ){
        if (i<=n){
            cout <<i<<" ";
        }
        else {
            break;
        }
        i++;
    }
    return 0;
}