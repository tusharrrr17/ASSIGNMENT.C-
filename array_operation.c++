#include<iostream>
using namespace std;
int main(){
int a;
cout<<"enter size";
cin>>a;
int arr[a],i,j;
cout<<"enter elements";
for(i = 0;i<a;i++){
cin>>arr[i];
}
cout<<"ur array is -";
for( i = 0;i<a;i++){
cout<<arr[i]<<" ";
}
cout<<endl;
 
cout<<"array in reverse";
for( i = a-1; i>= 0;i--){
cout<<arr[i]<<" ";
}
cout<<endl;
int temp;
for(i=0;i<a-1;i++){
for( j=i+1;j<a;j++){
if(arr[i] > arr[j]){
temp = arr[i];
arr[i] = arr[j];
arr[j]= temp;
}
}
}
int small = arr[0], large= arr[a-1],scnd_small= -1, scnd_large= -1;
for(i=1;i<a;i++){
if(arr[i]>small){
scnd_small = arr[i];
break;
}
}

for(i=a-2;a>=0;i--){
if(arr[i]<large){
scnd_large = arr[i];
break;
}
}
cout<<"second smallest element is  "<< scnd_small<<endl;
cout<<"second largest element is  "<< scnd_large<<endl;
return 0;
}
