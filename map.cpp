
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main78()
{

	map<string, int> mp;


	mp["India","Delhi"] = 1;
	mp["India","pune"] = 2;
	mp["India","mumbai"] = 3;

	
	map<string, int>::iterator it = mp.begin();


	while (it != mp.end()) {
		cout << "Key: " << it->first
			<< ", Value: " << it->second << endl;
		++it;
	}

	return 0;
}

