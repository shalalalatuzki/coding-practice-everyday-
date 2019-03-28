# coding-practice-everyday-
数据结构与算法学习，为了提高编程能力，刻意练习一些经典数据结构与算法题，每道题会总结题解和一些优秀的代码，题解出C++版本和python版本。
## 数组与链表
### 寻找数组中最小的两个元素
最简单的算法是将数组排序，然后输出最小的两个元素算法最快为nlog(n)
有一个高效的算法是使用两个数存储最小元素，遍历一次，在遍历过程中更新它
1) Initialize both first and second smallest as INT_MAX
   first = second = INT_MAX
2) Loop through all the elements.
  
  a) If the current element is smaller than first, then update first 
       and second. 
   
  b) Else if the current element is smaller than second then update 
    second
  
  详情查看网址：https://www.geeksforgeeks.org/to-find-smallest-and-second-smallest-element-in-an-array/
  
  C++版题解在ArrayAndLinkedList文件夹下
  python版题解在y_ArrayAndLinkedList文件夹下
