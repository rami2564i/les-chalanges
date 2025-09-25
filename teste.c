#include <stdio.h>
int main(void)

{
int d1,m1,y1;
int d2,m2,y2;
printf("b enter your  first date like y/m/d:   ");
scanf("%d/%d/%d",&y1,&m1,&d1);
printf("b enter your  scend  date like y/m/d:  ");
scanf("%d/%d/%d",&y2,&m2,&d2);
if(y1<y2){
    printf(" first date ist the old one %d:%d:%d ",y1,m1,d1 );
    
}
else if (y1>y2)
{
        printf(" the scend  date ist the old one %d:%d:%d ",y2,m2,d2 );

}
else
{if(m1<m2){
    printf(" first date ist the old one %d:%d:%d ",y1,m1,d1 );
    
}
else if (m1>m2)
{
        printf(" the scend  date ist the old one %d:%d:%d ",y2,m2,d2 );

}
else{

if(d1<d2){
    printf(" first date ist the old one %d:%d:%d ",y1,m1,d1 );
    
}
else if (d1>d2)
{
        printf(" the scend  date ist the old one %d:%d:%d ",y2,m2,d2 );

}
else{
    printf("the dates is same  ");
    return 0 ;
}

    



}


}


}