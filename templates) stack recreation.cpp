#include <bits/stdc++.h>


template <typename T>
struct mystack {
	private:
	std::vector<T> elements;

	public:
	void push(T a) {
		elements.push_back(a);
	}

	T top() {
		return elements.back();
	}

	void pop() {
		elements.pop_back();
	}

	bool isempty() {
		if(elements.size() == 0) return 1;
		return 0;
	}

	int size() {
		return elements.size();
	}

	void clear() {
		elements.clear();
	}

};




int main()
{
	std::ifstream fd("U1.txt");
	std::ofstream fr("U1rez.txt");

	mystack<int> s;

	int temp;
	while(fd >> temp) {
		s.push(temp);
	}

	double naujas = 2.5;
	s.push(static_cast<int>(naujas));
	
	fr << s.top();


	return 0;
}
