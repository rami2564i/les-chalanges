#include <stdio.h>
int main(void)

{

int deparateurs[]={8*60,9*60+43,11*60+19,12*60,2*60,3*60+45,7*60,9*60+45

};
int arivals[]={10*60+16,11*60+52,1*60+31,3*60,4*60+8,5*60+55,9*60+20,11*60+58

};
int n=8;
int h, m;
printf(" enter your time by hours and minetes :  ");
scanf("%d:%d",&h,&m);
int user_time= h*60 +m;
int closet=0;
int min_diff=(
    user_time>deparateurs[0]
)?(user_time - deparateurs[0]):( deparateurs[0]-user_time);
for( int i=1 ;i<n;i++){
    int diff;
    if (user_time>deparateurs[i])
        diff= user_time-deparateurs[i];
    else
          diff= deparateurs[0]-user_time;
    if ( diff < min_diff){
        min_diff = diff ;
        closet=i;

    }
}int dep_h= deparateurs[closet]/60;
int dep_m= deparateurs[closet]%60;
int arr_h= arivals[closet]/60;
int arr_m= arivals[closet]%60;
printf(" closet fligth depart at %02d:%02d and end at %02d:%02d ",dep_h,dep_m,arr_h,arr_m);
    

return 0.;









}