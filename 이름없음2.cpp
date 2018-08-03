#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> >a,
			 pair<string, pair<int, int> > b)
			 {
			 	if(a.second.first == b.second.first)
			 		return a.second.second > b.second.second; //점수가같으면 나이어린사람 우선
				else
					return a.second.first > b.second.first;
					 
			 }

int main(void){
	vector<pair<string, pair<int, int> > > v;
	v.push_back(pair<string, pair<int, int> >("가나다", make_pair(90, 19960111)));
	v.push_back(pair<string, pair<int, int> >("마바사", make_pair(88, 19950222)));
	v.push_back(pair<string, pair<int, int> >("아자차", make_pair(71, 19960312)));
	v.push_back(pair<string, pair<int, int> >("카타파", make_pair(85, 19970413)));
	v.push_back(pair<string, pair<int, int> >("라하가", make_pair(85, 19950413)));
	sort(v.begin(), v.end(), compare);
	for(int i =0; i<v.size(); i++)
	{
		cout<<v[i].first<< ' ';
	}
	return 0;
	}
