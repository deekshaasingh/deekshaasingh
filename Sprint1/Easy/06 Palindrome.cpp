#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int dup = n;
    int revNum = 0;
    while (n>0){
        for(int i=1; i<=n; i++){
            int ld = n%10; 
            revNum = (revNum*10) + ld;
            n = n/10;
        }
    }
    if (dup == revNum) cout<<"Palindrome";
    else cout<<"Not";
}
