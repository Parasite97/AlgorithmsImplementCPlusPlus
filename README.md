记录阅读《算法》一书时，实现C++版代码

# Algorithms Implement

## 0.初始算法——二分查找算法
**文件：**BaseAlgorithms.h 和BaseAlgorithms.cpp中的BinarySearchAlgorithmInt（）

```c++
SearchAlgorithmInt(int a[], int length);
```

**思路**：
  对一个**有序**数组进行查找。设置两个变量，初始化low=数组起点，high=数组终点。切设置变量mid为数组中间健（low + high除以2）。将查找的num值 与mid值比较，若num值等于mid值，查找成功，返回mid值（称为查找到位置），否则缩小查找范围，若num值小于mid值，在上一次mid左半侧查找，high值与mid值发生变化（high = mid -1；mid = (low + high)/2）。若num值大于mid值，在上一次mid右半侧查找，low值与mid值发生变化（low = mid + 1; mid=(low + high)/2）。

**实现代码**:

```c++
	int BinarySearchAlgorithmInt(int a[], int length, int num){
		int low = 0;
		int high = length;
		int mid = (low + high) / 2;
		while(num != a[mid]){
			if(num < a[mid])
				high = mid - 1;
			else if(num > a[mid])
				low = mid + 1;
			mid = (low + high) / 2;
		}
		if(num == a[mid]){
		cout << "Search successful! Search position:" << mid << endl;
		return mid;
		}
		else{
		cout << "Search failed!" << endl;
		return 0;
		}
	}
```



**问题**
  当查找值在数组中0位置时，查找正确。但查找失败依旧返回0，存在改进。可思考数组起始为1不为0。

***

## 1.欧几里得算法（辗转相除法）
  求两个正整数的最大公约数
  **文件：**BaseAlgorithms.h 和BaseAlgorithms.cpp中的EuclidAlgorithm（）

  ```c++
  int EuclidAlgorithm(int m, int n);
  ```

  > **思路**
  > Part1. 设两个正整数m,n，且一直m > n;
  > Part2. 令r = m % n
  > part3. 若r == 0，则结束运算，n即为运算结果 
  > part4. 若r != 0，则令m = n, n = r，并返回Part1。

  **实现**

  ```c++
    int EuclidAlgorithm(int m, int n){
        int r;
        if(m < n){
            int temp;
            temp = m;
            m = n;
            n = temp;
        }
        r = m % n;
        cout << "m:" << m << " n:" << n << endl;

        if(r == 0){
            //cout << m << " and " << n << " EuclidNumber is " << n << endl;
            return n;
        }
        else{
            return EuclidAlgorithm(n, r);  
        }
    }
```

***













