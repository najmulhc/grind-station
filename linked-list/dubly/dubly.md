# 💻 Doubly Linked List (C++ Edition) - Mastery Checklist

## 📦 Core Setup
- [x] Define a DLL Node struct with `int data`, `Node* prev`, and `Node* next`
- [x] Build a basic DLL manually (create 3–5 nodes and link them)

## 🚶 Traversal (Basics)
- [x] Traverse DLL forward (`while (node != nullptr)`)
- [x] Traverse DLL backward (`while (node != nullptr)` using `prev`)
- [x] Print list in both directions to verify `prev` and `next` pointers

## ➕ Insertion Operations
- [x] Insert node at the head
- [x] Insert node at the tail
- [x] Insert at a given index (0-based or 1-based — your call, but be consistent)
- [ ] Insert before a node with given value
- [ ] Insert after a node with given value

## ➖ Deletion Operations
- [ ] Delete head node
- [ ] Delete tail node
- [ ] Delete node by value
- [ ] Delete node by index
- [ ] Handle edge case: deleting the only node in the list

## 🔁 Reversal
- [ ] Reverse the DLL in-place by swapping `prev` and `next`
- [ ] Traverse in both directions post-reversal to confirm it's correct

## 💡 Practice Problems (Mid-Level)
- [ ] Check if DLL is a palindrome (use two pointers: `head` and `tail`)
- [ ] Remove duplicates from a **sorted** DLL
- [ ] Find the middle of the DLL

## 🧨 Advanced (FAANGy Stuff)
- [ ] Flatten a multilevel DLL (your current goal!)
- [ ] Rotate DLL by `k` positions
- [ ] Merge two sorted DLLs
- [ ] Sort a DLL using insertion sort
- [ ] Clone DLL with random pointers (stretch goal)

## 🧠 Bonus Use-Cases
- [ ] Build a basic LRU Cache (DLL + HashMap)
- [ ] Build a browser forward-backward history system
- [ ] Convert DLL to circular DLL and back

## 🧪 Debugging Essentials
- [ ] Write a `printDLL()` function (forward + reverse)
- [ ] Use valgrind or debug pointer crashes
- [ ] Practice dry runs on paper before coding for clarity
