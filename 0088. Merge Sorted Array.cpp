void merge(int* nums1, int m, int* nums2, int n) {
    int a = m-1;
    int b = n-1;
    int all = m + n - 1;
    while(a>=0&&b>=0){
        if(nums1[a]>nums2[b]){
            nums1[all--] = nums1[a--];
        }
        else{
            nums1[all--] = nums2[b--];
        }
    }
    while(b>=0){
        nums1[all--] = nums2[b--];
    }
}