int classTest(int n, vector<int> &a, int k) {
    // Write your code here.
    sort(a.begin(),a.end());
    int ans=a[n-k];
    return ans;
}