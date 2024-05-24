class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n = tasks.size();
        vector<int> ans ;

        for(int i=0 ; i<n ; i++){
            tasks[i].push_back(i);
        }

        sort(tasks.begin() , tasks.end());
        priority_queue<vector<int> , vector<vector<int>>, greater<vector<int>>> pq;
        
















        
        int maxEnqTime = 0;
        int i = 0;

        while(ans.size() < tasks.size()){

            if(i < tasks.size() && pq.empty()){
                maxEnqTime = max(maxEnqTime , tasks[i][0]);
            }

            while(i < tasks.size() && maxEnqTime >= tasks[i][0]){
                pq.push({tasks[i][1] , tasks[i][2]});
                i++;
            }

            maxEnqTime = min(1000000000 , maxEnqTime + pq.top()[0]);
            ans.push_back(pq.top()[1]);
            pq.pop();
        }
        return ans;
    }
};