import java.util.*;

public class arrayAfterRemovingAnagrams {

    public String sortString(String str){
        String[] temp = str.split("");

        Arrays.sort(temp);

        return String.join("", temp);
    }
    public void removeAnagrams(String[] words) {
        List<String> result = new ArrayList<>(){};

        result.add(words[0]);

        for(int i=1; i<words.length-1; i++){
            if(!Objects.equals(sortString(words[i]), sortString(words[i - 1]))){
                result.add(words[i]);
            }
        }
//        HashMap<String, String> map = new HashMap<>();
//        for(String x: words){
//            String temp = sortString(x);
//            if(!map.containsKey(temp)){
//                map.put(temp, x);
//            }

//        List<String> result = new ArrayList<>(map.values());

        for(String x: result){
            System.out.println(x);
        }
    }



}
