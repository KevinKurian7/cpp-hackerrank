/*https://www.hackerrank.com/challenges/arrays-introduction/problem*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a[1000];
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=n;i>0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
