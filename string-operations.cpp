#include <bits/stdc++.h>

using namespace std;
int main(){
    string st= "aaabbabdhgjhasgd";
    //find the first occurrence of b
    cout << st.find('b') << endl;
    //find the first occurence of b from end
    cout << st.rfind('b') << endl;
    //last occurrence of b
    cout << st.find_last_of('b') << endl;
    //first where b can't be found
    cout << st.find_first_not_of('b') << endl;
    //last where d can't be found
    cout << st.find_last_not_of('d') << endl;
    //substring(start_position, how many)
    cout << st.substr(2,4) << endl;
}