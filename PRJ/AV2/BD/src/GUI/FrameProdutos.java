package GUI;

import java.util.ArrayList;

import Adicionar.AdicionarProduto;
import Classes.Produto;
import static GUI.FrameClientes.FrameConfirmacao;
import bd.ProdutosBD;

import javax.swing.RowFilter;
import javax.swing.table.DefaultTableModel;
import javax.swing.table.TableRowSorter;

public class FrameProdutos extends javax.swing.JFrame {
    private ArrayList<Produto> Lista = new ArrayList<Produto>();
    private ProdutosBD bd = new ProdutosBD();    
    
    public FrameProdutos() {
        initComponents();
        Lista = bd.lerBancoProdutos();
        updateRow();
    }
    
    private void updateRow(){
        DefaultTableModel model = (DefaultTableModel) TableProdutos.getModel();
        ((DefaultTableModel)TableProdutos.getModel()).setNumRows(0);
        Object rowData[] = new Object[6];
        for(int i = 0; i < Lista.size();i++){
            rowData[0] = Lista.get(i).getCodigo();
            rowData[1] = Lista.get(i).getNome();
            rowData[2] = Lista.get(i).getUnidade();
            rowData[3] = Lista.get(i).getPreco();
            rowData[4] = Lista.get(i).getQuantidade();
            rowData[5] = Lista.get(i).getData();
            model.addRow(rowData);
        }
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jScrollPane1 = new javax.swing.JScrollPane();
        TableProdutos = new javax.swing.JTable();
        AdicionaButton = new javax.swing.JButton();
        AlterarButton = new javax.swing.JButton();
        ExcluirButton = new javax.swing.JButton();
        BuscarField = new javax.swing.JTextField();
        jLabel1 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);

        TableProdutos.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {

            },
            new String [] {
                "Código", "Nome", "Unidade", "Preço", "Quantidade", "Ultima Venda"
            }
        ) {
            boolean[] canEdit = new boolean [] {
                false, false, false, false, false, false
            };

            public boolean isCellEditable(int rowIndex, int columnIndex) {
                return canEdit [columnIndex];
            }
        });
        jScrollPane1.setViewportView(TableProdutos);

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
                    .addComponent(jScrollPane1)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(AdicionaButton)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(AlterarButton)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(ExcluirButton)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 88, Short.MAX_VALUE)
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
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 52, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(AdicionaButton)
                    .addComponent(AlterarButton)
                    .addComponent(ExcluirButton)
                    .addComponent(BuscarField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jLabel1))
                .addGap(31, 31, 31))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void AdicionaButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_AdicionaButtonActionPerformed
        new AdicionarProduto(this,true).setVisible(true);
        Lista = bd.lerBancoProdutos();
        updateRow();
    }//GEN-LAST:event_AdicionaButtonActionPerformed

    private void AlterarButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_AlterarButtonActionPerformed
        new AdicionarProduto(this,true,Lista.get(TableProdutos.getSelectedRow())).setVisible(true);
        Lista = bd.lerBancoProdutos();
        updateRow();
    }//GEN-LAST:event_AlterarButtonActionPerformed
       
    private void ExcluirButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ExcluirButtonActionPerformed
        switch(FrameConfirmacao("Confirma a exclusão?")){
            case 0:
                int linha = TableProdutos.getSelectedRow();
                String codigo = String.valueOf(TableProdutos.getValueAt(linha, 0));
                DefaultTableModel model = (DefaultTableModel)TableProdutos.getModel();

                bd.excluirProduto(codigo);
                Lista = bd.lerBancoProdutos();
                break;
            case 1:
                break;
        }
        updateRow();
    }//GEN-LAST:event_ExcluirButtonActionPerformed

    private void BuscarFieldActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_BuscarFieldActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_BuscarFieldActionPerformed

    private void BuscarFieldKeyPressed(java.awt.event.KeyEvent evt) {//GEN-FIRST:event_BuscarFieldKeyPressed
        DefaultTableModel model = (DefaultTableModel) TableProdutos.getModel();
        TableRowSorter<DefaultTableModel> tr = new TableRowSorter<DefaultTableModel>(model);
        TableProdutos.setRowSorter(tr);
        tr.setRowFilter(RowFilter.regexFilter(BuscarField.getText().trim()));
    }//GEN-LAST:event_BuscarFieldKeyPressed

    public static void main(String args[]) {

        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new FrameProdutos().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton AdicionaButton;
    private javax.swing.JButton AlterarButton;
    private javax.swing.JTextField BuscarField;
    private javax.swing.JButton ExcluirButton;
    private javax.swing.JTable TableProdutos;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JScrollPane jScrollPane1;
    // End of variables declaration//GEN-END:variables
}
