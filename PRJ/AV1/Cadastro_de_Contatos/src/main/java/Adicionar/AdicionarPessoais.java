package Adicionar;

import Classes.Pessoais;
import java.io.File;
import java.util.Formatter;
import java.util.Scanner;
import java.util.ArrayList;
import javax.swing.JOptionPane;

public class AdicionarPessoais extends javax.swing.JFrame {
    ArrayList<Pessoais> Lista = new ArrayList<Pessoais>();
    int funcao, pos;
    public AdicionarPessoais() {
        initComponents();
        funcao = 1;
    }
    
    public AdicionarPessoais(Pessoais modify, int indice) {
        initComponents();
        NomeField.setText(modify.getNome());
        EmailField.setText(modify.getEmail());
        TelefoneFixoField.setText(modify.getTelefoneFixo());
        TelefoneCelularField.setText(modify.getTelefoneCelular());
        funcao = 2; pos = indice;
    }

    private void LerArquivo(){
        Lista.clear();
            Scanner entrada = null;
            try{
                try{
                    entrada = new Scanner( new File("Pessoais.txt"));
                    while (entrada.hasNext()){
                        Pessoais leitura = new Pessoais();
                        leitura.setNome(entrada.next());
                        leitura.setEmail(entrada.next());
                        leitura.setTelefoneFixo(entrada.next());
                        leitura.setTelefoneCelular(entrada.next());
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
                    saida = new Formatter("Pessoais.txt");
                    for (int i = 0; i < Lista.size(); i++){
                        Pessoais pessoal = Lista.get(i);
                            saida.format("%s %s %s %s\n", pessoal.getNome(), pessoal.getEmail(), pessoal.getTelefoneFixo(), pessoal.getTelefoneCelular());
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

        CancelarButton = new javax.swing.JButton();
        AdicionarButton = new javax.swing.JButton();
        TelefoneFixoField = new javax.swing.JTextField();
        TelefoneText = new javax.swing.JLabel();
        EmailText = new javax.swing.JLabel();
        EmailField = new javax.swing.JTextField();
        NomeField = new javax.swing.JTextField();
        NomeText = new javax.swing.JLabel();
        TelefoneText1 = new javax.swing.JLabel();
        TelefoneCelularField = new javax.swing.JTextField();

        setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);

        CancelarButton.setText("Cancelar");
        CancelarButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                CancelarButtonActionPerformed(evt);
            }
        });

        AdicionarButton.setText("Adicionar");
        AdicionarButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                AdicionarButtonActionPerformed(evt);
            }
        });

        TelefoneFixoField.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                TelefoneFixoFieldActionPerformed(evt);
            }
        });

        TelefoneText.setText("Telefone Fixo");

        EmailText.setText("Email");

        EmailField.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                EmailFieldActionPerformed(evt);
            }
        });

        NomeField.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                NomeFieldActionPerformed(evt);
            }
        });

        NomeText.setText("Nome");

        TelefoneText1.setText("Telefone Celular");

        TelefoneCelularField.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                TelefoneCelularFieldActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addComponent(TelefoneText1)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 19, Short.MAX_VALUE)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                                .addComponent(AdicionarButton)
                                .addGap(18, 18, 18)
                                .addComponent(CancelarButton))
                            .addComponent(TelefoneCelularField, javax.swing.GroupLayout.PREFERRED_SIZE, 248, javax.swing.GroupLayout.PREFERRED_SIZE)))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(TelefoneText)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(TelefoneFixoField, javax.swing.GroupLayout.PREFERRED_SIZE, 248, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(EmailText)
                            .addComponent(NomeText))
                        .addGap(18, 18, 18)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(EmailField, javax.swing.GroupLayout.DEFAULT_SIZE, 300, Short.MAX_VALUE)
                            .addComponent(NomeField))))
                .addContainerGap(45, Short.MAX_VALUE))
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
                    .addComponent(TelefoneFixoField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(TelefoneText1)
                    .addComponent(TelefoneCelularField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 121, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(AdicionarButton)
                    .addComponent(CancelarButton))
                .addContainerGap())
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void CancelarButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_CancelarButtonActionPerformed
        AdicionarPessoais.this.dispose();
    }//GEN-LAST:event_CancelarButtonActionPerformed

    private void AdicionarButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_AdicionarButtonActionPerformed
        Pessoais Novo = new Pessoais();
        
        LerArquivo();
        
        Novo.setNome(NomeField.getText());
        Novo.setEmail(EmailField.getText());
        Novo.setTelefoneFixo(TelefoneFixoField.getText());
        Novo.setTelefoneCelular(TelefoneCelularField.getText());
        
        if (funcao == 1){
            Lista.add(Novo);
            
            SalvarArquivo();

            AdicionarPessoais.this.dispose();
        }
        else if (funcao == 2){            
            Lista.set(pos, Novo);
            
            SalvarArquivo();
            
            AdicionarPessoais.this.dispose();
        }
    }//GEN-LAST:event_AdicionarButtonActionPerformed

    private void TelefoneFixoFieldActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_TelefoneFixoFieldActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_TelefoneFixoFieldActionPerformed

    private void TelefoneCelularFieldActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_TelefoneCelularFieldActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_TelefoneCelularFieldActionPerformed

    private void EmailFieldActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_EmailFieldActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_EmailFieldActionPerformed

    private void NomeFieldActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_NomeFieldActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_NomeFieldActionPerformed

    public static void main(String args[]) {
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new AdicionarPessoais().setVisible(true);
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
    private javax.swing.JTextField TelefoneCelularField;
    private javax.swing.JTextField TelefoneFixoField;
    private javax.swing.JLabel TelefoneText;
    private javax.swing.JLabel TelefoneText1;
    // End of variables declaration//GEN-END:variables
}
