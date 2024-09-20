
#include<bits/stdc++.h>
int solve(int len,int br,vector<Points2D> &points){
    int maxi=INT_MIN;
    for(int lower=0;lower<=20-len;lower++){
        for(int side=0;side<=20-br;side++){
            int cnt=0;
            for(auto &i:points){
                int newX=i.x+10;
                int newY=i.y+10;

                if((newX>=side && newX<=side+br) && (newY>=lower && newY<=lower+len)){
                    cnt++;
                }
            }
            maxi=max(maxi,cnt);
        }
    }
    return maxi;
}




int maxSide=(perimeter/2)-1;
if(perimeter<4) return 0;
int ans=INT_MIN;

for(int len=1;len<=maxSide;len++){
    for(int br=1;br<=(maxSide-len)+1;br++){
        ans=max(ans,solve(len,br,points));
    }
}





vector<int> connections(n,0);

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j]==1){
            connections[i]++;            
        }
    }
}

