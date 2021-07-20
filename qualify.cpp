#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
typedef struct node 
{
	string name;
	int grade;
}node;
 
vector<node> v[100000+5];
 
bool cmp(node a,node b)
{
	return a.grade > b.grade;
}
 
int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	int n,m,id,i;
	cin >> n >> m;
	for(i=0;i<n;i++)
	{
		node nn;
		cin >> nn.name >> id >> nn.grade;
		v[id].push_back(nn);
	}
	for(i=1;i<=m;i++)
	{
		sort(v[i].begin(),v[i].end(),cmp);
		if(v[i].size()>2 && v[i][1].grade==v[i][2].grade)
			cout << "?" << endl;
		else
			cout << v[i][0].name << " " << v[i][1].name <<  endl;
	}
	return 0;
} 
