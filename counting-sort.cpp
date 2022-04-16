#include <iostream> 
#include <vector>

const int ELEMENT_RANGE = 40;
const int LENGTH = 90;

void countingSort(std::vector<std::pair<int, int>>& v) {
	std::vector<std::pair<int, int>> res;
	std::vector<int> buff;

	res.resize(v.size(), { 0, 0 });
	buff.resize(ELEMENT_RANGE, 0);

	for (int i = 0; i < v.size(); i++)
		buff[v[i].first]++;

	for (int i = 1; i < ELEMENT_RANGE; i++)
		buff[i] += buff[i - 1];

	for (int i = v.size() - 1; i > -1; --i) {
		res[buff[v[i].first] - 1] = v[i];
		buff[v[i].first]--;
	}

	v = std::move(res);
}

int main() {
	std::vector<std::pair<int, int>> v;

	srand(time(NULL));

	for (int i = 0; i < LENGTH; i++)
		v.push_back(std::make_pair(rand() % ELEMENT_RANGE, i));

	countingSort(v);

	for (const std::pair<int, int>& kv : v)
		std::cout << "<" << kv.first << "," << kv.second << ">\n";
}
