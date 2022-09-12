class Solution {
    public int[] relativeSortArray(int[] arr1, int[] arr2) {
        int i=0,j=0,k=0;
        while(i<arr2.length) {
            for(j=0;j<arr1.length;j++)
            {
                if(arr2[i]==arr1[j]) {
                    swap(arr1,j,k);
                    k++;
                }
            }
            i++;
        }
        Arrays.sort(arr1,k,arr1.length);
        return arr1;
    }
    
    int swap(int[] arr, int i, int j) {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        return t;
    }
};