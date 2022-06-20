#include<iostream>
#include<vector>
// #include<utility>
using namespace std;

int main(){
    vector<pair<int,int> > arr;
    int temp,temp1;
    for(int i = 0; i<5;i++){
        cin>>temp>>temp1;
        arr.push_back(make_pair(temp,temp1));
    }

    sort(arr.begin(),arr.end());
    // for(int i = 0; i<arr.size();i++){
    //     cout<<arr[i].first<<" "<<arr[i].second<<"\n";
    // }
    pair<int,int> p;
    vector<pair<int,int> > res;

    p.first = arr[0].first;
    p.second = arr[0].second;
    

    for(int i = 1; i<arr.size();i++){
        if(p.second >= arr[i].first){
            // p = make_pair(arr[i].first,arr[i].second);
            p = (make_pair((p.first),max(p.second,arr[i].second)));
            
        }
        else{
            res.push_back(p);
            p = make_pair(arr[i].first,arr[i].second);

        }

    }
    res.push_back(p);

    for(int i = 0; i<res.size();i++){
        cout<<res[i].first<<" "<<res[i].second<<"\n";
    }

    return 0;

}