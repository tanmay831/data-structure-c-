#include <iostream>
using namespace std;

int main(){
    int n=20;

    int oddsum=0;
    int i=1;

    while (i<=n)
    {
        if(i%2!=0){
            oddsum+=i;
        }
        i++;
    }
    cout<<"oddsum"<<oddsum<<endl;
    
}
     
    