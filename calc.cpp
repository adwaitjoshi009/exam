
#include <iostream>
using namespace std;
int main()
{
char o;
float n1, n2;
cin >> o;
cin >> n1>>n2;
switch (o) {
case '+':
cout <<n1+n2;
break;
case '-':
cout<<n1-n2;
break;
case '*':
cout<<n1*n2;
break;
case '/':
cout<<n1/n2;
break;
default:
cout<<"Wrong operator!";
break;
}
return 0; 
}
