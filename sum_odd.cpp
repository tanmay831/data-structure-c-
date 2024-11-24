#include<iostream>
using namespace std;  //n%2==0--- even
                      //n%2!=0---odd
int main(){
    int n=10;
    int oddsum=0;
    for(int i=1;i<=n;i++){
        if (i%2!= 0){
            oddsum+=i;
        }
    }
        cout<<"odd sum="<< oddsum <<endl;
        
    
    return 0;

} 
