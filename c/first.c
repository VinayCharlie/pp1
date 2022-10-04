
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




// #include <stdio.h>
// #include <string.h>
// void avg(char arr[],char arr2[]){
//     // int len=0;
//     // for(int i=0;i<strlen(arr2);i++){
//     //     len+=1;
//     // }
//     int len=strlen(arr);
//     printf("%d\n",len);
//     printf("%s %s\n",arr,arr2);

// }
// int main(){
//    char a[]="Vinay";
//    char b[]="Kumar";
//    avg(a,b);
// }



//how to return two string
// #include <stdio.h>
// #include <string.h>
// void avg(char arr[],char arr2[],char* a[],char* b[]){
//     *a=arr;
//     *b=arr2;
// }
// int main(){
//    char a[]="Vinay";
//    char b[]="Kumar";
//    char* c;
//    char* d;
//    avg(a,b ,&c,&d);
//    printf("%s\n",c);
//    printf("%s\n",d);
//    return 0;
// }



//how to return two string
// #include <stdio.h>
// #include <string.h>
// void returnPointer(int arr[],int* arr2[]){
//     *arr2=arr+2;
// }
// int main(){
//    int *s;
//    int a[]={10,2,3,4,5,6};
//    returnPointer(a,&s);
//    printf("%d\n",*s);
//    return 0;
// }

// #include <stdio.h>
// #include <string.h>
// void f(int *p,int *q){
//     p=q;
//     *p=2;
// }
// int i=0,j=1;
// int main(){
//     f(&i,&j);
//     printf("%d %d\n",i,j);
//     getchar();
//     return 0;
// }


//return type (*pointer_name)(data type of argument);



// #include <stdio.h>
// #include <string.h>
// int sum(int a,int b){
//     return a+b;
// }
// int main(){
//    int s=0;
//    int (*ptr)(int,int)=&sum;
//    s=(*ptr)(2,3);
//    printf("%d\n",s);
//    return 0;
// }

////<-------------fuction pointer--------------->////
// #include <stdio.h>
// #include <string.h>
// int sum(int x,int y){
//     return x+y;
// }
// int main(){
//     int s=0;
//     int (*ptr)(int,int)=&sum;
//     s=(*ptr)(2,3);
//     printf("%d\n",s);
//     return 0;
// }

////<------callback fuction--------->///////
// #include <stdio.h>
// #include <string.h>
// int sum(int x,int y){
//     return x+y;
// }
// int main(){
//     int s=0;
//     int (*ptr)(int,int)=&sum;
//     s=(*ptr)(2,3);
//     printf("%d\n",s);
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
// void sum(int x,int y){
//     printf("%d", x+y);
// }

// void diply(void (*fptr)(int,int)){
//     (*fptr)(5,1);
// }
// int main(){
//     // int s=0;
//     // int (*ptr)(int,int)=&sum;
//     // s=(*ptr)(2,3);
//     // printf("%d\n",s);
//     // return 0;
//     diply(sum);
//    // int a[2][3]={{10,20,30},{10,20,30}};
// }

#include <stdio.h>

int sum(int a,int b){
    return a+b;
}


int main(){
    int s=0;
    int (*ptr)(int,int)=&sum;
    s=(*ptr)(2,3);
    printf("%d\n",s);
    return 0;
}






