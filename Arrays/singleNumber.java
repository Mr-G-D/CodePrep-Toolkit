public class singleNumber {

    public static boolean removeElement(int[] arr, int num){
        for(int i=0; i<arr.length-1; i++){
            if(arr[i] == num){
                arr[i] = 0;
                return true;
            }
        }
        return false;
    }

    public static int singleNumber(int[] nums) {
        int[] result = new int[nums.length];
        int i=0;
        for(int x: nums){
            boolean s = removeElement(result, x);
            if(!s){
                result[i++] = x;
            }
        }

        for(int x: result){
            if(x != 0){
                return x;
            }
        }

        return 0;


    }

    public static void main(String[] args) {
        int[] nums = {4,1,2,1,2};

        int result = singleNumber(nums);

        System.out.println(result);
    }
}


