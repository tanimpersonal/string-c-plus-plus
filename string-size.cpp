#include <bits/stdc++.h>

using namespace std;
int main(){
    string st= "abcd";
    cout << st.size() << endl;
    //resize the string
    st.resize(3);
    cout << st << " " << st.size() << endl;
    //clear the string
    st.clear();
    cout << st << " " << st.size() << endl;
    //check if string is empty
    if(st.empty()){
        cout << "Yes" << endl;
    }
}