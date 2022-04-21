
// Problem: LinkedIn Interview Challenge: String
// Gİven a list of words followed by two words, find the minimum distance between the given two words.
// * Here distance is the difference in indices between the given words in the list of words.
//  Example: I/P: s = {"the", "quick", "brown", "fox", "quick"}
//                word1="the"   word2="fox"
//           O/P: 3
...


// 94th Problem: Facebook Interview Challenge: : Array
// Given two unsorted arrays A of size N and B of size M of distinct elements, find all pairs from both arrays whose sum is equal to X.
// Example: I/P:  A[] = {1,2,4,5,7}
//                B[] = {5,6,3,4,8}
//                x=9
//          O/P:  (1,8),(4,5),(5,4)
vector<pair<int, int>> allPairs(int A[], int)  
  
  
// Problem: Amazon Interview Challenge: Repeating Element: Array
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



// Problem: Microsoft Interview Challenge: Search in an Array
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

  
  
  
  






