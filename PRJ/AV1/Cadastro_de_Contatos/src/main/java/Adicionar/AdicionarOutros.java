package Adicionar;

import Classes.Outros;
import java.io.File;
import java.util.Formatter;
import java.util.Scanner;
import java.util.ArrayList;
import javax.swing.JOptionPane;

public class AdicionarOutros extends javax.swing.JFrame {
    ArrayList<Outros> Lista = new ArrayList<Outros>();
    int funcao, pos;
    public AdicionarOutros() {
        initComponents();
        funcao = 1;
    }
    
    public AdicionarOutros(Outros modify, int indice) {
        initComponents();
        NomeField.setText(modify.getNome());
        EmailField.setText(modify.getEmail());
        TelefoneField.setText(modify.getTelefone());
        LerArquivo();
        funcao = 2; pos = indice;
    }

    private void LerArquivo(){
        Lista.clear();
            Scanner entrada = null;
            try{
                try{
                    entrada = new Scanner( new File("Outros.txt"));
                    while (entrada.hasNext()){
                        Outros leitura = new Outros();
                        leitura.setNome(entrada.next());
                        leitura.setEmail(entrada.next());
                        leitura.setTelefone(entrada.next());
                        Lista.add(leitura);
                    }
                } 
                finally {
                    if (entrada != null){
                        entrada.close();
                    }
                }
            } 
            catch (Exception e){
                JOptionPane.showMessageDialog(null, e.getMessage());
            }
    }
    
    private void SalvarArquivo(){
        Formatter saida = null;
            try{
                try{
                    saida = new Formatter("Outros.txt");
                    for (int i = 0; i < Lista.size(); i++){
                        Outros outro = Lista.get(i);
                            saida.format("%s %s %s\n", outro.getNome(), outro.getEmail(), outro.getTelefone());
                    }
                }
                finally{
                    if (saida!= null){
                        saida.close();
                    }
                }
            }
            catch(Exception e){
                JOptionPane.showMessageDialog(null, e.getMessage());
            }
    }
    
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        NomeText = new javax.swing.JLabel();
        EmailText = new javax.swing.JLabel();
        TelefoneText = new javax.swing.JLabel();
        NomeField = new javax.swing.JTextField();
        EmailField = new javax.swing.JTextField();
        TelefoneField = new javax.swing.JTextField();
        AdicionarButton = new javax.swing.JButton();
        CancelarButton = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);

        NomeText.setText("Nome");

        EmailText.setText("Email");

        TelefoneText.setText("Telefone");

        TelefoneField.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                TelefoneFieldActionPerformed(evt);
            }
        });

        AdicionarButton.setText("Adicionar");
        AdicionarButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                AdicionarButtonActionPerformed(evt);
            }
        });

        CancelarButton.setText("Cancelar");
        CancelarButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                CancelarButtonActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(TelefoneText)
                    .addComponent(EmailText)
                    .addComponent(NomeText))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(0, 0, Short.MAX_VALUE)
                        .addComponent(AdicionarButton)
                        .addGap(18, 18, 18)
                        .addComponent(CancelarButton))
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(TelefoneField)
                            .addComponent(EmailField)
                            .addComponent(NomeField, javax.swing.GroupLayout.PREFERRED_SIZE, 300, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(0, 0, Short.MAX_VALUE)))
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(NomeText)
                    .addComponent(NomeField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(EmailText)
                    .addComponent(EmailField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(TelefoneText)
                    .addComponent(TelefoneField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 59, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(AdicionarButton)
                    .addComponent(CancelarButton))
                .addContainerGap())
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void TelefoneFieldActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_TelefoneFieldActionPerformed

    }//GEN-LAST:event_TelefoneFieldActionPerformed

    private void CancelarButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_CancelarButtonActionPerformed
        AdicionarOutros.this.dispose();
    }//GEN-LAST:event_CancelarButtonActionPerformed

    private void AdicionarButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_AdicionarButtonActionPerformed
        Outros Novo = new Outros();
        
        LerArquivo();
        
        Novo.setNome(NomeField.getText());
        Novo.setEmail(EmailField.getText());
        Novo.setTelefone(TelefoneField.getText());
        
        if (funcao == 1){
            Lista.add(Novo);
            
            SalvarArquivo();

            AdicionarOutros.this.dispose();
        }
        if (funcao == 2){            
            Lista.set(pos, Novo);
            
            SalvarArquivo();
            
            AdicionarOutros.this.dispose();
        }
    }//GEN-LAST:event_AdicionarButtonActionPerformed

    public static void main(String args[]) {

        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new AdicionarOutros().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton AdicionarButton;
    private javax.swing.JButton CancelarButton;
    private javax.swing.JTextField EmailField;
    private javax.swing.JLabel EmailText;
    private javax.swing.JTextField NomeField;
    private javax.swing.JLabel NomeText;
    private javax.swing.JTextField TelefoneField;
    private javax.swing.JLabel TelefoneText;
    // End of variables declaration//GEN-END:variables
}
