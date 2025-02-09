void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n) {
  (void)nums1Size, (void)nums2Size; // Not used

  int *pos = &nums1[(m + n) - 1];
  int *num1 = &nums1[m - 1];
  int *num2 = &nums2[n - 1];

  while (pos >= nums1) {
    if (num1 < nums1) {
      *pos = *num2;
      num2--;
    } else if (num2 < nums2) {
      *pos = *num1;
      num1--;
    } else if (*num1 >= *num2) {
      *pos = *num1;
      num1--;
    } else {
      *pos = *num2;
      num2--;
    }

    pos--;
  }
}
