#include <iostream>
#include <unordered_set>


using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


ListNode *detectCycle(ListNode *head) {

    ListNode *curr = head;
    unordered_set<ListNode *> my_list;

    while (curr != nullptr)
    {

        if(my_list.count(curr->next)){
                return curr->next;
        } else{
            my_list.insert(curr);
        }
        curr = curr->next;
    }
    

    return nullptr;

}

