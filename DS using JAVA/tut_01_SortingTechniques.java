public class tut_01_SortingTechniques {
    public static void main(String[] args) {
        int arr[] = {7,8, 3, 1, 2};
        int temp;

        //Time Complexity = O(n^2)
        // bubble sort
        // for(int i=0; i<arr.length-1; i++){
        //     for(int j=0; j<arr.length-i-1; j++){
        //         if(arr[j]>arr[j+1]){
        //             temp = arr[j];
        //             arr[j] = arr[j+1];
        //             arr[j+1] = temp;
        //         }
        //     }
        // }

        //selection sort
        for(int i=0; i<arr.length-1; i++){
            int smallest = i;
            for(int j=i+1; j<arr.length; j++){
                if(arr[smallest] > arr[j]){
                    smallest = j;
                }
            }
            temp = arr[smallest];
            arr[smallest] = arr[i];
            arr[i] = temp;
        }

        for(int data: arr){
            System.out.print(data);
            System.out.print(" ");
        }
    }
}
