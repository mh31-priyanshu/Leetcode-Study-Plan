class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
            multimap<int, int> intersect;
            multimap<int, int>::iterator it;
            for(auto i : nums1){
                intersect.insert({i,1});
            }
            for(auto i : nums2){
                if(!(intersect.find(i)==intersect.end())){
                    int a = intersect.find(i)->second;
                    cout << " a " << a << endl;
                    a+=1;
                    cout << " a " << a << endl;
                    intersect.find(i)->second = a;
                    cout << i << " " << intersect.find(i)->second << endl;
                    if(intersect.find(i)->second > 1){
                        result.push_back(i);
                        for(it = intersect.lower_bound(i); it != intersect.end(); it++){
                            intersect.erase(it);
                            break;
                        }
                    }
                }
            }
        return result;
    }
};
