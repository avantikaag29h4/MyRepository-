 unsigned long long int product(vector<int> &arr) {
        int n=arr.size();
        unsigned long long int x=1;
        const int MOD=1000000007;
        for(int i=0;i<n;i++){
            x=(x*arr[i]%MOD);
        }
        return x;
        
