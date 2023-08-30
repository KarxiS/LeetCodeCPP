#include <vector>
#include <algorithm>



using namespace std;

class Solution4 {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int sum = 0;
        int size = 0;
        vector<int> combined;
        for (auto number : nums1) {
            combined.push_back(number);
            size++;
        }
        for (auto number : nums2) {
            combined.push_back(number);
            size++;
        }
        size = combined.size();
        sort(combined.begin(), combined.end());
        if (combined.size() % 2 == 1) {
            return combined.at(size / 2);
        }

        int cislo1 = combined.at(size / 2);
        int cislo2 = combined.at(size / 2 - 1);
        return (double)(cislo1 + cislo2) / 2;
    

    }
};