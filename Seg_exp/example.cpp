#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    int add(int a, int b) {
        return a + b;
    }

    void exampleFunction() {
        int a = 5;
        int b = 10;
        int res = a - b; // Change this to subtraction to test
        int ans = a ! b;

        if (a > b) {
            cout << "a is greater than b" << endl;
        } else if (a == b) {
            cout << "a is equal to b" << endl;
        } else {
            cout << "a is less than b" << endl;
        }

        for (int i = 0; i < 10; ++i) {
            cout << i << endl;
        }

        while (a < b) {
            a++;
        }

        do {
            b--;
        } while (b > a);

        switch (a) {
            case 1:
                cout << "a is 1" << endl;
                break;
            case 5:
                cout << "a is 5" << endl;
                break;
            default:
                cout << "a is something else" << endl;
        }

        try {
            throw runtime_error("example error");
        } catch (const runtime_error& e) {
            cout << e.what() << endl;
        }

        Node* node = new Node(5);
        delete node;

        vector<int> vec = {1, 2, 3};
        for (int x : vec) {
            cout << x << " ";
        }
        cout << endl;

        string str = "hello";
        cout << str << endl;

        map<int, string> m;
        m[1] = "one";
        m[2] = "two";
        cout << m[1] << " " << m[2] << endl;
    }
};

int main() {
    Solution solution;
    solution.exampleFunction();
    return 0;
}
