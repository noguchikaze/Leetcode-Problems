class Solution{
public:
  vector<int> twoSum(vector<int>&nums, int target)
  {
    int f = 0, s = 0; //to record the position of the iterator
    vector<int> position;
    vector<int>::iterator begin = nums.begin();
    vector<int>::iterator end = nums.end();
    vector<int>::iterator first, second;
    //to check for the Solution
    for(first = begin; first != end-1; first++)
    {
      f++;  //add to the first position
      s = f;  //let second = first
      for(second = first+1; second != end; second++)
      {
        s++;  //add to the second position
        if(*first+*second == target)
        {
          position.push_back(f-1);
          position.push_back(s-1);
          break;
        }
        else
          ;
      }
    }
    return  position;
  }

};
