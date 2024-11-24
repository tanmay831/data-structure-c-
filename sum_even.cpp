#include<iostream>
using namespace std;  //n%2==0--- even
                      //n%2!=0---odd
int main(){
    int n=10;
    int evensum=0;
    for(int i=1;i<=n;i++){
        if (i%2== 0){
            evensum+=i;
        }
    }
        cout<<"odd sum="<< evensum <<endl;
        
    
    return 0;

} 
