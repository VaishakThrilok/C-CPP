#include<iostream>
using namespace std;

int main(){
    int a, Rem;

    cout << " Enter number:";
    cin >> a;

    Rem = a % 2;
    if(Rem == 0){
        cout << "Number is Even" << endl;
    }
    else{
        cout << " Number is Odd" << endl;
    }

    return 0;
}