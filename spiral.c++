#include<iostream>
using namespace std;
void spiral(int n){
int arr[n][n],num=1;
int top = 0, botm = n-1, left = 0 , right = n-1;
while(top<=botm && left<= right){
for(int i = left; i<= right; i++){
arr[top][i] = num++;
}
top++;
for(int i=top; i<= botm;i++){
arr[i][right] = num++;
}
right--;
if(top <= botm){
for(int i = right; i>=left; i--){
arr[botm][i] = num++;
}
botm--;
}
if(left <= right){
for(int i = botm; i>=top;i--){
arr[i][left] = num++;
}
left++;
}
}
for(int i=0; i<n;i++){
for(int j =0;j<n;j++){
cout<<arr[i][j]<<"\t";
}
cout<<endl;
}
}
int main(){
    int n;
    cout<<"enter sixe";
    cin>>n;
    if(n <= 0){
        cout<<" inavlid size";
        return 1;
    }
    spiral(n);
    return 0;
}
