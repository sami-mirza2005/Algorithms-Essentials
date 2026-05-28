#include<bits/stdc++.h>
using namespace std;

// একটি Node স্ট্রাকচার যেখানে data আর next থাকে
struct Node {
    int data;
    Node *next;
};

// head → শুরু, tail → শেষ
Node *head = NULL;
Node *tail = NULL;

// শেষে মান যোগ করার ফাংশন
void InsertAtTail(int x) {
    Node *temp = new Node();
    temp->data = x;     // ডাটা সেট করা হচ্ছে
    temp->next = NULL;  // পরেরটা NULL

    if(head == NULL) {
        head = tail = temp;  // প্রথম নোড
    } else {
        tail->next = temp;   // টেইলের পর নতুন নোড
        tail = temp;         // টেইল আপডেট
    }
    cout << x << " ........is added at tail" << endl;
}

// সামনে মান যোগ করার ফাংশন
void InsertAtHead(int x) {
    Node *temp = new Node();
    temp->data = x;     // ডাটা সেট করা হচ্ছে
    temp->next = NULL;  // পরে আপডেট হবে

    if(head == NULL) {
        head = tail = temp;  // প্রথম নোড
    } else {
        temp->next = head;   // নতুন নোডের পর head
        head = temp;         // হেড আপডেট
    }
    cout << x << " ........is added at head" << endl;
}

// লিস্ট প্রিন্ট করার ফাংশন
void traverse() {
    Node *temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// প্রোগ্রামের মূল অংশ
int main() {
    InsertAtTail(10);
    InsertAtTail(15);
    InsertAtTail(20);
    traverse();  // 10 15 20

    InsertAtTail(40);
    traverse();  // 10 15 20 40

    InsertAtHead(5);
    traverse();  // 5 10 15 20 40

    return 0;
}

