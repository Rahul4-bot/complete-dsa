#include<iostream>
using namespace std;

int maxProfit(int* prices, int pricesSize) {
    int min=prices[0];
    for(int i=0;i<pricesSize;i++){
        if(prices[i]<min){
            min=prices[i];
        }
        
    }
    
    
}