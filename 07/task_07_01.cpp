#include <iostream>
#include <vector>

#define ARR_SIZE 4

using namespace std;

void swapvec(vector<int> *arr1, int *arr2) {
    size_t idx;
    int int_buf;
    vector<int>::iterator iter;

    iter = arr1->begin();

    while (iter != arr1->end())
    {
        idx = distance(arr1->begin(), iter);

        int_buf = arr2[idx];
        arr2[idx] = *iter;
        *iter = int_buf;

        iter++;
    }
}

int main() {
    vector<int> arr1 = {1,2,3,4};
    int arr2[ARR_SIZE] = {2,4,6,8};

    if (arr1.size() > ARR_SIZE) {
        cout << "Oops! Something went wrong." << endl;
    } else {
        swapvec(&arr1, arr2);

        cout << "arr1:" << endl;

        for(int arr_val : arr1)
            cout << arr_val << " ";

        cout << endl << "arr2: " << endl;

        for(int i = 0; i < ARR_SIZE; ++i)
            cout << arr2[i] << " ";

        cout << endl;
    }

    return 0;
}