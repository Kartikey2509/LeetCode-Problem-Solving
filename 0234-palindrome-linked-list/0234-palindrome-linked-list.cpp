/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    //Reverse a linkedList from half
    ListNode* reverseList(ListNode* head2){
        ListNode* prev = NULL;
        ListNode* curr = head2;
        ListNode* nextt = curr->next;
        while(curr!=NULL){
            curr->next = prev;
            prev = curr;
            curr=nextt;
            if(curr!=NULL){
                nextt=curr->next;
            }
            

        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        ListNode* head2 = NULL;
        int count=0;

        //counting the number of nodes
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        temp = head;
        count = count/2;   //Half the nodes
        int cnt = 0;

        //Call the reverseList from half of nodes
        while(temp!=NULL){
            cnt++;
            if(cnt == count+1){
            head2 = reverseList(temp);
                break;
            }
            temp=temp->next;
        }

        temp = head;
        ListNode* temp2 = head2;

        // compare both list
        while(temp2!=NULL){
            if(temp->val == temp2->val){
                temp2=temp2->next;
                temp=temp->next;
                continue;

            }
            else{
                return false;
            }
        }


        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna