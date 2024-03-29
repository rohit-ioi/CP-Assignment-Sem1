#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }
    vector<int>temp;
    
    for(int i=0 ; i<n ; i++){
        int sum=0;
    float mini=0 , maxi=0, count=0;
    float avg=0;
    int mode=0;
        temp.push_back(v[i]);
        for(int j=0 ; j<temp.size() ; j++){
            sum+=temp[j];
            count++;
        }
        avg=sum/count;
        sort(temp.begin(), temp.end());
        int max1=0,max2=0;
        set<pair<int, int>> setpair;
        int k=0;
        for(int j=0 ; j<temp.size() ; j++){
            int count2=0;
            for(int ij=j+1; ij<temp.size() ; ij++){
                
                if(temp[j]==temp[ij]){
                    count2++;
                    
                } else {
                    j=ij;
                    break;
                }
            }
            max1=max(count2,max1);
        }
        for(int j=0 ; j<temp.size() ; j++){
            int count2=0;
            for(int ij=j+1; ij<temp.size() ; ij++){
                if(temp[j]==temp[ij]){
                    count2++;
                    
                } else {
                    j=ij;
                    break;
                }
                if(count2==max1){
                    break;
                }
            }
            if(count2==max1){
                mode=temp[j];
                break;
            }
        }

        mini=temp[0];
        maxi=temp[temp.size()-1];
        cout<<"min, max, sum, average and mode after addition of "<<v[i]<<" is "<<mini<<", "<<maxi<<", "<<sum<<", "<<avg<<", "<<mode<<endl;
    }
    
    return 0;
}
