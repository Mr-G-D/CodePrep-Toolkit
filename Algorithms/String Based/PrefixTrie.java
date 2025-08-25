class Trie {

    class Node {
        Map<Character, Node> child = new HashMap<>();
        boolean end = false; 
    }

    Node root;

    public Trie() {
        root = new Node();
    }
    
    public void insert(String word) {
        char[] arr = word.toCharArray();
        Node curr = root;

        for(char c: arr){
            if(curr.child.containsKey(c) == false){
                curr.child.put(c, new Node());
            }
            curr = curr.child.get(c);
        }
        curr.end = true;
        
    }
    
    public boolean search(String word) {
        char[] arr = word.toCharArray();
        Node curr = root;

        for(char c: arr){
            if(curr.child.containsKey(c) == false){
                return false;
            }
            curr = curr.child.get(c);
        }

        return curr.end;        
    }
    
    public boolean startsWith(String prefix) {
        char[] arr = prefix.toCharArray();
        Node curr = root;

        for(char c: arr){
            if(curr.child.containsKey(c) == false){
                return false;
            }
            curr = curr.child.get(c);
        }

        return true;
        
    }
}
