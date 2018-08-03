#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> >a,
			 pair<string, pair<int, int> > b)
			 {
			 	if(a.second.first == b.second.first)
			 		return a.second.second > b.second.second; //������������ ���̾��� �켱
				else
					return a.second.first > b.second.first;
					 
			 }

int main(void){
	vector<pair<string, pair<int, int> > > v;
	v.push_back(pair<string, pair<int, int> >("������", make_pair(90, 19960111)));
	v.push_back(pair<string, pair<int, int> >("���ٻ�", make_pair(88, 19950222)));
	v.push_back(pair<string, pair<int, int> >("������", make_pair(71, 19960312)));
	v.push_back(pair<string, pair<int, int> >("īŸ��", make_pair(85, 19970413)));
	v.push_back(pair<string, pair<int, int> >("���ϰ�", make_pair(85, 19950413)));
	sort(v.begin(), v.end(), compare);
	for(int i =0; i<v.size(); i++)
	{
		cout<<v[i].first<< ' ';
	}
	return 0;
	}
