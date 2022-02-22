#include<iostream>
using namespace std;
int main()
{
float marks[5],n,average,total=0;
 
 
for (int i=0;i<5;i++){
cout<<"enter the marks :";
cin>>n;

marks[i]=n;
}
for (int i=0;i<5;i++){

total = total+ marks[i];
}
average = total/5;
    cout<<"average :"<<average<<endl;


return 0;

};

  
