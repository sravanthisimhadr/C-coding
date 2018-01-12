#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> numSet;
    int nums[5]={1,9,4,7,3};
    int sum = 6;
    for (int i=0;i<5;i++)
    {
        int difference = sum - nums[i];
        
        unordered_set<int>::const_iterator got = numSet.find (difference);

        if ( got != numSet.end() )
            printf("found %d\n %d\n", nums[i],difference);
        else
        numSet.insert(nums[i]);
        
    }
    return 0;
}
