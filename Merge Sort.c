void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int i=m-1, k=m+n-1, j=n-1;
    for (; k>=0 && i>=0 && j>=0;k--)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
        }
    }
    if (k >= 0)
    {
        for(;j>=0 && k>=0;j--,k--)
            nums1[k] = nums2[j];
    }
}
