#include <iostream>
#include <string>
using namespace std;
int main() {
int a=50,b=10,c=5,d=1;
int money;
cout << "說!你口袋有多少錢:";
cin >> money;

int x = money / a, y = money - x * a; 
cout <<"這麼少阿...最少有" << x << "個50元 ";
int g=y/b,h=y-g*b;
cout <<"," << g << "個10元";
int i=h/c,j=h-i*c;
cout<<","<<i<<"個5元";
int k=j/d;
cout<<"和"<<k<<"個1元吧"; 
}
