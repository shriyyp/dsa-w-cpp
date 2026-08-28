#include <iostream>
using namespace std;
int main (){
    //using of and or not and xor operators 
    int a=5;
    int b=3;
    cout<< (a|b)<<endl;
    cout<< (a^b)<<endl;
    cout<<(~a)<<endl;
    cout<<(a&b)<<endl;
    //post pre decre n incre
    int c=10;
    int d=20;
    cout<< (c++)<<endl;
        cout<< (++c)<<endl;
            cout<< (c--)<<endl;
                cout<< (d--)<<endl;

    return 0;
}
