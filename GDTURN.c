#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x, y;
        scanf("%d %d",&x,&y);
        if(x+y>6){
            printf("Yes\n");
        }else{
            printf("No\n");
        }

    }return 0;
}