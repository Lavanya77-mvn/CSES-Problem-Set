// Section: Sorting and Searching
// Problem: Distinct Numbers

#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    unordered_set<int> st;
    for(int i =0; i<n;i++){
        int x; 
        cin>>x;
        st.insert(x);
    }
    cout<<st.size()<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
