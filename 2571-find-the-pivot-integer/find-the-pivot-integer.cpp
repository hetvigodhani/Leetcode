class Solution {
public:
    int pivotInteger(int n) {
        int leftSum=0,rightSum=0;
        for(int i=1;i<=n;i++)
        {
            leftSum=i*(i+1)/2;
            rightSum=(n-i+1)*(i+n)/2;
            if(leftSum==rightSum)
            {
                return i;
            }
        }
        return -1;
    }
};