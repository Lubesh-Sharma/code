#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> q = {1, 3};
    cout << q.first << " " << q.second;

    pair<int, pair<int, int>> p = {1, {3, 4}};
    cout << p.first << " " << p.second.first << " " << p.second.first;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second;

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v0{5, 100};

    vector<int> v1{5, 20};
    vector<int> v2(v1);

    cout << v[0] << " " << v.at(0);
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << "";

    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();

    cout << v.back() << " ";

    for (vector<int>::iterator it = v.begin(); it != v.end; it++)
    {
        cout << *(it) << " ";
    }
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    for (auto it : v)
    {
        cout << it << " ";
    }

    v.erase(v.begin() + 1);
    v1.erase(v1.begin() + 2, v1.begin() + 4);

    vector<int> v(2, 100);
    v.insert(v.begin(), 300);
    v.insert(v.begin() + 1, 2, 10);

    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end());

    cout << v.size();
    v.pop_back();
    v1.swap(v2);
    v.clear();
    cout << v.empty();
}

void explainList()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(2);
    ls.push_front(5);
    ls.emplace_front();
    // rest same as Vector
}
void explainDeque()
{
    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(2);
    dq.push_front(5);
    dq.emplace_front();

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();
    // rest same as Vector
}
void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);    //{3,2,1}
    st.emplace(5); //{5,3,2,1}

    cout << st.top();
    st.pop();
    cout << st.top();
    cout << st.size();
    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}
void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);    //{1,2,3}
    q.emplace(5); //{1,2,3,5}

    q.back() += 5;

    cout << q.back();
    cout << q.front();
    q.pop();
    cout << q.front();
}
void explainPriorityQueue()
{
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);     //{8,5,2}
    pq.emplace(10); //{10,5,8,2}

    cout << pq.top(); // 10
    pq.pop();         // 8,5,2
    cout << pq.top(); // 8
    // minimum at top
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);     //{2,5,8}
    pq.emplace(10); //{2,5,8,10}

    cout << pq.top(); // 2
}