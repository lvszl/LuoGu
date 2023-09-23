#include <iostream>
#include <cmath>
using namespace std;

int n, x;
const int maxn = 1e5 + 2;
int a[maxn] = {0};

int main(){
    scanf("%d%d", &n, &x);
    long long sum = 0;
    long long last = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(i != 0)
            last = a[i - 1];
        if(a[i] + last > x){
            long long over = a[i] + last - x;
            sum += over;
            if (over <= a[i])
                a[i] -= over;
            else {
                a[i] = 0;
                a[i - 1] = a[i - 1] - (over - a[i]);
            }
            last = a[i];
        }
    }
        
    printf("%lld\n",sum);
    return 0;
}

/*
十年OI一场空，不开long long 见祖宗！
*/