class Solution {
public:
    bool judgeSquareSum(int c) {
      long i=0, j=sqrt(c);
      while(i<=j){
          long curr_sum = i*i + j*j;
          if(curr_sum == c){
              return true;
          }
          if(curr_sum>c){
              j--;
          }
          else{
              i++;
          }
      }  
      return false;
    }
};
