#include<bits/stdc++.h>
using namespace std;
int b[1000001];
 
bool sangnguyento() {
    for(int i = 0; i <= 1000001; i++) 
        b[i] = 1;
        b[0] = b[1] =0; 
        for(int i = 2; i <= 1000; i++) { 
            if(b[i]){ 
                for(int j=i*i; j <= 1000000; j+=i) { 
                    b[j]=0; 
                     
                }
            }   
    }   
}
int main(){
    sangnguyento();
    int n;
    cin>>n;
    for(int i=0;i<=n; i++){ 
        if (b[i])
        cout << i << " ";
    }
    return 0;
}
