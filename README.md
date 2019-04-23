# coding-practice-everyday-
数据结构与算法学习，为了提高编程能力，刻意练习一些经典数据结构与算法题，每道题会总结题解和一些优秀的代码，题解出C++版本和python版本。
## 寻找数组中最小的两个元素
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

第二层遍历结束后，如果count超过零，或者该元素重复，删除之

如果count为零或链表大小为1，输出该元素，并退出循环

我的思路在于多出了删除操作，而且在list库中执行删除操作后程序会发生错误。list的迭代器自增也会报错。主要问题在一是list库的迭代器使用上出错，二是在于思路多了删除操作，对于这道题来说完全冗余。而且顺序遍历完全不需要链表实现，不过好处就是锻炼了list的使用吧。

我的错误解决办法详情见链接https://blog.csdn.net/albertsh/article/details/49952887

我是直接去掉删除操作的，在FindNotReapt文件夹下有两个题解，W_FindNotReapt使用链表记录重复元素，UseHash使用hash表存储每个元素出现的次数，次数出现为1则为不重复元素。
C++题解在FindNotRepeat文件夹下，
Python题解在py_findNotRepeat文件夹下，在做Python题解的时候注意字典的空key,这里使用了defaultdict。dict和collections.defaultdict的区别:
假如key为'a'不在字典中，访问dict会出现keyError,而defaultdict则返回其默认的类型。这种情况适用于初始化一个空字典然后字典的值会发生变化之类。
## 合并两个排好序的数列
我自己这次直接用了复杂度较小的方法，思路：
创建一个数组存合并序列，再分别遍历排好序的数组，比较两个数列元素的大小，将较小的放入数组中。（我的代码中使用了vector，为了方便输入不定长数组）  
C++题解在MergeTwoArray中，Python题解在py_MergeTwoArray
## 使用栈计算后缀表达式
如果输入元素为数字则放入栈中，如果输入元素为运算符则，数据栈弹出数字，进行计算。    
C++题解在StackEvaluation文件夹下，Python题解在py_StackEvaluation文件夹下。
## 使用栈为栈中元素排序
一个栈用来不断输出数据，一个栈用来存储排序数据。  
C++题解在SortByStack文件夹下，Python题解在py_SortByStack文件夹下。
## 检查字符串中括号是否匹配
创建存储左半括号的栈，如果遇到左半括号就放入栈中，如果遇到右半括号就将栈顶元素弹出，看是否匹配，如果不匹配则结束，括号是不匹配的，如果匹配则继续遍历，遍历结束，如果栈为空，说明括号匹配。  
C++题解在ParenthesisMatching文件夹下，Python题解我打算使用hashtable，key值为右括号，元素值为左括号。Python题解在py_ParenthesisMatching文件夹下。
## 使用队列将1到n转换为二进制
队列是一个神奇的数据结构存在，就像流水线一样，进制转换涉及除法求余数，余数还需要倒叙，按一般思路是使用栈，但是题目就要求用队列，而且只限于二进制，在对1到n的二进制顺序书写时，有一定的规律，就是在前一字串的基础上先加0后加1。  
C++题解在Conversion文件夹下，Python题解在py_Conversion文件夹下。
## 移除链表中的重复元素 
使用hashtable，遍历链表中的元素，如果hashtable中没有则添加，如果hashtable中有则移除。注意啦，注意啦使用C++STL删除链表需要双重护盾啦，erase（）会把迭代器删除，而且删除元素后，迭代器当前指的地址也为空了，要将迭代器指向前一元素啊！好坑啊。。。。
