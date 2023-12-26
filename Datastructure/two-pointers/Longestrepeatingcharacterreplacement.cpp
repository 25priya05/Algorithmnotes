// Longest Repeating Character Replacement

// You  are given  a string s and integer k .you can choose any character of the string  and  change it to any other uppercase English character .You can perform this operation at most K times 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int characterReplacement(string &s, int k) {
          if(s.length()==k) return s.length();

        int n = s.size();

        int i=0, j=0;
        vector<int> v(26);

        int ans = 0;
        // solve logic

        while(j<n){
            v[s[j]-'A']++;
            while((j-i+1) - *max_element(v.begin(), v.end())>k){
                v[s[i] - 'A']--;
                i++;
            }
            // here we get a valid window
            ans = max(ans, j-i+1);
            j++;

        }

        return ans;
    }
    int main(int argc, char const *argv[])
    {
        string s;
        cin>>s;
        int k;
        cin>>k;
       
        int ans = characterReplacement(s,k);
        cout<<ans<<" ";
    }
    