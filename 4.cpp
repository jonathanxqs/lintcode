class Solution {
public:
    /*
     * @param n an integer
     * @return the nth prime number as description.
     */
    int nthUglyNumber(int n) {
        // write your code here

        vector<int> ugly(n,0);
        ugly[0]=1;
        int ugly2=0,ugly3=0,ugly5=0;

        int i=1;
        while(i<=n-1){
            int minUgly=min(min(ugly[ugly2]*2,ugly[ugly3]*3),ugly[ugly5]*5);
            ugly[i]=minUgly;

            /*maybe Muliple minUgly*/
            if(minUgly==ugly[ugly2]*2){
                ugly2++;
            }
            if(minUgly==ugly[ugly3]*3){
                ugly3++;
            }
            if(minUgly==ugly[ugly5]*5){
                ugly5++;
            }
            i++;
        }

        return ugly[n-1];
    }
};

// 解法一：时间复杂度O(k log k)，空间复杂度O(k)
// 使用priority_queue模拟最小堆： priority_queue, greater >. 从中取出最小的 ugly number , 然后该 ugly number 分别乘以3, 5, 7 然后又放进 priority_queue中 如果上述过程中，将乘以3,5,7之后的数直接放入 priority_queue 将可能导致重复放入的问题，比如：当取出 9， 然后放入27, 45, 63,。后面当取出 21 时，放入 63, 105, 147，这里就重复放入 63 了。因此需要用个 unordered_set 来 mark 哪些元素已经放入过了。
// 时间复杂度分析：共 k 个元素，每次取出一个元素时，都需要对堆进行操作，时间复杂度为 O(log k)，因此时间复杂度为 O(k log k).

// 解法二：时间复杂度 O(k)，空间复杂度O(k)
// 使用 primes 数组来记录前 k 个ugly_number。在生成 primes 数组时，新增入的元素，肯定是该 primes 数组中前面某些元素乘以3，或是乘以5，或是乘以7的结果，且是最小的。依据此思想，可以构建如下的代码

// TLE SOLUTION 
// class Solution {
// public:
//     /*
//      * @param n an integer
//      * @return the nth prime number as description.
//      */

//     set<int> a;

//     bool isUgly(int i){
//     	int j=i;
//     	while (j % 2==0) j=j/2;
//     	while (j % 3==0) j=j/3;
//     	while (j % 5==0) j=j/5;
//     	if (j==1) return true;
//     	else return false;
//     }

//     int nthUglyNumber(int n) {
//         // write your code here

//         if (n<=0) return -1;
//         if (n==1) return 1;

//         int i,j,k=1;
        
        
//         i=1;

//         while (i<INT_MAX){
//         	i++;
//         	if (isUgly(i))
//         		{
//         			k++;
//         			if (k==n) return i;
//         		}

//         }

//         set<int>::iterator it1=a.begin();
//         for (int i=2;i<=n;i++) {
//         	  cout<<*it1<<"	";
//         	it1++;
//         }

//         return *it1;



//     }

    


// };