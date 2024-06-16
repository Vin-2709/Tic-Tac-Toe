#include <iostream>
#include<vector>
#include <unordered_map>
#include <string>
#include<queue>

using namespace std;

struct Node {
char data;
int freq;
Node* left;
Node* right;
    Node(char d, int f) : data(d), freq(f), left(nullptr), right(nullptr) {}
    };
        struct Compare {
        bool operator()(Node* a, Node* b) {
        return a->freq > b->freq;
    }
    };
    void encode(Node* root, string str, unordered_map<char, string>& huffmanCode) {
        if (!root)
        return;
        if (!root->left && !root->right) {
        huffmanCode[root->data] = str;
    }
encode(root->left, str + "0", huffmanCode);
encode(root->right, str + "1", huffmanCode);
}               
void huffmanCodes(string text) {
unordered_map<char, int> freq;
for (char ch : text) {
    freq[ch]++;
    }
priority_queue<Node*, vector<Node*>, Compare> pq;
for (auto pair : freq) {
    pq.push(new Node(pair.first, pair.second));
}
while (pq.size() != 1) {
Node* left = pq.top();
        pq.pop();
        Node* right = pq.top();
        pq.pop();
        int sum = left->freq + right->freq;
        Node* newNode = new Node('$', sum);
        newNode->left = left;
        newNode->right = right;
        pq.push(newNode);
    }
 Node* root = pq.top();
        unordered_map<char, string> huffmanCode;
        encode(root, "", huffmanCode);
        cout << "Huffman Codes are:" << endl;
        for (auto pair : huffmanCode) {
        cout << pair.first << " : " << pair.second << endl;
    }
    delete root;
    }
    int main() {
        string text = "Huffman coding is a data compression algorithm.";
        huffmanCodes(text);
    return 0;
    }