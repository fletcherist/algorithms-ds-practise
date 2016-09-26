#include <iostream>
#include <math.h>
using namespace std;
int main () {
	long long int n = 0, k = 0;
	cin >> n >> k;
	 if (k<=(n+1)/2){
        cout<<k*2-1<<endl;

    } else {
        cout<<(k-(n+1)/2)*2<<endl;
    }	
}
