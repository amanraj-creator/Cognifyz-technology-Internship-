class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

       int totalSum=(n*(n+1))/2;
       int arrSum=0;
       for(int i=0;i<n-1;i++)
       {
           arrSum+=arr[i];
       }
       return (totalSum-arrSum);
    }
};
