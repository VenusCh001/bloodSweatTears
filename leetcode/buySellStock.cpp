#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy_index=-1;
        int sell_index=-1;
        int buyPrice=1e6;
        int sellPrice=-2;
        for(int i=0;i<n;i++){
            if(buyPrice>prices[i]){
                buyPrice=prices[i];
                buy_index=i;
            }
        }
        for(int j=buy_index+1;j<n;j++){
            if(sellPrice<prices[j]){
                sellPrice=prices[j];
                sell_index=j;
            }
        }
        cout<<" buy price"<<buyPrice<<endl;
        if(buy_index==-1){
            return 0;
        }
        else{
            return sellPrice-buyPrice;
        }
    }
int main(){
    vector<int> prices={7,6,4,3,2,1};
    cout<<maxProfit(prices);
    return 0;
}