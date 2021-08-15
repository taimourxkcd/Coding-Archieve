// C++ implementation of LRU page replacement in Operating Systems. 

#include <string>
#include <iostream>
#include<vector>
using namespace std;



void pageFaults(int frame_size, int* ref, int len, int ctime)
{
	int cnt = 0;
	vector<int> arr;
	for (int i = 0; i < frame_size; i++) {
		arr.push_back(make_pair(-1, ctime));
	}

	int page;

	for (int i = 0; i < len; i++) {
		page = ref[i];
		auto it = arr.begin();

		for (it = arr.begin(); it != arr.end(); it++) {
			if (it->first == page) {
				break;
			}
		}

		if (it != arr.end()) {
			it->second = ctime;
		}

		else {
			vector > ::iterator pos;
			pos = arr.begin();
			int min = pos->second;
			for (auto itr = arr.begin(); itr != arr.end(); itr++) {
				if (itr->second < min) {
					pos = itr;
					min = pos->second;
				}
			}
			arr.erase(pos);
			arr.push_back(make_pair(page, ctime));
			cnt++;
		}
		ctime++;
	}
	cout << "The number of page faults is : " << cnt << endl;
}


int
main()
{

	int pages[] = { 7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2 };

	int n = sizeof(pages) / sizeof(pages[0]);

	int capacity = 2;

	cout << "Algorithm = LRU \n";
	cout << "Number of Frames: ";
	cout << capacity;
	cout << "\nReferece Pages = ";
	cout << "{";
	for (int i = 0; i < n; i++)
	{
		cout << pages[i];  cout << ", ";
	}
	cout << "}\n";

	int ctime = 0;
	pageFaults(capacity, pages, n, ctime);

	return 0;

}

