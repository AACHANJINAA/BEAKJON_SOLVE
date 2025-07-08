#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Player {
	size_t age;
	string name;
};

// -------
int main()
// -------
{
	int n;
	cin >> n;
	vector<Player> v(n);
	for (int i = 0; i < n; ++i) {
		size_t age;
		string name;
		cin >> age >> name;
		v[i].age = age;
		v[i].name = name;
	}

	stable_sort(v.begin(), v.end(), [](const Player& p1, const Player& p2) {
		return p1.age < p2.age;
		});
	
	for (const Player& p : v) {
		cout << p.age << ' ' << p.name << '\n';
	}
}

