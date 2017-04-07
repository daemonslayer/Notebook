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

struct Bigint{
  static const int BIGMOD = 10000;

  int s;
  vector<int> v;
  Bigint() : s(1) {}
  Bigint(long long a) {
    s = 1;
    if (a < 0) { s = -1; a = -a; }
    while (a) {
      push_back(a % BIGMOD);
      a /= BIGMOD;
    }
  }
  Bigint(string str) {
    s = 1;
    int stPos = 0, num = 0;
    if (!str.empty() && str[0] == '-') {
      stPos = 1;
      s = -1;
    }
    for (int i=SZ(str)-1, q=1; i>=stPos; i--) {
      num += (str[i] - '0') * q;
      if ((q *= 10) >= BIGMOD) {
        push_back(num);
        num = 0; q = 1;
      }
    }
    if (num) push_back(num);
  }

  int len() const {
	  return SZ(v);
  }
  bool empty() const { return len() == 0; }
  void push_back(int x) {
	  v.PB(x);
  }
  void pop_back() {
	  v.pop_back();
  }
  int back() const {
	  return v.back();
  }
  void n() {
    while (!empty() && !back()) pop_back();
  }
  void resize(int nl) {
	  v.resize(nl);
	  fill(ALL(v), 0);
  }

  void print() const {
    if (empty()) { putchar('0'); return; }
    if (s == -1) putchar('-');
    printf("%d", back());
    for (int i=len()-2; i>=0; i--) printf("%.4d",v[i]);
  }
  friend std::ostream& operator << (std::ostream& out, const Bigint &a) {
    if (a.empty()) { out << "0"; return out; } 
    if (a.s == -1) out << "-";
    out << a.back();
    for (int i=a.len()-2; i>=0; i--) {
      char str[10];
      snprintf(str, 5, "%.4d", a.v[i]);
      out << str;
    }
    return out;
  }

  int cp3(const Bigint &b)const {
    if (s != b.s) return s > b.s ? 1 : -1;
    if (s == -1) return -(-*this).cp3(-b);
    if (len() != b.len()) return len()>b.len()?1:-1;
    for (int i=len()-1; i>=0; i--)
      if (v[i]!=b.v[i]) return v[i]>b.v[i]?1:-1;
    return 0;
  }
  bool operator < (const Bigint &b)const{ return cp3(b)==-1; }
  bool operator <= (const Bigint &b)const{ return cp3(b)<=0; }
  bool operator == (const Bigint &b)const{ return cp3(b)==0; }
  bool operator != (const Bigint &b)const{ return cp3(b)!=0; }
  bool operator > (const Bigint &b)const{ return cp3(b)==1; }
  bool operator >= (const Bigint &b)const{ return cp3(b)>=0; }

  Bigint operator - () const {
    Bigint r = (*this);
    r.s = -r.s;
    return r;
  }
  Bigint operator + (const Bigint &b) const {
    if (s == -1) return -(-(*this)+(-b));
    if (b.s == -1) return (*this)-(-b);
    Bigint r;
    int nl = max(len(), b.len());
    r.resize(nl + 1);
    for (int i=0; i<nl; i++) {
      if (i < len()) r.v[i] += v[i];
      if (i < b.len()) r.v[i] += b.v[i];
      if(r.v[i] >= BIGMOD) {
        r.v[i+1] += r.v[i] / BIGMOD;
        r.v[i] %= BIGMOD;
      }
    }
    r.n();
    return r;
  }
  Bigint operator - (const Bigint &b) const {
    if (s == -1) return -(-(*this)-(-b));
    if (b.s == -1) return (*this)+(-b);
    if ((*this) < b) return -(b-(*this));
    Bigint r;
    r.resize(len());
    for (int i=0; i<len(); i++) {
      r.v[i] += v[i];
      if (i < b.len()) r.v[i] -= b.v[i];
      if (r.v[i] < 0) {
        r.v[i] += BIGMOD;
        r.v[i+1]--;
      }
    }
    r.n();
    return r;
  }
  Bigint operator * (const Bigint &b) {
    Bigint r;
    r.resize(len() + b.len() + 1);
    r.s = s * b.s;
    for (int i=0; i<len(); i++) {
      for (int j=0; j<b.len(); j++) {
        r.v[i+j] += v[i] * b.v[j];
        if(r.v[i+j] >= BIGMOD) {
          r.v[i+j+1] += r.v[i+j] / BIGMOD;
          r.v[i+j] %= BIGMOD;
        }
      }
    }
    r.n();
    return r;
  }
  Bigint operator / (const Bigint &b) {
    Bigint r;
    r.resize(max(1, len()-b.len()+1));
    int oriS = s;
    Bigint b2 = b; // b2 = abs(b)
    s = b2.s = r.s = 1;
    for (int i=r.len()-1; i>=0; i--) {
      int d=0, u=BIGMOD-1;
      while(d<u) {
        int m = (d+u+1)>>1;
        r.v[i] = m;
        if((r*b2) > (*this)) u = m-1;
        else d = m;
      }
      r.v[i] = d;
    }
    s = oriS;
    r.s = s * b.s;
    r.n();
    return r;
  }
  Bigint operator % (const Bigint &b) {
    return (*this)-(*this)/b*b;
  }
};

typedef Bigint ll;

struct Fac {
	ll a, b;
	void reg() {
		ll g = __gcd(a, b);
		a = a / g;
		b = b / g;
	}
};

bool operator < (Fac a, Fac b) {
	return a.a * b.b < b.a * a.b;
}
bool operator <= (Fac a, Fac b) {
	return a.a * b.b <= b.a * a.b;
}
bool operator > (Fac a, Fac b) {
	return a.a * b.b > b.a * a.b;
}
bool operator >= (Fac a, Fac b) {
	return a.a * b.b > b.a * a.b;
}
bool operator == (Fac a, Fac b) {
	return a.a * b.b == b.a * a.b;
}
Fac operator * (Fac a, Fac b) {
	Fac res = {a.a * b.a, a.b * b.b};
//	res.reg();
	return res;
}
Fac rev_fac(Fac x) {
	swap(x.a, x.b);
	return x;
}

int trash;
int N, inq[30], vst[30];
Fac lower[15][15], upper[15][15];
vector<pair<Fac,int>> E[30];
Fac dis[30], ans[30][30];

int main() {
	FILEIO("arbitrage");
	trash = scanf("%d", &N);
	for (int i=0, a, b; i<N; i++) {
		for (int j=0; j<N; j++) {
			trash = scanf("%d/%d", &a, &b);
			lower[i][j] = {a, b};
			trash = scanf("%d/%d", &a, &b);
			upper[i][j] = {a, b};
			E[j].PB({rev_fac(lower[i][j]), i});
			E[i].PB({upper[i][j], j});
		}
		inq[i] = 0;
		vst[i] = 0;
	}

	dis[0] = {1, 1};
	for (int i=1; i<N; i++) {
		dis[i] = {Bigint("100000000000000000000000000000000000000000000000000000000"), 1};
	}
	int fail = 0;
	queue<int> que;
	que.push(0);
	while (!que.empty()) {
		int u = que.front(); que.pop();
		vst[u]++;
//		cout << u << " " << dis[u].a << "/" << dis[u].b << endl;
		if (vst[u] > N+5) {
			fail = 1;
			break;
		}
		inq[u] = 0;
		for (auto it:E[u]) {
			Fac &c = it.F;
			int v = it.S;
			Fac tmp = dis[u] * c;
			if (dis[v] > tmp) {
				dis[v] = tmp;
				if (!inq[v]) {
					inq[v] = 1;
					que.push(v);
				}
			}
		}
	}
	if (fail) {
		puts("Impossible\n");
	} else {
		for (int i=0; i<N; i++) {
			for (int j=0; j<N; j++) {
				Fac x = dis[j];
				Fac y = rev_fac(dis[i]);
				Fac res = x * y;
				res.reg();
				res.a.print();
				putchar('/');
				res.b.print();
				ans[i][j] = res;

				if (j == N-1) puts("");
				else putchar(' ');
			}
		}
		for (int i=0; i<N; i++) {
			for (int j=0; j<N; j++) {
				assert(ans[i][j] == rev_fac(ans[j][i]));
				assert(lower[i][j] <= ans[i][j]);
				assert(ans[i][j] <= upper[i][j]);
			}
		}
	}

    return 0;
}
