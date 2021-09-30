package FramesPrincipais;

import FramesPrincipais.*;

public class FramePrincipal extends javax.swing.JFrame {

    public FramePrincipal() {
        initComponents();
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        BarraDeMenus = new javax.swing.JMenuBar();
        CadastroButton = new javax.swing.JMenu();
        ClientesButton = new javax.swing.JMenuItem();
        FornecedoresButton = new javax.swing.JMenuItem();
        OutrosButton = new javax.swing.JMenuItem();
        PessoaisButton = new javax.swing.JMenuItem();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        CadastroButton.setText("Cadastro");

        ClientesButton.setText("Clientes");
        ClientesButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ClientesButtonActionPerformed(evt);
            }
        });
        CadastroButton.add(ClientesButton);

        FornecedoresButton.setText("Fornecedores");
        FornecedoresButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                FornecedoresButtonActionPerformed(evt);
            }
        });
        CadastroButton.add(FornecedoresButton);

        OutrosButton.setText("Outros");
        OutrosButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                OutrosButtonActionPerformed(evt);
            }
        });
        CadastroButton.add(OutrosButton);

        PessoaisButton.setText("Pessoais");
        PessoaisButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                PessoaisButtonActionPerformed(evt);
            }
        });
        CadastroButton.add(PessoaisButton);

        BarraDeMenus.add(CadastroButton);

        setJMenuBar(BarraDeMenus);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 300, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 279, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void ClientesButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ClientesButtonActionPerformed
       new FrameClientes().setVisible(true);
    }//GEN-LAST:event_ClientesButtonActionPerformed

    private void FornecedoresButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_FornecedoresButtonActionPerformed
        new FrameFornecedores().setVisible(true);
    }//GEN-LAST:event_FornecedoresButtonActionPerformed

    private void OutrosButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_OutrosButtonActionPerformed
        new FrameOutros().setVisible(true);
    }//GEN-LAST:event_OutrosButtonActionPerformed

    private void PessoaisButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_PessoaisButtonActionPerformed
        new FramePessoais().setVisible(true);
    }//GEN-LAST:event_PessoaisButtonActionPerformed

    public static void main(String args[]) {
        
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new FramePrincipal().setVisible(true);
            }
        });
        
    }
    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JMenuBar BarraDeMenus;
    private javax.swing.JMenu CadastroButton;
    private javax.swing.JMenuItem ClientesButton;
    private javax.swing.JMenuItem FornecedoresButton;
    private javax.swing.JMenuItem OutrosButton;
    private javax.swing.JMenuItem PessoaisButton;
    // End of variables declaration//GEN-END:variables
}
