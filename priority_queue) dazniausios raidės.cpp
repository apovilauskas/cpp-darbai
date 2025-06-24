//paima teksta ir isvardina raides ir ju kiekius nuo dazniausios iki reciausios

#include <bits/stdc++.h>

struct compare{
    bool operator()(std::pair<char, int> a, std::pair<char, int> b){
        return a.second < b.second;
    }
};

int main()
{
    std::ofstream fr("U1rez.txt");
    
   std::string s= "helpmeimastringiwasaboybefore";
   
   std::unordered_map<char, int> dazniai;
   
   for(int i=0; i<s.size(); i++){
       dazniai[s[i]]++;
   }
   
   std::priority_queue<std::pair<char, int>, std::vector<std::pair<char, int>>, compare> pq (dazniai.begin(), dazniai.end());
    
    while(!pq.empty()){
        fr << pq.top().first <<' '<< pq.top().second << '\n' ;
        pq.pop();
    }
    

    return 0;
}
