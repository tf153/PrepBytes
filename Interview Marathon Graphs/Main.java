import java.io.*;

class Player{
    private int playerId,age;
    private String playerName;
    private long phoneNumber;
    public Player(int playerId,String playerName,int age,long phoneNumber){
        this.setPlayer(playerId, playerName, age, phoneNumber);
    }
    private void setPlayer(int playerId,String playerName,int age,long phoneNumber){
        this.playerId=playerId;
        this.playerName=playerName;
        this.age=age;
        this.phoneNumber=phoneNumber;
    }
    public int getPlayerId(){
        return this.playerId;
    }
    public String getName(){
        return this.playerName;
    }
    public int getAge(){
        return this.age;
    }
    public long getPhoneNumber(){
        return this.phoneNumber;
    }
}
public class Main {
    public static Player getPlayer(Player players[], int playerId) {
        Player ans = null;
        for (Player player : players) {
            if (playerId == player.getPlayerId()) {
                ans = player;
            }
        }
        return ans;
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter the number of players for record : ");
        int n=Integer.parseInt(br.readLine());
        Player []players=new Player[n];
        int id,age;
        long num;
        String name;
        for(int i=0;i<n;i++){
            System.out.print("Player ID:");
            id= Integer.parseInt(br.readLine());
            System.out.print("Name:");
            name=br.readLine();
            System.out.print("age:");
            age= Integer.parseInt(br.readLine());
            System.out.print("Phone Number:");
            num= Long.parseLong(br.readLine());
            System.out.println();
            players[i]=new Player(id,name,age,num);
        }
        System.out.print("Enter the Id to be searched:");
        int find=Integer.parseInt(br.readLine());
        Player ans=getPlayer(players,find);
        if(ans!=null){
            System.out.println("Name : "+ans.getName());
            System.out.println("Phone number : "+ans.getPhoneNumber());
        }
        else{
            System.out.println("No player found");
        }
        return;
    }
}