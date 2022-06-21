#include<iostream>
#include<map>
#include<iterator>
#include<vector>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> ar;
    for(int i = 0; i<N; i++){
        int a;
        cin>>a;
        ar.push_back(a);
    }

    int K;
    cin>>K;

    map<int,int> m;
    for(int i = 0; i<N; i++){
        m[ar[i]] = N-i;
    }

    map<int,int>::iterator itr;
    int count = 0;

    for(itr = m.begin(); itr!=m.end(); itr++){
        int temp = itr->first;
        int temp_count = 0;

        while(temp<=K){
            if(temp_count<itr->second){
                temp_count++;
            }
            else{
                break;
            }
            // temp += itr->first;
            // itr->second --;
            K -= itr->first;

        }
        count += temp_count;
    }

    cout<<count;
    return 0;
}
