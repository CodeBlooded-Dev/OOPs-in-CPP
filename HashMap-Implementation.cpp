#include <bits/stdc++.h>
using namespace std;

class Hash {
private:
    int size;
    vector<int>* table;
public:
    Hash(int size) {
        this->size = size;
        table = new vector<int>[size];
    }

    int hashFunction(int x) {
        return (x % size);
    }

    void set(int key) {
        int index = hashFunction(key);
        table[index].push_back(key);
    }
    void get(int index) {
        for (auto it : table[index]) {
            cout << it << " ";
        }
    }

    void deleteKey(int key) {
        int index = hashFunction(key);
        vector<int> :: iterator i;
        for (i = table[index].begin(); i != table[index].end(); i++) {
            if (*i == key)
                break;
        }
        if (i != table[index].end())
            table[index].erase(i);
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << i << " ";
            for (auto j : table[i]) {
                cout << j << " ";
            }
            cout << endl;
        }
    }


};



int main() {
    int n;
    cin >> n;
    int arr[n];
    Hash h(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        h.set(arr[i]);
    }
    h.deleteKey(11);
    h.display();
    return 0;
}