package FramesPrincipais;

import Adicionar.AdicionarPessoais;
import Classes.Pessoais;
import java.io.File;
import java.util.ArrayList;
import java.util.Formatter;
import java.util.Scanner;
import javax.swing.JOptionPane;
import javax.swing.RowFilter;
import javax.swing.table.DefaultTableModel;
import javax.swing.table.TableRowSorter;

public class FramePessoais extends javax.swing.JFrame {
    ArrayList<Pessoais> Lista = new ArrayList<Pessoais>();
    public FramePessoais() {
        initComponents();
        lerArquivo();
        updateRow();
    }
    
    public static int FrameConfirmacao(){
        return JOptionPane.showConfirmDialog(null,"Confirma a exclusao?","Excluir",JOptionPane.YES_NO_OPTION);
    }
    
    private void lerArquivo(){
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
    
    private void updateRow(){
        DefaultTableModel model = (DefaultTableModel) TablePessoais.getModel();
        ((DefaultTableModel)TablePessoais.getModel()).setNumRows(0);
        Object rowData[] = new Object[4];
        for(int i = 0; i < Lista.size();i++){
            rowData[0] = Lista.get(i).getNome();
            rowData[1] = Lista.get(i).getEmail();
            rowData[2] = Lista.get(i).getTelefoneFixo();
            rowData[3] = Lista.get(i).getTelefoneCelular();
            model.addRow(rowData);
        }
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jScrollPane1 = new javax.swing.JScrollPane();
        TablePessoais = new javax.swing.JTable();
        AdicionaButton = new javax.swing.JButton();
        AlterarButton = new javax.swing.JButton();
        ExcluirButton = new javax.swing.JButton();
        AtualizarButton = new javax.swing.JButton();
        BuscarField = new javax.swing.JTextField();
        jLabel1 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);

        TablePessoais.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {
                "Nome", "Email", "Telefone", "Telefone"
            }
        ) {
            boolean[] canEdit = new boolean [] {
                false, false, false, false
            };

            public boolean isCellEditable(int rowIndex, int columnIndex) {
                return canEdit [columnIndex];
            }
        });
        jScrollPane1.setViewportView(TablePessoais);

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
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(AtualizarButton)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(jLabel1)
                        .addGap(18, 18, 18)
                        .addComponent(BuscarField, javax.swing.GroupLayout.PREFERRED_SIZE, 301, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 389, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(AdicionaButton)
                            .addComponent(AlterarButton)
                            .addComponent(ExcluirButton)
                            .addComponent(AtualizarButton))
                        .addGap(31, 31, 31))
                    .addGroup(layout.createSequentialGroup()
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(BuscarField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(jLabel1))
                        .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void AdicionaButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_AdicionaButtonActionPerformed
        new AdicionarPessoais().setVisible(true);
    }//GEN-LAST:event_AdicionaButtonActionPerformed

    private void AtualizarButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_AtualizarButtonActionPerformed
        lerArquivo();
        updateRow();
    }//GEN-LAST:event_AtualizarButtonActionPerformed

    private void ExcluirButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ExcluirButtonActionPerformed
        switch(FrameConfirmacao()){
            case 0:
                int linha = TablePessoais.getSelectedRow();
                DefaultTableModel model = (DefaultTableModel)TablePessoais.getModel();
                model.removeRow(TablePessoais.getSelectedRow());
                TablePessoais.setModel(model);
                Lista.remove(linha);
                SalvarArquivo();
                break;
            case 1:  
                break;
        }
    }//GEN-LAST:event_ExcluirButtonActionPerformed

    private void AlterarButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_AlterarButtonActionPerformed
        new AdicionarPessoais(Lista.get(TablePessoais.getSelectedRow()),TablePessoais.getSelectedRow()).setVisible(true);
    }//GEN-LAST:event_AlterarButtonActionPerformed

    private void BuscarFieldKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_BuscarFieldKeyPressed
        DefaultTableModel model = (DefaultTableModel) TablePessoais.getModel();
        TableRowSorter<DefaultTableModel> tr = new TableRowSorter<DefaultTableModel>(model);
        TablePessoais.setRowSorter(tr);
        tr.setRowFilter(RowFilter.regexFilter(BuscarField.getText().trim()));
    }//GEN-LAST:event_BuscarFieldKeyPressed

    public static void main(String args[]) {
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new FramePessoais().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton AdicionaButton;
    private javax.swing.JButton AlterarButton;
    private javax.swing.JButton AtualizarButton;
    private javax.swing.JTextField BuscarField;
    private javax.swing.JButton ExcluirButton;
    private javax.swing.JTable TablePessoais;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JScrollPane jScrollPane1;
    // End of variables declaration//GEN-END:variables
}
