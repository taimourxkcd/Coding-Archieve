#include<string>
#include<iostream>
#include<list>

using namespace std;

struct YouTubeChannel {
	string Name;
	int SubscribersCount;

	YouTubeChannel(string name, int subscribersCount) {

		Name = name;
		SubscribersCount = subscribersCount;
	}

	bool operator==(const YouTubeChannel&channel) const{
		return this->Name == channel.Name;
	}
};

#if 0



// NOTE: this was when we only had a single object in cout statement 
void operator<<(ostream& COUT, YouTubeChannel& ytChannel) {
	COUT << "Name: " << ytChannel.Name << endl;
	COUT << "SSubscribers: " << ytChannel.SubscribersCount << endl;
}
#endif

 
// NOTE: this was when we only had a single object in cout statement 
ostream& operator<<(ostream& COUT, YouTubeChannel& ytChannel) {
	COUT << "Name: " << ytChannel.Name << endl;
	COUT << "SSubscribers: " << ytChannel.SubscribersCount << endl;
	return COUT;
}

struct MyCollection {
	list<YouTubeChannel>myChannels;

	void operator+=(YouTubeChannel& channel) {
		this->myChannels.push_back(channel);
	}
	
	void operator-=(YouTubeChannel& channel) {
		this->myChannels.push_back(channel);
		this->myChannels.remove(channel);
	}
};

ostream& operator<<(ostream& COUT, MyCollection& myCollection) {
	for (YouTubeChannel ytChannel : myCollection.myChannels)
		COUT << ytChannel << endl;
	return COUT;
}


int main() {

	YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000);
	YouTubeChannel yt2 = YouTubeChannel("2nd Channel", 80000);
	MyCollection myCollection;
	myCollection += yt1;
	myCollection += yt2;
	myCollection -= yt2;
	cout << myCollection;


	//cout << yt1<<yt2;
//	operator<<(cout, yt1); // this is not really common the one above this is really common

	
}