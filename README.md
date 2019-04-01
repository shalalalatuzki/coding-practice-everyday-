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
  ## 寻找数组中第一个不重复的元素
  我在解这道题的时候走了一个超级大弯路，掉了list删除元素后，迭代器使用异常的坑（对的我用了链表，我脑阔有包，主要是自己考虑了删除元素用链表省时间一点，我真是脑阔有包，为什么要删这道题没必要删的，强迫症而已）
  
我的思路：

第一层遍历循环

设置一个count用来记录一个元素的重复次数

第二层遍历

如果遇到重复元素删除之

count++

第二层遍历结束后，如果count超过零，者该元素重复，删除之

如果count为零或链表大小为1，输出该元素，并退出循环

我的思路在于多出了删除操作，而且在list库中执行删除操作后程序会发生错误。list的迭代器自增也会报错。主要问题在一是list库的迭代器使用上出错，二是在于思路多了删除操作，对于这道题来说完全冗余。而且顺序遍历完全不需要链表实现，不过好处就是锻炼了list的使用吧。

我的错误解决办法详情见链接https://blog.csdn.net/albertsh/article/details/49952887

我是直接去掉删除操作的，在FindNotReapt文件夹下有两个题解，W_FindNotReapt使用链表记录重复元素，UseHash使用hash表存储每个元素出现的次数，次数出现为1则为不重复元素。

