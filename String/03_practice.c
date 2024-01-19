#include<stdio.h>
void slice(char *st,int m ,int n ){
    int i=0;
    while((m+i)<n){
        st[i]=st[i+m];
        i++;
    }
    st[i]='\0';
}
int main()
{
    char j[]="jatin";
    slice(j,1,4);
    printf("%s",j);
    return 0;
}