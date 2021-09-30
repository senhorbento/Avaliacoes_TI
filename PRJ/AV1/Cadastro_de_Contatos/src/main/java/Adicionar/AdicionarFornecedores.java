package Adicionar;

import Classes.CpfCnpjValidator;
import Classes.Fornecedores;
import java.io.File;
import java.util.Formatter;
import java.util.Scanner;
import java.util.ArrayList;
import javax.swing.JOptionPane;

public class AdicionarFornecedores extends javax.swing.JFrame {
    ArrayList<Fornecedores> Lista = new ArrayList<Fornecedores>();
    int funcao, pos;
    public AdicionarFornecedores() {
        initComponents();
        funcao = 1;
    }
    public AdicionarFornecedores(Fornecedores modify, int indice){
        initComponents();
        NomeField.setText(modify.getNome());
        CNPJField.setText(modify.getCNPJ());
        EmailField.setText(modify.getEmail());
        TelefoneField.setText(modify.getTelefoneFixo());
        FaxField.setText(modify.getFax());
        funcao = 2; pos = indice;
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        CancelarButton = new javax.swing.JButton();
        AdicionarButton = new javax.swing.JButton();
        TelefoneField = new javax.swing.JTextField();
        TelefoneText = new javax.swing.JLabel();
        EmailText = new javax.swing.JLabel();
        EmailField = new javax.swing.JTextField();
        NomeField = new javax.swing.JTextField();
        NomeText = new javax.swing.JLabel();
        CNPJText = new javax.swing.JLabel();
        CNPJField = new javax.swing.JTextField();
        jLabel4 = new javax.swing.JLabel();
        FaxField = new javax.swing.JTextField();

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

        TelefoneField.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                TelefoneFieldActionPerformed(evt);
            }
        });

        TelefoneText.setText("Telefone");

        EmailText.setText("Email");

        NomeText.setText("Nome");

        CNPJText.setText("CNPJ");

        jLabel4.setText("FAX");

        FaxField.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                FaxFieldActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(NomeText)
                            .addComponent(CNPJText))
                        .addGap(25, 25, 25)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(layout.createSequentialGroup()
                                .addComponent(CNPJField, javax.swing.GroupLayout.PREFERRED_SIZE, 300, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                            .addGroup(layout.createSequentialGroup()
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addGroup(layout.createSequentialGroup()
                                        .addGap(0, 0, Short.MAX_VALUE)
                                        .addComponent(AdicionarButton)
                                        .addGap(18, 18, 18)
                                        .addComponent(CancelarButton))
                                    .addGroup(layout.createSequentialGroup()
                                        .addComponent(NomeField, javax.swing.GroupLayout.PREFERRED_SIZE, 300, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addGap(0, 14, Short.MAX_VALUE)))
                                .addContainerGap(24, Short.MAX_VALUE))))
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(TelefoneText)
                            .addComponent(EmailText)
                            .addComponent(jLabel4))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(FaxField, javax.swing.GroupLayout.PREFERRED_SIZE, 300, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(EmailField, javax.swing.GroupLayout.PREFERRED_SIZE, 300, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(TelefoneField, javax.swing.GroupLayout.PREFERRED_SIZE, 300, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(0, 0, Short.MAX_VALUE))))
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
                    .addComponent(CNPJText)
                    .addComponent(CNPJField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(EmailText)
                    .addComponent(EmailField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(TelefoneText)
                    .addComponent(TelefoneField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel4)
                    .addComponent(FaxField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 83, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(AdicionarButton)
                    .addComponent(CancelarButton))
                .addContainerGap())
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void CancelarButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_CancelarButtonActionPerformed
        AdicionarFornecedores.this.dispose();
    }//GEN-LAST:event_CancelarButtonActionPerformed
    
    private void LerArquivo(){
        Lista.clear();
            Scanner entrada = null;
            try{
                try{
                    entrada = new Scanner( new File("Fornecedores.txt"));
                    while (entrada.hasNext()){
                        Fornecedores leitura = new Fornecedores();
                        leitura.setNome(entrada.next());
                        leitura.setCNPJ(entrada.next());
                        leitura.setEmail(entrada.next());
                        leitura.setTelefoneFixo(entrada.next());
                        leitura.setFax(entrada.next());
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
                    saida = new Formatter("Fornecedores.txt");
                    for (int i = 0; i < Lista.size(); i++){
                        Fornecedores fornecedor = Lista.get(i);
                            saida.format("%s %s %s %s %s\n", fornecedor.getNome(), fornecedor.getCNPJ(), fornecedor.getEmail(), fornecedor.getTelefoneFixo(), fornecedor.getFax());
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
    
    private void AdicionarButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_AdicionarButtonActionPerformed
        String aux;
        int valido;
        valido = 0;
        CpfCnpjValidator validador = new CpfCnpjValidator();
        Fornecedores Novo = new Fornecedores();
        aux = CNPJField.getText();
        
        if(valido == 0){
            if(!validador.isValid(aux) || aux.length() != 14){
                JOptionPane.showMessageDialog(null, "CNPJ invalido! Digite somente numeros.");
                valido = 0;
            }
            else if (aux.length() == 14){
                Novo.setCNPJ(aux);
                valido = 1;
            }
        }
        
        if (valido == 1 && funcao == 1){
            LerArquivo();
            Novo.setNome(NomeField.getText());
            Novo.setCNPJ(CNPJField.getText());
            Novo.setEmail(EmailField.getText());
            Novo.setTelefoneFixo(TelefoneField.getText());
            Novo.setFax(FaxField.getText());
            Lista.add(Novo);
            
            SalvarArquivo();

            AdicionarFornecedores.this.dispose();
        }
        
        if (valido == 1 && funcao == 2){
           LerArquivo();
            Novo.setNome(NomeField.getText());
            Novo.setCNPJ(CNPJField.getText());
            Novo.setEmail(EmailField.getText());
            Novo.setTelefoneFixo(TelefoneField.getText());
            Novo.setFax(FaxField.getText());
            Lista.set(pos, Novo);
            
            SalvarArquivo();
            
            AdicionarFornecedores.this.dispose();
        }
    }//GEN-LAST:event_AdicionarButtonActionPerformed

    private void TelefoneFieldActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_TelefoneFieldActionPerformed

    }//GEN-LAST:event_TelefoneFieldActionPerformed

    private void FaxFieldActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_FaxFieldActionPerformed

    }//GEN-LAST:event_FaxFieldActionPerformed

    public static void main(String args[]) {

        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new AdicionarFornecedores().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton AdicionarButton;
    private javax.swing.JTextField CNPJField;
    private javax.swing.JLabel CNPJText;
    private javax.swing.JButton CancelarButton;
    private javax.swing.JTextField EmailField;
    private javax.swing.JLabel EmailText;
    private javax.swing.JTextField FaxField;
    private javax.swing.JTextField NomeField;
    private javax.swing.JLabel NomeText;
    private javax.swing.JTextField TelefoneField;
    private javax.swing.JLabel TelefoneText;
    private javax.swing.JLabel jLabel4;
    // End of variables declaration//GEN-END:variables
}
