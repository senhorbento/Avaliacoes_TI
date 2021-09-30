package Adicionar;

import Classes.Clientes;
import Classes.CpfCnpjValidator;
import java.io.File;
import java.util.Formatter;
import java.util.Scanner;
import java.util.ArrayList;
import javax.swing.JOptionPane;


public class AdicionarClientes extends javax.swing.JFrame {
    ArrayList<Clientes> Lista = new ArrayList<Clientes>();
    int funcao, pos;
    public AdicionarClientes() {
        initComponents();
        funcao = 1;
    }
    
    public AdicionarClientes(Clientes modify, int indice){
        String aux;
        initComponents();
        NomeField.setText(modify.getNome());
        aux = modify.getCNPJ();
        if(aux.equals("vazio"))
            CNPJ_CPF_Field.setText(modify.getCPF());
        else
            CNPJ_CPF_Field.setText(aux);
        FaxField.setText(modify.getFax());
        TelefoneResidencialField.setText(modify.getTelefoneResidencial());
        TelefoneTrabalhoField.setText(modify.getTelefoneTrabalho());
        TelefoneCelularField.setText(modify.getTelefoneCelular());
        funcao = 2; pos = indice;
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        CancelarButton = new javax.swing.JButton();
        AdicionarButton = new javax.swing.JButton();
        EmailText = new javax.swing.JLabel();
        CNPJ_CPF_Field = new javax.swing.JTextField();
        NomeField = new javax.swing.JTextField();
        NomeText = new javax.swing.JLabel();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        TelefoneResidencialField = new javax.swing.JTextField();
        TelefoneTrabalhoField = new javax.swing.JTextField();
        TelefoneCelularField = new javax.swing.JTextField();
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

        EmailText.setText("CNPJ / CPF");

        CNPJ_CPF_Field.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                CNPJ_CPF_FieldActionPerformed(evt);
            }
        });

        NomeField.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                NomeFieldActionPerformed(evt);
            }
        });

        NomeText.setText("Nome");

        jLabel1.setText("Telefone Residencial");

        jLabel2.setText("Telefone Trabalho");

        jLabel3.setText("Telefone Celular");

        jLabel4.setText("FAX");

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
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(jLabel2)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(TelefoneTrabalhoField, javax.swing.GroupLayout.PREFERRED_SIZE, 230, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addComponent(jLabel4)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(FaxField, javax.swing.GroupLayout.PREFERRED_SIZE, 229, javax.swing.GroupLayout.PREFERRED_SIZE))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addGap(0, 0, Short.MAX_VALUE)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                            .addGroup(layout.createSequentialGroup()
                                .addComponent(jLabel1)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 54, Short.MAX_VALUE)
                                .addComponent(TelefoneResidencialField, javax.swing.GroupLayout.PREFERRED_SIZE, 229, javax.swing.GroupLayout.PREFERRED_SIZE))
                            .addGroup(javax.swing.GroupLayout.Alignment.LEADING, layout.createSequentialGroup()
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(EmailText)
                                    .addComponent(NomeText))
                                .addGap(98, 98, 98)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(CNPJ_CPF_Field, javax.swing.GroupLayout.Alignment.TRAILING)
                                    .addComponent(NomeField)))))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addComponent(jLabel3)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(layout.createSequentialGroup()
                                .addComponent(AdicionarButton)
                                .addGap(18, 18, 18)
                                .addComponent(CancelarButton))
                            .addComponent(TelefoneCelularField, javax.swing.GroupLayout.PREFERRED_SIZE, 230, javax.swing.GroupLayout.PREFERRED_SIZE))))
                .addGap(36, 36, 36))
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
                    .addComponent(CNPJ_CPF_Field, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel4)
                    .addComponent(FaxField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(TelefoneResidencialField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel1))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel2)
                    .addComponent(TelefoneTrabalhoField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel3)
                    .addComponent(TelefoneCelularField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 24, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(AdicionarButton)
                    .addComponent(CancelarButton))
                .addGap(37, 37, 37))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void CancelarButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_CancelarButtonActionPerformed
        AdicionarClientes.this.dispose();
    }//GEN-LAST:event_CancelarButtonActionPerformed
    
    private void LerArquivo(){
        Lista.clear();
            Scanner entrada = null;
            try{
                try{
                    entrada = new Scanner( new File("Clientes.txt"));
                    while (entrada.hasNext()){
                        Clientes leitura = new Clientes();
                        leitura.setNome(entrada.next());
                        leitura.setCNPJ(entrada.next());
                        leitura.setCPF(entrada.next());
                        leitura.setTelefoneResidencial(entrada.next());
                        leitura.setTelefoneTrabalho(entrada.next());
                        leitura.setTelefoneCelular(entrada.next());
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
                    saida = new Formatter("Clientes.txt");
                    for (int i = 0; i < Lista.size(); i++){
                        Clientes cliente = Lista.get(i);
                            saida.format("%s %s %s %s %s %s %s\n", cliente.getNome(), cliente.getCNPJ(), cliente.getCPF(), cliente.getTelefoneResidencial(), 
                            cliente.getTelefoneTrabalho(), cliente.getTelefoneCelular(), cliente.getFax());
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
        Clientes Novo = new Clientes();
        CpfCnpjValidator validador = new CpfCnpjValidator();
        aux = CNPJ_CPF_Field.getText();

        if(valido == 0){
            if(!validador.isValid(aux) || aux.length() < 11 || aux.length() > 14){
                JOptionPane.showMessageDialog(null, "CNPJ/CPF invalido! Digite somente numeros.");
                valido = 0;
            }
            else if (aux.length() == 11){
                Novo.setCPF(aux);
                Novo.setCNPJ("vazio");
                valido = 1;
            }
            else if (aux.length() == 14){
                Novo.setCPF("vazio");
                Novo.setCNPJ(aux);
                valido = 1;
            }
        }
        if (valido == 1 && funcao == 1){
            LerArquivo();
            
            Novo.setNome(NomeField.getText());
            Novo.setFax(FaxField.getText());
            Novo.setTelefoneResidencial(TelefoneResidencialField.getText());
            Novo.setTelefoneTrabalho(TelefoneTrabalhoField.getText());
            Novo.setTelefoneCelular(TelefoneCelularField.getText());
            Lista.add(Novo);
            
            SalvarArquivo();

            AdicionarClientes.this.dispose();
        }
        if (valido == 1 && funcao == 2){
            LerArquivo();
            
            Novo.setNome(NomeField.getText());
            Novo.setFax(FaxField.getText());
            Novo.setTelefoneResidencial(TelefoneResidencialField.getText());
            Novo.setTelefoneTrabalho(TelefoneTrabalhoField.getText());
            Novo.setTelefoneCelular(TelefoneCelularField.getText());
            Lista.set(pos, Novo);
            
            SalvarArquivo();

            AdicionarClientes.this.dispose();
        }
    }//GEN-LAST:event_AdicionarButtonActionPerformed

    private void TelefoneCelularFieldActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_TelefoneCelularFieldActionPerformed

    }//GEN-LAST:event_TelefoneCelularFieldActionPerformed

    private void NomeFieldActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_NomeFieldActionPerformed
        
    }//GEN-LAST:event_NomeFieldActionPerformed

    private void CNPJ_CPF_FieldActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_CNPJ_CPF_FieldActionPerformed

    }//GEN-LAST:event_CNPJ_CPF_FieldActionPerformed
    
    public static void main(String args[]) {
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new AdicionarClientes().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton AdicionarButton;
    private javax.swing.JTextField CNPJ_CPF_Field;
    private javax.swing.JButton CancelarButton;
    private javax.swing.JLabel EmailText;
    private javax.swing.JTextField FaxField;
    private javax.swing.JTextField NomeField;
    private javax.swing.JLabel NomeText;
    private javax.swing.JTextField TelefoneCelularField;
    private javax.swing.JTextField TelefoneResidencialField;
    private javax.swing.JTextField TelefoneTrabalhoField;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    // End of variables declaration//GEN-END:variables

}
