#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false); //
    cin.tie(NULL);

    int n, input;
    cin >> n;
    priority_queue<int, vector<int>, greater<>> pq; //우선순위 큐 선언
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) { //반복하면서
            cin >> input;
            pq.push(input); //입력받은 값을 우선순위큐에 푸시해준다.
            if (pq.size() > n) { //우선순위 큐에 들은 원소의 개수가 n보다 크면
                pq.pop(); //pop해준다
            }
        }
    }
    cout << pq.top() << '\n'; //n번째로 큰 수를 출력한다.

    return 0;
}