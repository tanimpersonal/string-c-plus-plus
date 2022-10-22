#include <bits/stdc++.h>
using namespace std;
int main(){
    string second;
    //fill with some specified letter
    string first(5,'x');
    //dynamic capacity
    cout << second.capacity() << endl;
    cout << second.max_size()<< endl;
    cout << first << endl;
    second = "vxvv";
    string concat= second +first;
    cout << concat << endl;
    return 0;
}