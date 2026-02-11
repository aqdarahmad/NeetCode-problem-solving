/*

graph : set of nodes and edges 
why graph is used : facebook , cities , computer network , companies hierarchy
// grid or table 
// طبيعه العلاقات بينهم تختلف باختلاف التعامل مع الاشي

 adjestency matrix بطريقه ما ارسم العلاقه بين كل عنصر 

 
  1 2 3

1 0 5 0

2 0 0 9

3 0 0 0

array => x

a[2][1] -> true

a[3][1]-> 

a[2][3] o(1)

problem with memory الاصفار مكرره وويست سبيس 
how to solve space problem ? 
---------------------------------------------------------------------
adjacency list

1->2
2->3,1
3->2
vector<vector<int>>v(node+1);

----------------------------
Edge list ,bad time 
vector<pair<int,int>>v;
[{1,2},{2,3}]

// لو عندي جراف كلها ادجز شو افضل داتا ستركشر
// 5 5 
nodes value

*/

void solve()
{
    int n, e;
    cin >> n >> e;

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < e; i++)
    {
        int u, to;
        cin >> u >> to;
        adj[u].push_back(to);
        adj[to].push_back(u);
    }

    int ans = 0;
    int ansnode = -1;

    for (int j = 1; j <= n; j++)
    {
        if ((int)adj[j].size() > ans)
        {
            ans = adj[j].size();
            ansnode = j;
        }
    }

   
    // cout << ansnode << " " << ans << endl;
}
