public class arrayProductExceptSelf{


    public int[] productExceptSelf(int[] nums) {

        int[] result = new int[nums.length];
        int[] pre = new int[nums.length];
        int[] post = new int[nums.length];
        pre[0] = 1;
        int size = nums.length;
        post[size-1] = 1;

        for(int i=0; i<size-1; i++){
            pre[i+1] = pre[i]*nums[i];
        }

        for(int i=size-1; i>0; i--){
            post[i-1] = post[i]*nums[i];
        }

        for(int i=0; i<=size-1; i++){
            result[i] = pre[i]*post[i];
        }

        return result;
    }
}
