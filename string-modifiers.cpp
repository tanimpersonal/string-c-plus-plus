#include <bits/stdc++.h>
using namespace std;
int main(){
    string st = "abcd";
    //assign
    st.assign("hello");
    cout << st << endl;
    string st2= "bye";
    //st1= st + st2
    st+=st2;
    cout << st << endl;
    //add by append
    st.append("hola");
    cout << st << endl;
    //push at front
    st.push_back('f');
    cout << st << endl;
    // pop/delete last element
    st.pop_back();
    cout << st << endl;
    //insert at an index
    st.insert(0, "inserted");
    cout << st << endl;
    //delete from an index ( position, how many characters to delete)
    st.erase(4,2);
    cout << st << endl;
    swap(st,st2);
    cout << st << endl;
    cout << st2 << endl;
}