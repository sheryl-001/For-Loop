//For Loop | HackerRank
//In this challenge, you will use a for loop to increment a variable through a range.
//Input Format
//You will be given two positive integers,a  and b (a<=b), separated by a newline.
//Output Format
//For each integer n in the inclusive interval [a,b]:
//If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
//Else if n>9 and it is an even number, then print "even".
//Else if n>9 and it is an odd number, then print "odd".

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,i;
    string n[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a;
    cin>>b;
    for(i=a;i<=b;i++)
    {
        if (i>9)
            cout<<(i%2!=0?"odd":"even")<<endl;
        else
            cout<<n[i]<<endl;
    }
    return 0;
}

