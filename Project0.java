import javax.swing.*;
import javax.swing.JOptionPane;

public class Project0 {
    public static void main (String args[]) {
        int counter_e = 0;
        int counter_E = 0;
        String sentence;
        sentence = JOptionPane.showInputDialog(null, "Enter A Sentence");

        while (!(sentence.contains("Stop"))) {
            for (int i = 0; i < sentence.length(); i++) {
                if (sentence.charAt(i) == 'e') {
                    counter_e++;
                }
                if (sentence.charAt(i)== 'E') {
                    counter_E++;
                }
            }
            JOptionPane.showMessageDialog(null, "Lower case e = " + counter_e + " Upper case E = " + counter_E );
            sentence = JOptionPane.showInputDialog(null, "Enter another:");
        }
        JOptionPane.showMessageDialog(null, "OK. Stopped.");
    }
}
