#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int numArrays;
    cout << "Enter the number of arrays of intervals: ";
    cin >> numArrays;
    vector<vector<long>> intervals(numArrays, vector<long>(2));

    for (int i = 0; i < numArrays; i++)
    {
        cout << "Enter number for a[" << i << "]: ";
        cin >> intervals[i][0];

        cout << "Enter number for b[" << i << "]: ";
        cin >> intervals[i][1];
    }

    cout << "Intervals:" << endl;
    for (int i = 0; i < numArrays; i++)
    {
        int c = i + 1;
        if (intervals[i][1] >= intervals[c][0])
        {
            cout << "Output:"
                 << "[" << intervals[i][0] << ", " << intervals[c][1] << "]" << endl;
        }
        else
        {
            cout << "No Overlap:"
                 << "[" << intervals[c][0] << ", " << intervals[c][1] << "]" << endl;
        }
    }

    return 0;
}