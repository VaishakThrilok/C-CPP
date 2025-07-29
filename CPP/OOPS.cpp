#include<iostream>
#include<string>
using namespace std;

void stringReverse(string& str){

    int left =0; 
    int right = str.length()-1;

    while(left<right){
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main(){
    string input = "Vaishak";
    reverseString(input)
    cout << "Reversed String: " << input << endl;

    return 0;
}