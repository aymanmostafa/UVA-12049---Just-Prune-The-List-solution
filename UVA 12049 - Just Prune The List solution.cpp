//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();
//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
// 12049 - Just Prune The List
	vector<int> v1;
	vector<int> v2;
	vector<int>::iterator t;
	int tt, a, b, m;
	cin >> tt;
	while (tt--) {
		cin >> a >> b;
		v1.clear();
		v2.clear();
		vector<int> res(20010);
		while (a--) {
			cin >> m;
			v1.push_back(m);
		}
		while (b--) {
			cin >> m;
			v2.push_back(m);
		}
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		t = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(),
				res.begin());
		res.resize(t - res.begin());
		cout << ((v1.size() + v2.size() - 2 * res.size())) << endl;
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
