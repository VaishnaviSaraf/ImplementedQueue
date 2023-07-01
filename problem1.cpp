#include <bits/stdc++.h>
using namespace std;

#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main()
{
    OJ;
    int n,tar;
    // cout<<"Enter length of array"<<endl;
    cin >> n;
    vector<int> vec(n);
    map<int,int>map1;
    for(unsigned int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
        
    }
    // cout<<"Enter target"<<endl;
    cin>>tar;
    long diff=n,f=0;
    
    for(int i = 0; i < vec.size(); i++){
        if(map1.find(tar-vec[i])!=map1.end()){
            if((i-map1[tar-vec[i]])<diff){
            diff=i-map1[tar-vec[i]];
            f=map1[tar-vec[i]];
            }
        }else{
            map1[vec[i]]=i;
        }
    }
    if(diff!=n){
    cout<<"("<<vec[f]<<","<<vec[f+diff]<<")";
    }else{
        cout<<"Pair does not exists";
    }
    //twosum(vec,tar);//for (auto it : vec)
        //cout << it;
    return 0;
}


