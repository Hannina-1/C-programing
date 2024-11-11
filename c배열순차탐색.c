#include <stdio.h>
int sequentialSearch(int x[],int key, int n);

int main(){
    int a[]={35,75,15,5,95,25,65,45,55,85},data,pos;
    printf("탐색할 자료값을 입력하세요:");
    scanf("%d",&data);
    pos= sequentialSearch(a,data, 10);
    if(pos==-1)
        printf("요청한 자료값 %d는 없습니다.\n",data);
    else
        printf("요청한 자료값 %d는 배열의 a의 %d번쨰에 있습니다.\n",data,pos+1);

}
/*크기 n인 int형 배열에 대한 순차탐색함수*/
int sequentialSearh(int x[],int key,int n){
    int i;
    for(i=0;  i<n; i++)
        if(x[i]==key) return(i);
    return (-1);
}