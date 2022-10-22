#include <bits/stdc++.h>

using namespace std;
int main(){
    //group of string will be splited by each string
    string st= "ab aba cd bh jk ljk";
    stringstream stream(st);
    string w;
    while (stream >> w){
        cout << w << endl;
    }
    string s1="Codeblocks";

    s1.clear();

    cout<<s1.capacity()<<" "<<s1.size()<<endl;
}