#include<iostream>
using namespace std;

int main(){
    int n, Sum =0;

    cout << "Enter n:";
    cin >> n;

    for (int i=1; i<=n; i++){
        Sum = Sum + i;
    }

    cout << "Sum from 1 to " << n << " = " << Sum << endl;
    
    return 0;
    
}