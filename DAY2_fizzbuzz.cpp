#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int  c3 = 3, c5 = 5;
    for(int i=1;i<=n;i++){
        c3--;
        c5--;
        if(c3==0 && c5==0){
            cout << "fizzbuzz" << endl;
            c3 = 3;
            c5 = 5;
        }else{
            if(c3==0){
            cout << "fizz" << endl;
            c3 = 3;
        }
        else if(c5==0){
            cout << "buzz" << endl;
            c5 = 5;
        } else{
            cout << i << endl;
        }
        }
    }

    return 0;
}