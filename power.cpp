#include <iostream>
using namespace std;

int myPow(double x, int n){
    if(n == 0) return 1;
    if(x == 0) return 0;
    if(x == 1) return 1;
    if(x == -1 && n % 2 == 0) return 1;
    if(x == -1 && n % 2 != 0) return -1;
    
    long long binForm=n;

    if(n<0){
        binForm=-binForm;
        x=1/x;
    }
    double result = 1;
    while(binForm > 0){
        if (binForm % 2 == 1){
            result *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return result;
}
int main() {
    double result = myPow(3.0,6);
    cout<<result<<endl;
    return 0;
}