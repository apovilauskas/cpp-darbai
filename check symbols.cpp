#include <bits/stdc++.h>

//check if the symbols used in two strings are the same (order or frequency doesnt matter)

int main()
{
    std::ifstream fd("U1.txt");
    std::ofstream fr("U1rez.txt");
    
    std::string a = "aabbcccd";
    std::string b = "dacb"; //atsakymas turetu buti true nes raides tos pacios

    std::unordered_map<char, bool> ma, mb; //naudojam bool nes kiekis/daznis mum nesvarbu
    for(auto i:a){
        ma[i]=1;
    }
    for(auto i:b){
        mb[i]=1;
    }
    
    fr << std::boolalpha << (mb==ma);

    return 0;
}
