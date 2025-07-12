import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class kFrequentElement {

    public static int[] topKFrequent(int[] nums, int n) {
        HashMap<Integer, Integer> myMap = new HashMap<Integer, Integer>();

        int[] result = new int[nums.length];


        for (int x: nums){
            myMap.merge(x, 1, Integer::sum);
        }

        for(int i=0; i<myMap.size(); i++){
            
        }

        return result;
    }


    public static void main(String[] args) {
        int[] nums = new int[]{1,1,1,2,2,3};
        int n = 2;

        int[] result = topKFrequent(nums, n);

        for(int x: result){
            System.out.println(x);
        }
    }
}
