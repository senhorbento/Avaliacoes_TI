
package bd;

import java.sql.*;
import javax.swing.JOptionPane;

public class banco{
    public Connection conectarAoBanco(){
        try{
            return (Connection) DriverManager.getConnection("jdbc:mysql://localhost:3306/pdv?zeroDateTimeBehavior=CONVERT_TO_NULL","root","");
        }catch(Exception e){
            JOptionPane.showMessageDialog(null, "erro"+ e);
        }
        return null;
    }
}
