package GUI;


public class FramePrincipal extends javax.swing.JFrame {

    public FramePrincipal() {
        initComponents();
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jMenuBar1 = new javax.swing.JMenuBar();
        jMenu1 = new javax.swing.JMenu();
        ClienteButton = new javax.swing.JMenuItem();
        ProdutoButton = new javax.swing.JMenuItem();
        jMenu2 = new javax.swing.JMenu();
        VendaButton = new javax.swing.JMenuItem();
        ImprimirButton = new javax.swing.JMenuItem();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jMenu1.setText("Dados");

        ClienteButton.setText("Cliente");
        ClienteButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ClienteButtonActionPerformed(evt);
            }
        });
        jMenu1.add(ClienteButton);

        ProdutoButton.setText("Produto");
        ProdutoButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ProdutoButtonActionPerformed(evt);
            }
        });
        jMenu1.add(ProdutoButton);

        jMenuBar1.add(jMenu1);

        jMenu2.setText("Venda");

        VendaButton.setText("Nova Venda");
        VendaButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                VendaButtonActionPerformed(evt);
            }
        });
        jMenu2.add(VendaButton);

        ImprimirButton.setText("Imprimir Venda");
        ImprimirButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ImprimirButtonActionPerformed(evt);
            }
        });
        jMenu2.add(ImprimirButton);

        jMenuBar1.add(jMenu2);

        setJMenuBar(jMenuBar1);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 300, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGap(0, 277, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void ClienteButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ClienteButtonActionPerformed
        new FrameClientes().setVisible(true);
    }//GEN-LAST:event_ClienteButtonActionPerformed

    private void ProdutoButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ProdutoButtonActionPerformed
        new FrameProdutos().setVisible(true);
    }//GEN-LAST:event_ProdutoButtonActionPerformed

    private void VendaButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_VendaButtonActionPerformed
        new FrameVenda().setVisible(true);
    }//GEN-LAST:event_VendaButtonActionPerformed

    private void ImprimirButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_ImprimirButtonActionPerformed
        new ImprimirVenda().setVisible(true);
    }//GEN-LAST:event_ImprimirButtonActionPerformed

    public static void main(String args[]) {

        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new FramePrincipal().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JMenuItem ClienteButton;
    private javax.swing.JMenuItem ImprimirButton;
    private javax.swing.JMenuItem ProdutoButton;
    private javax.swing.JMenuItem VendaButton;
    private javax.swing.JMenu jMenu1;
    private javax.swing.JMenu jMenu2;
    private javax.swing.JMenuBar jMenuBar1;
    // End of variables declaration//GEN-END:variables
}
