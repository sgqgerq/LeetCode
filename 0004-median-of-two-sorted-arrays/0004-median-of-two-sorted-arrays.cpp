class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int>* a = new vector<int>();
        a -> insert(a -> end(), nums1.begin(), nums1.end());
        a -> insert(a -> end(), nums2.begin(), nums2.end());
        sort(a -> begin(), a -> end());
        auto x = a-> size();

        double f;

        if(x%2 == 0){
            int w = (*a)[x/2];
            int y = (*a)[x/2 - 1];
            return double (w+y)/2;

        }else if(x%2 != 0){
            f = (*a)[x/2];
        }
        delete a;
        return f;
    }
};