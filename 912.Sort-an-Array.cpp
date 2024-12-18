#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> leftArr(n1);
    vector<int> rightArr(n2);

    for (int i = 0; i < n1; ++i)
        leftArr[i] = nums[left + i];
    for (int i = 0; i < n2; ++i)
        rightArr[i] = nums[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            nums[k] = leftArr[i];
            i++;
        } else {
            nums[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        nums[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        nums[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& nums, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);

        merge(nums, left, mid, right);
    }
}

vector<int> sortArray(vector<int>& nums) {
    mergeSort(nums, 0, nums.size() - 1);
    return nums;
}

int main() {
    vector<int> nums = {5, 2, 3, 1};
    vector<int> sorted = sortArray(nums);

    for (int num : sorted) {
        cout << num << " ";
    }
}
