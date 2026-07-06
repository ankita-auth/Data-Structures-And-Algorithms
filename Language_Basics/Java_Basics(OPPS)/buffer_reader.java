import java.io.*;
 
class buffer_reader {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
 
       
        String name = br.readLine();
 
        System.out.println(name);
        System.out.println(Integer.parseInt(name));
    }
}
 