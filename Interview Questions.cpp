// 86th
// Amazon Interview Challenge: Array - Find Transition Point





// 87th
// Microsoft Interview Challenge: Array - Duplicate Number
// Given an array of integers nums containing n+1 integers where each integer is in the range [1,n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// Example: I/P: nums= [1,3,4,2,2]
//          O/P: 2
int findDuplicate(vector<int> nums) {
  int ans = 0;
  for(int i = 0; i<nums.size(); i++){
    int ind = abs(nums[i]);
    if(nums[ind-1] < 0)
      return abs(nums[i]);
    else
      nums[ind-1] = -1*nums[ind-1];
  }
  return -1;
}


// 88th
// Adobe Interview Challenge: Array - Equilibrium Point
// Given an array A of n positive numbers. Find the first Equilibrium Point in the array.
// * Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.
// * Return -1 if no such point exists
// Example: I/P: n=5, A[] = {1,3,5,2,2}
//          O/P: 3
int equilibriumPoint(long long a[], int n){
  long long sum = 0, currsum = 0;
  for(int i =  0; i < n; i++){
    sum += a[i];
  }
  
  for(int i = 0; i<n; i++){
    sum = sum - a[i];
    if(currsum == sum)
      return i+1;
    currsum += a[i];
  }
  return -1;
}



// 89th
// Amazon Interview Challenge: Array - Check Rotation
// Given two strings a and b. Check if the string 'b' can be obtained by rotating another string 'a' by exactly 2 places.
// Example: I/P: a="amazon", b = "azonam"
//          O/P: 1
// * amazon can be rotated anti-clockwise by two places, which will make it as azonam
bool isRotated(string str1, string str2){
  if(str1.size() != str2.size())
    return false;
  
  int n = str1.size();
  bool flag1 = true, flag2=true;
  
  for(int i=0; i<n; i++){
    if(str1[i] != str2[(i+2)%n])
      flag1 = false;
    if(str1[i] != str2[(n-2+i)%n])
      flag1 = false;
  }
  
  return flag1 || flag2;
}




// 90th
// Microsoft Interview Challenge: Array - Max Product Subarray
// Given an array arr[] that contains N integers. Find the product of the maximum product subarray.
// Example: I/P: n=5, arr[] = {6,-3,-10,0,2}
//          O/P: 180
// * Subarray with maximum product is [6, -3, -10] which gives product as 180.
long long maxProduct(vector<int> arr, int n) {
  long long ans, maxm, minm;
  ans = maxm = minm = arr[0];
  
  for(int i=1; i<n; i++){
    long long curr = arr[i];
    if(curr < 0)
      swap(maxm, minm);
    
    maxm = max(curr, maxm * curr);
    minm = min(curr, minm * curr);
    
    ans = max(ans, maxm);
  }
  return ans;
}



// 91st
// Zoho Interview Challenge: Array - Union of two arrays
// Given two arrays a[] and b[] of size n and m. Find the count of union elements of the two arrays.
// Example: I/P: n=5, a[] = {1,2,3,4,5}
//               n=3, b[] = {1,2,3}
//          O/P: 5
//                * 1,2,3,4,5 are the elements which comes in the union set of both arrays. So count is 5.    
int doUnion(int a[], int n, int b[], int m){
  unordered_map<inti int> um;
  for(int i=0; i<n; i++){
    if(um.find(a[i]) == um.end())
      um[b[i]]++;
  }
  for(int i=0; i<m; i++){
    if(um.find(b[i]) == um.end())
      um[b[i]]++;
  }
  
  int cnt=0;
  for(auto it = um.begin(); it!=um.end(); it++){
    cnt++;
  }
  return cnt;
}



// 92nd
// Amazon Interview Challenge: Array - Unique Paths
// Given a m x n grid, count all the possible paths from top left to bottom right corner of the grid.
// * From each cell you can either move to right or down
// * Top left corner (grid[0][0]), bottom right corner (grid[m-1][n-1])
// Example: I/P: M = 3 and N = 3
//          O/P: 6
long long countpath(int i, int j, int m, int n){
  if(i==m-1 || j == n-1)
    return 1;
  
  int a = countpath(i+1, j, m, n);
  int b = countpath(i, j+1, m, n);
  return a + b;
}

long numberOfPaths(int m, int n){
  return countpath(0, 0, m, n);
}



// 93rd
// Amazon Interview Challenge: Array - Subset Sums
// Given an integer array arr of N integers, return the sums of all subsets in it.
// Example: I/P: N=3, arr={5,2,1}
//          O/P: 0 1 2 3 4 5 6 7 8
vector<int> ans;
void helper(vector<int> &arr, int N, int i=0, int sum=0){
  if(i==N){
    ans.push_back(sum);
    return;
  }
  helper(arr, N, i+1, sum);
  helper(arr, N, i+1, sum + arr[i]);
  return;
}

vector<int> subsetSums(vector<int> arr, int N){
  helper(arr, N);
  return ans;
}




// 94th
// Facebook Interview Challenge: Array - Pair with given sum
// Given two unsorted arrays A of size N and B of size M of distinct elements, find all pairs from both arrays whose sum is equal to X.
// Example: I/P:  A[] = {1,2,4,5,7}
//                B[] = {5,6,3,4,8}
//                x=9
//          O/P:  (1,8),(4,5),(5,4)
vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
{
  vector<pair<int, int>> ans;
  unordered_set<int> s;
  for (int i = 0; i < M; i++)
    s.insert(B[i]);
  
  for (int j=0; j<N; j++){
    if (s.find(X-A[j]) != s.end()){
      ans.push_back({A[j], X-A[j]});
    }
  }
  sort(ans.begin(), ans.end());
  return ans;
}


  
  
  
// 95th
// Amazon Interview Challenge: Array - Repeating Element
// Given an array arr[] of size n, find the first repeating element
// * The element should occurs more than once
// * The index of its first occurrence should be the smallest.
//  Example: I/P: n = 7, arr[]={1,5,3,4,3,5,6}
//           O/P: 2
int firstRepeated(int arr[], int n) {
  unordered_map<int, int> um;
  for(int i = 0; i<n; i++)
    um[arr[i]]++;
  for(int i = 0; i<n; i++){
    if(um[arr[i]] > 1)
      return i+1;
  }
  return -1;
}



// 96th
// Microsoft Interview Challenge: Array - Search in an Array
// Given an array A of N distinct elements and it is rotated at some point, given an element key.
// Find the index of the given element key in the array A.
//  Example: I/P: n = 9, A[]={5,6,7,8,9,10,1,2,3}, key = 10
//           O/P: 5
int search(int arr[], int l, int h, int key){
  int mid = 0;
  while(l <= h){
    mid = (l + h)/2;
    if(arr[] == key)
      return mid;
    if(arr[l]<=arr[mid] && arr[mid]>arr[h]){
      if(arr[l] <= key && arr[mid] > key)
        h=mid-1;
      else l = mid+1;
    }else{
      if(arr[mid]<key && arr[h]>= key)
        l = mid+1;
      else h = mid-1;
    }
  }
  return -1;
}



// 97th
// LinkedIn Interview Challenge: Strings - Closest Strings
// Given a list of words followed by two words, find the minimum distance between the given two words.
// * Here distance is the difference in indices between the given words in the list of words.
//  Example: I/P: s = {"the", "quick", "brown", "fox", "quick"}
//                word1="the"   word2="fox"
//           O/P: 3
int shortestDistance(vector<string> &s, string word1, string word2){
  int word1_ind = -1, word2_ind = -1;
  int ans = INT_MAX;
  
  for(int i = 0; i<s.size(); i++){
    if(s[i] == word1)
      word1_ind = i;
    if(s[i] == word2)
      word2_ind = i;
    
    if(word1_ind!=-1 and word2_ind!=-1)
      ans=min(ans,abs(word1_ind-word2_ind));
  }
  return ans;
}


// 98th
// Amazon Interview Challenge: Array - 
// Given a sorted array arr containing n elements find indexes of first and last occurences of an element x in the given array
// * The array may contain duplicate elements
//  Example: I/P: n = 9, x=5
//                arr[] = {1,3,5,5,5,5,67,123,125}
//           O/P:  2 5
....
  
  
  


// Problem: Meta and Microsoft Interview
// Question: An encoded string (s) is given, the task is to decode it.
//           The pattern in which the strings were encoded were as follows
//           original string: abbbababbbababbbab
//           encoded string: 3[a3[b]1[ab]]
// Example:
// Input: s = 3[b2[ca]]
// Output: bcacabcacabcaca  
// Explanation: 2[ca] means 'ca' is repeated twice which is 'caca' which concatenated with 'b' becomes 'bcaca'.
//              This string repeated thrice becomes the output 


// Problem: Amazon Interview Challenge
// Given an array, X, of N integers, calculate and print the respective mean, median, and mode on separate lines.
// If your array contains more than one modal value, choose the numerically smallest one.
n=6
x=[1,2,3,4,5,5]
// the mean is 20/6 = 3.3
// the median is (3+4)/2 = 3.5
// the mode is 5 because 5 occurs most frequently
// Complexity: try to do it in O(N) time



// Problem: Amazon Interview Challenge
// You are given N dice, each having m faces(from 1 to m)
// Find probability of getting sum of the numbers on dice as X assuming all the dice are thrown together exactly once.
// (n <= <= m * n)
n=3
m=6
x=8
// answer 5/36
// Expected time complexity: O(n*x)
// Bonus: Try to extend the solution for finding probabilities for getting sum >=x and <x as well

  
  
  
  






