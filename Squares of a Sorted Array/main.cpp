/*BY::Cebastian Santiago
* Leetcode 997
*/
#include<iostream>
#include<vector>
#include<algorithm>

std::vector<int> sortedSquares(std::vector<int>& nums) {
	//variables 
	std::vector<int> temp;
	int count = 0;

	//loop through the vector and times it by itself
	for (auto i : nums){
		count = i * i;
		temp.push_back(count);
	}
	std::sort(temp.begin(), temp.end());
	return temp;
}

int main(int argc, char* argv[]) {
	std::vector<int> num = { -4,-1,0,3,10 };

	std::vector<int>count = sortedSquares(num);

	for (auto i : count){
		std::cout << i << std::endl;
	}
	return 0;
}