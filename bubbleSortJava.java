import java.util.*;
import java.io.*;

public class bubbleSortJava {
    public static void main(String [] args){
        //Pracice Array
        int arr[] = {10,12,1,16,8,22};
        bubbleSort(arr);
        System.out.print("Sorted List of Elements: ");
        print(arr);
    }
    /**
     * bubbleSort is the sorting function that iterates and compares elements with each other
     * @param arr is the inputted array that will be compiled
     * @param n the length of the array
     */
    public static void bubbleSort(int arr[]){
        int n = arr.length;
        int tempInt;

        for (int i = 0; i < n - 1; i++){
            boolean sort = false;
            for (int j = 0; j < n - i - 1; j++){
                if (arr[j] > arr[j+1]){
                    tempInt = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tempInt;
                    sort = true;
                }
            }
            if (sort == false){
                break;
            }
        }
    }
    /** print method prints the bubble sorted list of elements
     *  @param arr[] is the sorted array that will be passed in
     *  @param n is the length of arr[] 
     */
    public static void print(int arr[]){
        int n = arr.length;
        System.out.println(Arrays.toString(arr));        
    }
}