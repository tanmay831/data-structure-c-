#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the char: ";
    cin >> ch;
    if(ch>=65 && ch<=90){
        cout<<"lowercase\n";
    }
    else{
        cout<<"uppercase\n";
    }
    return 0; 
}
