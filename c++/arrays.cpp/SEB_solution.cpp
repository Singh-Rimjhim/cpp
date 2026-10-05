// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int dp[n+1];
//     dp[0]=1;
//     for(int i=1; i<=n; i++){
//         dp[i]=0;
//         for(int j=1; j<=i; j++){
//             dp[i] = dp[i]+dp[i-j];
//         }
//     }
//     cout<<dp[n]<<endl;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     string ans=" ";
//     for(char ch:s){
//         if(!ans.empty()&& abs(ans.back()-ch)==32){
//             ans.pop_back();
//         }
//         else
//             ans.push_back(ch);
//     }
//     cout<<ans;
//     return 0;
// }

//NEXT GREATER ELEMENT
#include <iostream>
using namespace std;
int main() {
    int arr[] = {4, 5, 2, 10, 8};
    int n = 5;
    int ans[n];
    int st[n];
    int top = -1;
    for (int i = n - 1; i >= 0; i--) {
        while (top >= 0 && st[top] <= arr[i]) {
            top--;
        }
        if (top == -1)
            ans[i] = -1;
        else
            ans[i] = st[top];

        st[++top] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}