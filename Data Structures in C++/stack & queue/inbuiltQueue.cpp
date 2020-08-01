#include<iostream>
using namespace std;
#include<queue>

int main() {
    
    queue<int> q;
    
    int choice;
    cin >> choice;
    int input;
    
    while (choice !=-1) {
        if(choice == 1) {
            cin >> input;
            q.push(input);
        }
        else if(choice == 2) {
            int ans = q.front(); 
			q.pop();
            if(ans != 0) {
                cout << ans << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if(choice == 3) {
            int ans = q.front();
            if(ans != 0) {
                cout << ans << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if(choice == 4) {
            cout << q.size() << endl;
        }
        else if(choice == 5) {
            cout << q.empty() << endl;
        }
        cin >> choice;
    }
    
}
