#include <bits/stdc++.h>
using namespace std;
void removeRepeatsMoreThan3(std::list<int>& myList) {
    std::unordered_map<int, int> countMap;

    // Count occurrences of each element
    for (int value : myList) {
        countMap[value]++;
    }

    // Remove elements occurring more than 3 times
    auto it = myList.begin();
    while (it != myList.end()) {
        if (countMap[*it] >= 3) {
            it = myList.erase(it);
        } else {
            ++it;
        }
    }
}
int main(){
    long long int N,K,count = 0;
    int V,temp = 0;
    list<int> store;
    list<int> storeedit;
    cin>>N>>K>>V;
    int numcolour[N];
    for (int i =0; i<N; i++){
        cin>>numcolour[i];
        store.push_back(numcolour[i]);
    }
    list<int>::iterator it = store.begin();
    advance(it, K);
    store.insert(it, V);
    removeRepeatsMoreThan3(store);
    for (auto& iooo : store){
        cout<<iooo<<" ";
    }
}