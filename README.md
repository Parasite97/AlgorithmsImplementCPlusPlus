记录阅读《算法》一书时，实现C++版代码

# Algorithms Implement

## 0.初始算法——二分查找算法
文件：BaseAlgorithms.h 和BaseAlgorithms.cpp中的BinarySearchAlgorithmInt（）

```c++
SearchAlgorithmInt(int a[], int length);
```

**思路**：
  对一个**有序**数组进行查找。设置两个变量，初始化low=数组起点，high=数组终点。切设置变量mid为数组中间健（low + high除以2）。将查找的num值 与mid值比较，若num值等于mid值，查找成功，返回mid值（称为查找到位置），否则缩小查找范围，若num值小于mid值，在上一次mid左半侧查找，high值与mid值发生变化（high = mid -1；mid = (low + high)/2）。若num值大于mid值，在上一次mid右半侧查找，low值与mid值发生变化（low = mid + 1; mid=(low + high)/2）。
**实现代码**:

