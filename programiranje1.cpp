#include<iostream>
using namespace std;
int main ()
{
int a;
cin>>a;
if(a%3==0 && a%5==0)
cout<<"Broj je djeljiv i sa 3 i sa 5 "<<endl;
else if(a%3==0 && a%5!=0)
cout<<"Broj je djeljiv sa 3 ali nije djeljiv sa 5 "<<endl;
else if(a%5==0 && a%3!=0)
cout<<"Broj je djeljiv sa 5 ali nije sa 3 "<<endl;
else if(a%5!=0 && a%3!=0)
cout<<"Broj nije djeljiv ni sa 5 ni sa 3"<<endl;
return 0;
}
