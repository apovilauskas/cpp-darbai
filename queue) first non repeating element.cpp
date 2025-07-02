#include <bits/stdc++.h>

//Return the first non-repeating character in a stream.

int main()
{
    std::ifstream fd("U1.txt");
    std::ofstream fr("U1rez.txt");
    
    std::string a = "aabbcdde";
    
    std::unordered_map<char, int> m; //frequencies
    std::queue<char> q; //order 
    
    for(int i=0; i<a.size(); i++){
        m[a[i]]++;
        q.push(a[i]);
    }
    
    while(!q.empty()){
        if(m[q.front()]==1) {fr << q.front(); break;}
        q.pop();
    }


    return 0;
}
