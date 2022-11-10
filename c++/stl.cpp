#include <iostream>
#include <stack>
#include <queue>
#include <forward_list>
#include <array>
#include <vector>
// #define STACK_CODE
// #define QUEUE_CODE
// #define PRIORITYQUEUE_CODE
// #define FORWARD_LIST
// #define ARRAY_CODE
// #define DEQUE_CODE
#define VECTOR_CODE
int main()
{
// talk is cheap.
#ifdef STACK_CODE
    // LIFO
    std::stack<int> numberStack;
    numberStack.push(11);
    numberStack.push(22);
    numberStack.push(33);
    numberStack.push(44);
    numberStack.push(55);
    // now: 55 44 33 22 11
    numberStack.pop();
    numberStack.pop();
    // 33 22 11
    int tmp = numberStack.top();
    // tmp 33;
    while (!numberStack.empty())
    {
        std::cout << numberStack.top() << " ";
        numberStack.pop();
    }
    std::cout << std::endl;
    // output: 33 22 11
    std::cout << numberStack.size() << "\n";
    // output: 0
    numberStack.emplace(77);
    // 77
    std::stack<int>().swap(numberStack);
    std::cout << numberStack.size() << "\n";
    // output: 0
    std::stack<int> numberS1;
    numberS1.push(123);
    numberS1.push(988);
    numberS1.swap(numberStack);
    std::cout << numberStack.size() << "\n";
    // output: 2
    std::cout << numberS1.size() << "\n";
    // output: 0
    std::stack<int> numberS2(numberStack);
    std::cout << numberS2.size() << "\n";
#endif
#ifdef QUEUE_CODE
    // FIFO
    std::queue<int> gquiz;
    gquiz.push(11);
    gquiz.push(22);
    gquiz.push(33);
    // gquiz: 11 22 33
    std::cout << gquiz.size() << std::endl;
    // output 3
    std::cout << gquiz.front() << std::endl;
    // output 11
    std::cout << gquiz.back() << std::endl;
    // output 33
    gquiz.pop()
    // gquiz 22 33
    //  also  swap
#endif
#ifdef PRIORITYQUEUE_CODE
        // queue with fixed order.
        std::priority_queue<int>
            gquiz;
    gquiz.push(11);
    gquiz.push(6);
    gquiz.push(22);
    gquiz.push(7);
    // gquiz: 22 11 7 6
    while (!gquiz.empty())
    {
        std::cout << gquiz.top() << " ";
        gquiz.pop();
        /* code */
    }
    std::cout << std::endl;
    // output 22 11 7 6
    std::priority_queue<int, std::vector<int>, std::greater<int>> mingquiz;
    mingquiz.push(11);
    mingquiz.push(6);
    mingquiz.push(22);
    mingquiz.push(7);
    // mingquiz: 6 7 11 22

    while (!mingquiz.empty())
    {
        std::cout << mingquiz.top() << " ";
        mingquiz.pop();
        /* code */
    }
    std::cout << std::endl;
    int arr[] = {1, 2, 3};
    std::priority_queue<int> pq1(arr, arr + 3); // creating priority queue using array
    // pq1 3 2 1 ;
#endif
#ifdef FORWARD_LIST
    std::forward_list<int> flist1;
    flist1.assign({1, 2, 3});
    // flist1 : 1 2 3
    std::forward_list<int> flist2;
    flist2.assign(4, 8);
    // flist2 : 8 8 8 8
    std::forward_list<int> flist3;
    flist3.assign(flist1.begin(), flist1.end());
    // flist3 : 1 2 3
    flist1.push_front(60);
    flist1.emplace_front(70);
    // flist1 : 70 60 1 2 3
    flist1.pop_front();
    // flist1 : 60 1 2 3
    std::forward_list<int> flist4 = {10, 20, 30, 25, 40, 40};
    flist4.remove(40);
    // flist4:  10, 20, 30, 25
    flist4.remove_if([](int x)
                     { return x > 20; });
    // flist4: 10 20
    flist4.clear();
    // flist4 : no element now;
    std::forward_list<int> flist5 = {777, 999};
    flist5.splice_after(flist5.begin(), flist3);
    // flist5: 777 1 2 3 999
    flist5.reverse();
    // flist5: 999 3 2 1 777
    flist5.insert_after(flist5.begin(), {1, 2, 3, 4});
    // flist5 999 1 2 3 4 3 2 1 777
    flist5.emplace_after(flist5.begin(), 2);
    // flist5 999 2  1 2 3 4 3 2 1 777
    //  for(auto p:flist5){
    //      std::cout<<p<<" ";
    //  }
    std::cout << flist5.front() << " " << flist5.;

    flist5.erase_after(flist5.begin(), flist5.end());
    // flist5: 999
    // for (auto p : flist5)
    // {
    //     std::cout << p << " ";
    // }

#endif
#ifdef ARRAY_CODE
    // useful than c-style array
    std::array<int, 6> ar = {1, 2, 3, 4, 5, 6};
    std::cout << ar.at(1) << " ";
    // output: 2
    std::cout << std::get<0>(ar) << " "; // from tuple
    // output: 1
    std::cout << ar[2] << " " << std::endl;
    // output: 3
    std::cout << ar.size() << " " << ar.front() << " " << ar.back() << std::endl;
    // max_size == size
    std::array<int, 6> ar2 = {11, 21, 31, 41, 15, 61};
    ar2.swap(ar);
    std::array<int, 6> ar3;
    std::array<int, 0> ar4;
    ar3.empty() ? std::cout << " empyt" : std::cout << "no empty";
    ar4.empty() ? std::cout << " empyt" : std::cout << "no empty";
    // ar3 no empyt  size :6  ar4 empy size 0
    std::cout << std::endl;
    for (auto num : ar3)
    {
        std::cout << num << " ";
    }
    // random value
    std::cout << std::endl;
    ar3.fill(1);
    for (auto num : ar3)
    {
        std::cout << num << " ";
    }
    // all one

#endif
#ifdef DEQUE_CODE
    // double end queue;like vector,but have can pop/push for both front and back;
    std::deque<int> gquiz;
    gquiz.push_back(10);
    gquiz.push_back(11);
    gquiz.push_back(12);
    gquiz.push_back(13);
    gquiz.push_back(14);
    // gquiz: 10 11 12 13 14
    std::cout << "size: " << gquiz.size() << " max_size: " << gquiz.max_size() << std::endl;
    //
    std::cout << gquiz[0] << " " << gquiz.at(1) << " " << gquiz.front() << " " << gquiz.back() << "\n";
    // output: 10 11 10 14
    gquiz.pop_back();
    gquiz.pop_front();
    // gquiz: 11 12 13
    for (auto num : gquiz)
    {
        std::cout << num << " ";
    }
    std::cout << "\n";
    gquiz.insert(gquiz.begin(), 10);
    // 10 11 12 13
    gquiz.insert(++gquiz.begin(), 2, 0);
    // 10 0 0 11 12 13
    std::vector<int> v(3, 9);
    gquiz.insert(gquiz.begin(), v.begin(), v.end());
    gquiz.push_front(100);
    std::deque<int>().swap(gquiz);
    // std::cout<<gquiz.at(1);//错误下标访问就会报错。
#endif
#ifdef VECTOR_CODE
#endif

    return 0;
}