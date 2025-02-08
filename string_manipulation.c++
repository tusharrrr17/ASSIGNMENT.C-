#include<iostream>
usning namespace std;
int main(){
int i;
  string strng;
cout<<" enter a string";
cin>> strng;
int lnth = strng.length();
for(i = 0; i<(lnth/2);i++){
if(strng[i] != strng[lnth -1 - i]){
cout<<" not a palindrome"<< endl;
break;
}
if (i == (lnth/2) -1){
cout<<" ia s palindrome"<< endl;
}
}
for ( i=0; i<lnth;i++)
{
if( strng[i] == 'a' || strng[i] == 'e'|| strng[i]== 'i'|| strng[i] == 'o'|| strng[i] == 'u'|| strng[i] == 'A'|| strng[i] == 'E'|| strng[i] == 'O'|| strng[i] == 'I'|| strng[i] == 'U'){
strng[i] = '*';
}
}
cout<< strng << endl;
return 0;
}
