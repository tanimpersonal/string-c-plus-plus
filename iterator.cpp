#include <bits/stdc++.h>

using namespace std;
int main(){
    string  first= "hello";
    string :: iterator i;
    //here i is like a pointer
    for(i=first.begin(); i<=first.end(); i++){
        cout << *i << endl;
    }
    //now do the iteration in reverse
    string :: reverse_iterator j;
    for(j= first.rbegin(); j!= first.rend(); j++){
        cout << *j << endl;
    }
    cout << endl;

    //iteration auto. means it will detect rbegin, rend, automatically and get k as in iterator
    for(auto k= first.rbegin(); k<=first.rend(); k++){
        cout << *k <<endl;
    }
    return 0;
}