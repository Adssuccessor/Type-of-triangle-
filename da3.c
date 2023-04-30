#include<stdio.h>
int main(){
    int i=0,a,b,c,d=0,e=0,f=0,s=0;
    for(i=0;i<5;i++){
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        while((a+b+c)!=180){
            printf("Wrong Enrty try again\n");
            d++;
            scanf("%d",&a);
            scanf("%d",&b);
            scanf("%d",&c);
        }
        if((a==90)||(b==90)||(c==90)){
            e++;
        }
        else if((a>90)||(b>90)||(c>90)){
            f++;
        }
        else{
            s++;
        }
    }
    printf("Acute Angled Triangle:%d\n",s);
    printf("Right Angled Triangle:%d\n",e);
    printf("Obtuse Anhled Triangle:%d\n",f);
    printf("Wrong Entries:%d",d);
    return 0;
}


    



