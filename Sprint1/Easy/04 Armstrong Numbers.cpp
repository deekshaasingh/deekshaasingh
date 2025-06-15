#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int dup = n;
    int sum = 0;
    while (n>0){
        for(int i=1; i<=n; i++){
            int ld = n%10;
            sum = sum+ (ld*ld*ld);
            n = n/10;
        }
    }
    if (dup == sum) cout<<"Armstrong";
    else cout<<"Not";
}
