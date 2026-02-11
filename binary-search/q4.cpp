/*
majic power
*/

bool canCook(int neededcookie , vector<int>&had , vector<int>&needed,int k)
{
   for(int i=0;i<had.size();i++)
   {
       if(had[i] >= neededcookie * needed[i])
        continue;
      else if(had[i]+k >= needed[i]*neededcookie)
      {
            k-=(neededcookie*needed[i] - had[i]);
            }
            else
            return false;
      }
      return true;

   }

void solve()
{
    int n , k;
    cin>>n>>k;
    vector<int>had(n),needed(n);
    for(int &i:had) 
    cin>>i;
    for(int &i:needed)
    cin>>i;
    int ans = 0;
    for(int i=0;i<=2000;i++)
    {
        if(canCook(i , had , needed , k))
        {
            ans=i;
        }
        else
        break;
    }
        cout<<ans<<endl;

}