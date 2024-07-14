#include <stdio.h>

int max(int a,int b){
if(a>b){
return a;
}
else{
return b;
}
}
int main(){
int arr[50],a1[50],a2[50],n;
printf("enter no.of array elements:\n");
scanf("%d",&n);
printf("Enter elements:");
for(int i=0;i<n;i++)
scanf("%d",&a1[i]);
for(int i=0;i<n;i++)
a2[i]=a1[i];
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
              if(a2[i]>=a2[j])
              {
                           int temp=a2[i];
                           a2[i]=a2[j];
                           a2[j]=temp;
              }
}
}
printf(" sorted matrix a2:\n");
for(int i=0;i<n;i++)
printf("%d ",a2[i]);
printf("\n\n");
int i,j;
int c[n+1][n+1];
for(i=0;i<n+1;i++){
c[0][i]=0;
c[i][0]=0;
}
for(i=1;i<n+1;i++){
for(j=1;j<n+1;j++){
if(a1[i-1]==a2[j-1]){
c[i][j]=c[i-1][j-1]+1;
}
else{
c[i][j]=max(c[i-1][j],c[i][j-1]);
}
}
} 
 
for(i=0;i<n+1;i++){
for(j=0;j<n+1;j++){
printf("%d ",c[i][j]);
}
printf("\n");
}
printf("%d",c[n][n]);

}
