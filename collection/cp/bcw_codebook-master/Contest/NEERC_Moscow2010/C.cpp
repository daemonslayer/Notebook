#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
#define FZ(n) memset((n),0,sizeof(n))
#define FMO(n) memset((n),-1,sizeof(n))
#define F first
#define S second
#define PB push_back
#define ALL(x) begin(x),end(x)
#define SZ(x) ((int)(x).size())
#define IOS ios_base::sync_with_stdio(0); cin.tie(0)
#define REP(i,x) for (int i=0; i<(x); i++)
#define REP1(i,a,b) for (int i=(a); i<=(b); i++)
#ifdef ONLINE_JUDGE
#define FILEIO(name) \
    freopen(name".in", "r", stdin); \
    freopen(name".out", "w", stdout);
#else
#define FILEIO(name)
#endif
template<typename A, typename B>
ostream& operator <<(ostream &s, const pair<A,B> &p) {
    return s<<"("<<p.first<<","<<p.second<<")";
}
template<typename T>
ostream& operator <<(ostream &s, const vector<T> &c) {
    s<<"[ ";
    for (auto it : c) s << it << " ";
    s<<"]";
    return s;
}
// Let's Fight!


int N,ip[12],app[105];

bool check(int i) {
	FZ(app);
	REP1(j,0,i) {
		double a = j * 100.0 / i;
		int p = a+0.5;
		app[p] = 1;
	}
	int ok = 1;
	REP(j,N) {
		if (!app[ip[j]]) {
			ok = 0;
		}
	}
	return ok;
}
int main() {
	IOS;
	cin >> N;
	REP(i,N) cin >> ip[i];
	int ans = 0;
	REP1(i,1,100) {
		if (check(i)) {
			ans = i;
			break;
		}
	}
	assert(ans != 0);
	cout << ans << endl;

	return 0;
}
