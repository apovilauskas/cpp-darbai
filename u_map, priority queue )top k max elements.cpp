#include <bits/stdc++.h>

//top k most frequent elements

struct comp{
    
    bool operator()(std::pair<int, int> a, std::pair<int, int> b){
        return a.second < b.second;
    }
    
};

int main()
{
    std::ifstream fd("U1.txt");
    std::ofstream fr("U1rez.txt");
    
    int k;
    fd >> k;
    
    std::map<int, int> a; //skaicius ir jo daznis
    
    int temp;
    while(fd >> temp){
        a[temp]++;
    }
    
    //rikiuoja poras
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, comp> b;
    
    for(auto i : a){
        b.push(i);
    }
    
    for(int i=0; i<k; i++){
        fr << b.top().first << ' ' << b.top().second <<'\n';
        b.pop();
    }

    return 0;
}
