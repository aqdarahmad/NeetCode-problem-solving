/*

5
2 7 3 4 9
[1,2]F
*/
// minimum element greate than or equal target = binary search


int mybs(int tar , vector<int>&v)
{
int l =0, r= v.size()-1;
while(l<=r)
{
    int mid = l +(r-1)/2;
    if(v[mid] >= tar)
    r=mid-1;
    else
    l=mid+1;
}
return l;
}


void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &i:v) cin>>i;
    for(int i=0;i<n;i++)
   v[i]+= v[i-1];
   int q;cin>>q;
    while(q--)
    {
         int tar;cin>>tar;
         cout<<mybs(tar,v)+1<<endl;
    }
}

