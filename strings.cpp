/*https://www.hackerrank.com/challenges/c-tutorial-strings/problem*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    string temp;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<"\n";
    cout<<a+b<<"\n";
    temp[0]=a[0];
    temp[1]=b[0];
    b[0]=temp[0];
    a[0]=temp[1];
    cout<<a<<" "<<b;    
    
  
    return 0;
}
