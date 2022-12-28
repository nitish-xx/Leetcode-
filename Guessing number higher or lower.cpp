class Solution {
public:
    int guessNumber(int n) {
        int start = 1, end = n;
        while(start<=end) {
          int pick = start+(end-start)/2;
          if(guess(pick)==0)
            return pick;
          else if(guess(pick)==1)
            start = pick+1;
          else
            end = pick-1;
        }
        return -1;
    
        
    }
};
