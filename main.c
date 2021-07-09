#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
long long int a,b,n,i,j;
scanf("%lld%lld%lld",&a,&b,&n);

for(i=1;i<=n;i+=2){
    a=a*2;
    
}
for(j=2;j<=n;j+=2){
    b=b*2;
    
}
if(a>b){
    printf("%lld\n",a/b);
}
else{
    printf("%lld\n",b/a);
}


    }
    return 0;
}