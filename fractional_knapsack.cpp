#include<bits/stdc++.h>
using namespace std;

struct Item {
    int value, weight;
};

bool cmp(Item a, Item b) {
    return (double)a.value/a.weight > (double)b.value/b.weight;
}

double fractionalKnapsack(int W, Item items[], int n) {
    sort(items, items+n, cmp);
    double totalValue = 0.0;
    for(int i = 0; i < n; i++) {
        if(W >= items[i].weight) {
            W -= items[i].weight;
            totalValue += items[i].value;
        } else {
            totalValue += items[i].value * ((double)W / items[i].weight);
            break;
        }
    }
    return totalValue;
}

int main() {
    Item items[] = {{60,10},{100,20},{120,30}};
    int W = 50, n = 3;
    cout << "Max value: " << fractionalKnapsack(W, items, n);
    return 0;
}
