//sum of numbers from 1 to n
#include <iostream>
using namespace std;
 
 int main(){
     int n=16;
     int sum =1;
     for(int i=1;i<=n;i++){
         sum +=i;
        if(i==5){
            break;

        }
     }
     cout<<"sum ="<<sum<<endl;
     return 0; 
 }