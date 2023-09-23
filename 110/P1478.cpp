#include <iostream>
#include <algorithm>

using namespace std;

int n, s;
const int maxn = 5000 + 5;

int a, b;


struct Apple{
int x, y;
}apple[maxn];

bool cmp(const Apple a, const Apple b){
    if(a.y == b.y)
        return a.y < b.y;
    return a.y < b.y;
}

int main(){
    scanf("%d%d",&n, &s);
    scanf("%d%d",&a, &b);

    for (int i = 0; i < n; i++){
        scanf("%d%d", &apple[i].x, &apple[i].y);
    }

    sort(apple, apple + n, cmp);
    int sum = 0;
    for (int i = 0; i < n; i++){
        if(apple[i].x <= (a + b) && s >= apple[i].y){
            sum += 1;
            s -= apple[i].y;
        }
    }
    // printf("1");
    printf("%d\n",sum);
    return 0;

}
