
// #include <stdio.h>
// #include <stdlib.h>



// //function
// void sum(int a,int b){
//     printf("Hello");
// }

// int main(){
//     // int *ptr=NULL,b=10;
//     // //ptr=&b;    
//     // if (ptr==NULL) {
//     //     printf("ptr is NULL\n");
//     //     return 0;
//     // }else{
//     //     printf("%d\n",*ptr);
//     // }


// /////dangling pointer in c

// ///if you freez the pointer thats is calloed danging pointer
// // int *ptr =(int*)malloc(sizeof(int));
// // *ptr=10;
// // printf("%d\n",*ptr);
// // free(ptr);
// // ptr=NULL;
// // if (ptr==NULL){
// //     printf("ptr is NULL\n");
// //     return 0;
// // }
// // printf("%d\n",*ptr);



// //int b=sum(10,20);
// sum(10,20);
// //printf("%d\n",sum(10,20));
// }




//function2

// #include <stdio.h>


// //void sum();

// int sum(int x,int y){
//     x=2*x+y;
//     return x;
// }
// int main(){
//    // sum(10,20);
//    //int a=10,b=20;
//    int x=2,y=5;
//     y=sum(x,y);
//     x=sum(x,y);
//     printf("%d\n",x);
//    return 0;
// }
// // void sum(){
// //     printf("Hello\n");
// // }







// 

// #include <stdio.h>

// int incre(int i){
//     static int count=0;
//     count+=i;
//     return count; 
   

// }
// int main(){
//     int i,j;
//     for(i=0;i<=4;i++){
//         j=incre(i);
//         printf("%d",j);
//     }

// }




///3rd problem
// #include <stdio.h>
// int r(){
//     static int num=7;
//     return num--; 

// }
// int main(){
//     {
//     int i,j;
//     for(r();r();r())
//     printf("%d\n",r());
//     }
//     return 0;

// }


///3rd problem
// #include <stdio.h>
// int r(){
//     static int num=7;
//     return num--; 

// }
// int main(){
//     {
//     int i,j;
//     for(r();r();r())
//     printf("%d\n",r());
//     }
//     return 0;
// }



///3rd problem
// #include <stdio.h>
// void r(int *p,int m){
//     m=m+5;
//     *p=*p+m;
// }
// int main(){
//     int i=5,j=10;
//     r(&i,j);
//     r(&i,j);
//     printf("%d\n",i+j);
//     return 0;
// }



///3rd problem
// #include <stdio.h>
// int avg(int arr[],int n){
//      int count=0;
//     for(int i=0;i<n;i++){
//         count+=arr[i];
//     }
//     return count;
// }
// int main(){
//     int marks[5]={10,15,20,30,40 },n=sizeof(marks)/sizeof(marks[0]);
    
//     printf("%d\n",avg(marks,n));
// }


#include <stdio.h>
int avg(int arr[],int n){
     int count=0;
    for(int i=0;i<n;i++){
        count+=arr[i];
    }
    return count;
}
int main(){
    int marks[5]={10,15,20,30,40 },n=sizeof(marks)/sizeof(marks[0]);
    
    printf("%d\n",avg(marks,n));
}








