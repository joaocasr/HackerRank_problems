include <stdio.h>
//primeira submissão usando um ciclo while
int max_of_four(int a, int b, int c, int d){
    int n[4]={a,b,c,d};
    int i=0,r=i,o;
    while(r<4 && i<4){
        if(n[i]>n[r]){
            o=n[i];
            r++;
        }
        else{
             o=n[r];
             i++;
            }
    }
    return o;
}
//segunda submissão usando um ciclo for
int max_of_four(int a, int b, int c, int d){
    int arr[4]={a,b,c,d};
    int i=0;
    int max =arr[0];
    for(;i<4;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}




int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
