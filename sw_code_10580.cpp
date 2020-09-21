#include<iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, N, first,second, answer;

    cin>>T;
	
	for(test_case = 1; test_case <= T; ++test_case)
	{
        vector<pair<int,int>> v;
        answer = 0;
		cin >> N;
        
		for(int i = 0 ; i < N ; i++){
        	cin >> first  >> second ;
        	v.push_back({first,second});
        }
        for(int i = 0 ; i < v.size() ; i++){
            for(int j = i+1 ; j < v.size() ; j++){
                if(v[i].first > v[j].first && v[i].second < v[j].second)
                    answer++;
                else if(v[i].first < v[j].first && v[i].second > v[j].second)
                    answer++;
            }
        } 
        cout << "#" << test_case << " " << answer <<endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}