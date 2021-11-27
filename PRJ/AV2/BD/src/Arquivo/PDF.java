package Arquivo;

import Classes.Venda;
import bd.ClientesBD;
import bd.ProdutosBD;
import bd.VendaBD;
import java.io.FileOutputStream;
import java.io.IOException;
import com.itextpdf.text.*;
import com.itextpdf.text.pdf.PdfWriter;
import java.util.ArrayList;

public class PDF {
    private ClientesBD bdc = new ClientesBD();
    private VendaBD bdv = new VendaBD();
    private ProdutosBD bdp = new ProdutosBD();
    private ArrayList<Venda> Lista = new ArrayList<Venda>();
    
    public void gerarPdf(String codigo) {
       Document document = new Document();
       Lista = bdv.buscarVenda(codigo);
       String arq = "C:\\Users\\henri\\Documents\\NetBeansProjects\\BD\\pdfs\\PDF_" + codigo + ".pdf";
       try {
           PdfWriter.getInstance(document, new FileOutputStream(arq));
           document.open();
           document.add(new Paragraph("Venda nº " + codigo + " ocorreu em: " + Lista.get(0).getData()));
           document.add(new Paragraph(" "));
           document.add(new Paragraph("Forma de pagamento: " + Lista.get(0).getPagamento()));
           if(Lista.get(0).getCliente().equals("-1"))
                document.add(new Paragraph("Cliente não registrado"));
            else
                document.add(new Paragraph("Cliente: " + bdc.buscaNome(Lista.get(0).getCliente())));
            document.add(new Paragraph("....................................................................................."));
            document.add(new Paragraph("Codigo | Produto | Valor unidade * Quantidade = Subtotal"));
            for(int i = 0; i < Lista.size(); i++)
                document.add(new Paragraph(Lista.get(i).getCodProduto()+" | "+bdp.buscaNome(Lista.get(i).getCodProduto())+" | " + bdp.buscaPreco(Lista.get(i).getCodProduto())+" * "+ Lista.get(i).getQtdProduto()+" = "+Lista.get(i).getTotalProduto()));
            document.add(new Paragraph("....................................................................................."));
            document.add(new Paragraph("Total da venda: " + Lista.get(0).getTotal()));
            Process p = Runtime.getRuntime().exec("cmd.exe /C" + arq);
     }
       catch(DocumentException de) {
           System.err.println(de.getMessage());
       }
       catch(IOException ioe) {
           System.err.println(ioe.getMessage());
       }
       document.close();
     }
}
