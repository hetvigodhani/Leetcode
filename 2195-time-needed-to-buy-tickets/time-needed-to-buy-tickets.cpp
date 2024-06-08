class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time=0;
        int i=0;
        int n=tickets.size();
        while(tickets[k]!=0)
        {
            if(tickets[i]==0)
            {
                i++;
                if(i==n)
                    i=0;
                continue;
            }
            tickets[i]--;
            time++;
            i++;
            cout<<i<<" ";
            if(i==n)
                i=0;
        }
        return time;
    }
};