package FramesPrincipais;

import Adicionar.AdicionarClientes;
import Classes.Clientes;
import java.io.File;
import java.util.ArrayList;
import java.util.Formatter;
import java.util.Scanner;
import javax.swing.table.DefaultTableModel;
import javax.swing.JOptionPane;
import javax.swing.RowFilter;
import javax.swing.table.TableRowSorter;

public class FrameClientes extends javax.swing.JFrame {
    ArrayList<Clientes> Lista = new ArrayList<Clientes>();

    public FrameClientes() {
        initComponents();
        lerArquivo();
        updateRow();
    }
    
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jScrollPane1 = new javax.swing.JScrollPane();
        TableClientes = new javax.swing.JTable();
        AdicionaButton = new javax.swing.JButton();
        AlterarButton = new javax.swing.JButton();
        ExcluirButton = new javax.swing.JButton();
        AtualizarButton = new javax.swing.JButton();
        BuscarField = new javax.swing.JTextField();
        jLabel1 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);

        TableClientes.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {
                "Nome", "CNPJ", "CPF", "Telefone", "Telefone", "Telefone", "Fax"
            }
        ) {
            boolean[] canEdit = new boolean [] {
                false, false, false, false, false, false, true
            };

            public boolean isCellEditable(int rowIndex, int columnIndex) {
                return canEdit [columnIndex];
            }
        });
        jScrollPane1.setViewportView(TableClientes);

        AdicionaButton.setText("Adicionar");
        AdicionaButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                AdicionaButtonActionPerformed(evt);
            }
        });

        AlterarButton.setText("Alterar");
        AlterarButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                AlterarButtonActionPerformed(evt);
            }
        });

        ExcluirButton.setText("Excluir");
        ExcluirButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ExcluirButtonActionPerformed(evt);
            }
        });

        AtualizarButton.setText("Atualizar");
        AtualizarButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                AtualizarButtonActionPerformed(evt);
            }
        });

        BuscarField.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                BuscarFieldActionPerformed(evt);
            }
        });
        BuscarField.addKeyListener(new java.awt.event.KeyAdapter() {
            public void keyPressed(java.awt.event.KeyEvent evt) {
                BuscarFieldKeyPressed(evt);
            }
        });

        jLabel1.setText("Buscar:");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 780, Short.MAX_VALUE)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(AdicionaButton)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(AlterarButton)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(ExcluirButton)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(AtualizarButton)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(jLabel1)
                        .addGap(18, 18, 18)
                        .addComponent(BuscarField, javax.swing.GroupLayout.PREFERRED_SIZE, 300, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 389, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 46, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(AdicionaButton)
                    .addComponent(AlterarButton)
                    .addComponent(ExcluirButton)
                    .addComponent(AtualizarButton)
                    .addComponent(BuscarField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel1))
                .addGap(31, 31, 31))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void AdicionaButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_AdicionaButtonActionPerformed
       new AdicionarClientes().setVisible(true);
    }//GEN-LAST:event_AdicionaButtonActionPerformed

    private void AtualizarButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_AtualizarButtonActionPerformed
        lerArquivo();
        updateRow();
    }//GEN-LAST:event_AtualizarButtonActionPerformed

    private void AlterarButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_AlterarButtonActionPerformed
        new AdicionarClientes(Lista.get(TableClientes.getSelectedRow()),TableClientes.getSelectedRow()).setVisible(true);
    }//GEN-LAST:event_AlterarButtonActionPerformed

    private void BuscarFieldActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BuscarFieldActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_BuscarFieldActionPerformed

    private void ExcluirButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ExcluirButtonActionPerformed
        switch(FrameConfirmacao()){
            case 0:
                int linha = TableClientes.getSelectedRow();
                DefaultTableModel model = (DefaultTableModel)TableClientes.getModel();
                model.removeRow(TableClientes.getSelectedRow());
                TableClientes.setModel(model);
                Lista.remove(linha);
                gravarArquivo();
                break;
            case 1:  
                break;
        }    
    }//GEN-LAST:event_ExcluirButtonActionPerformed

    private void BuscarFieldKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_BuscarFieldKeyPressed
        DefaultTableModel model = (DefaultTableModel) TableClientes.getModel();
        TableRowSorter<DefaultTableModel> tr = new TableRowSorter<DefaultTableModel>(model);
        TableClientes.setRowSorter(tr);
        tr.setRowFilter(RowFilter.regexFilter(BuscarField.getText().trim()));
    }//GEN-LAST:event_BuscarFieldKeyPressed
    
    public static int FrameConfirmacao(){
        return JOptionPane.showConfirmDialog(null,"Confirma a exclusao?","Excluir",JOptionPane.YES_NO_OPTION);
    }

    private void lerArquivo(){
        Scanner entrada = null;
        String aux;
        Lista.clear();
        try{
            try{
                entrada = new Scanner( new File("Clientes.txt"));
                while (entrada.hasNext()){
                    Clientes leitura = new Clientes();
                    leitura.setNome(entrada.next());
                    aux = entrada.next();
                    if(aux.equals("vazio"))
                        leitura.setCNPJ("");
                    else
                        leitura.setCNPJ(aux);
                    
                    aux = entrada.next();
                    if(aux.equals("vazio"))
                        leitura.setCPF("");
                    else
                        leitura.setCPF(aux);
                    
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
    
    private void updateRow(){
        DefaultTableModel model = (DefaultTableModel) TableClientes.getModel();
        ((DefaultTableModel)TableClientes.getModel()).setNumRows(0);
        Object rowData[] = new Object[7];
        for(int i = 0; i < Lista.size();i++){
            rowData[0] = Lista.get(i).getNome();
            rowData[1] = Lista.get(i).getCNPJ();
            rowData[2] = Lista.get(i).getCPF();
            rowData[3] = Lista.get(i).getTelefoneResidencial();
            rowData[4] = Lista.get(i).getTelefoneTrabalho();
            rowData[5] = Lista.get(i).getTelefoneCelular();
            rowData[6] = Lista.get(i).getFax();
            model.addRow(rowData);
        }
    }
    
    private void gravarArquivo(){
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
    
    public static void main(String args[]) {

        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new FrameClientes().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton AdicionaButton;
    private javax.swing.JButton AlterarButton;
    private javax.swing.JButton AtualizarButton;
    private javax.swing.JTextField BuscarField;
    private javax.swing.JButton ExcluirButton;
    private javax.swing.JTable TableClientes;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JScrollPane jScrollPane1;
    // End of variables declaration//GEN-END:variables
}
