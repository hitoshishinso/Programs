import java.util.*; 
class Main{ 

   static Scanner scan = new Scanner(System.in);
   public static void main(String[] args){
       
       int N = scan.nextInt();
       HashMap<long , String> map= new HashMap<>();
       ArrayList<long> list = new ArrayList<>();
       for(int i=0; i<N; i++){
          
           String s = scan.next(); long p = scan.nextLong();
           map.put(p,s); ;list.addFirst(p);
       }       
       
       Arrays.sort(list); 
       for(long i : list){
          System.out.print(map.get(i) +" ");
       }System.out.println();
       1000000007
       
   }
   
   class knee
      int left_poister; String name; 
      public void join_left_poister(){
      system.out.println(this.name+" joint compelete/")
      } 
   }
   
}
