#include <bits/stdc++.h>

int postfix(std::string a) {
	std::stack<int> s;

	for(int i=0; i<a.size(); i++) {
		if(isdigit(a[i])) {
			s.push(a[i]-'0');
		}
		else {
			int p1=s.top();
			s.pop();
			int p2=s.top();
			s.pop();
			if(a[i] == '*')s.push(p1*p2);
			if(a[i] == '/')s.push(p2/p1);
			if(a[i] == '-')s.push(p2-p1);
			if(a[i] == '+')s.push(p1+p2);
		}

	}


	return s.top();
}

int main()
{
	std::ofstream fr("rez.txt");

	std::string a = "23*54*+9-";

	fr << postfix(a);


	return 0;
}
