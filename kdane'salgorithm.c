
#include<stdio.h>
int kadane(int a[],int size){
    int i,cumsum=0,maxsum=0;
    for(i=0;i<size;i++){
        cumsum+=a[i];
        if(cumsum>maxsum){
            maxsum=cumsum;

        }else{
            cumsum=0;
        }
    }return maxsum;
}
int main(){
    int a[]={5,-4,2,6,1};
    int size=sizeof(a)/4;
    int result = kadane(a,size);
	printf("%d",result);
}
