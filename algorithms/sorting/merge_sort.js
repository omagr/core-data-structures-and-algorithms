const arr = [13, 9, 20];

function merge(arr, low, mid, high) {
    let temp = [];
    let left = low;
    let right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push(arr[left]);
            left++;
        } else {
            temp.push(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push(arr[right]);
        right++;
    }
    console.log(temp)
    // for(int i = low; i <= high; i++) {
    //     arr[i] = temp[i - low];
    //     cout << i << " " << temp[i-low] << endl;
    // }
}

function merge_sort(arr, low, high) {
    if (low == high) return;
    const mid = (low + high) / 2
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

merge_sort(arr, 0, arr.length)