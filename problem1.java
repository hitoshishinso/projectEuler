import java.util.*;
public class hitoshiShinso_main {
    public static long fk(long flag, long hunt){return (flag*(hunt*(hunt+1)))/2;}
    public static void main(String args[]) {
        int N = 999; long answer = fk(3,N/3)+fk(5,N/5)-fk(15,N/15);System.out.println(answer);
    }
}
