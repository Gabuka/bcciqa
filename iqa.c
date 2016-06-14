#include <gtk/gtk.h>
#include <stdlib.h>
#include <stdio.h>
#include "iqaf.h"

static void callback (GtkDialog *caixa_dialogo,
             gint       response_id,
             gpointer   user_data)
{
  g_print ("Salvo!!\n");
  gtk_widget_destroy (GTK_WIDGET (caixa_dialogo));
}

static void exibir_dialogo (GtkButton *button,
             gpointer   user_data)
{
  GtkWindow *window = user_data;
  GtkWidget *caixa_dialogo;
  GtkWidget *conteudo;
  GtkWidget *rotulo;

  gint response_id;

  caixa_dialogo = gtk_dialog_new_with_buttons ("Arquivo salvo", window, GTK_DIALOG_MODAL, "_OK", GTK_RESPONSE_OK, NULL);
    
  conteudo = gtk_dialog_get_content_area (GTK_DIALOG (caixa_dialogo));
  rotulo = gtk_label_new ("Seu arquivo foi salvo com sucesso!");
  gtk_container_add (GTK_CONTAINER (conteudo), rotulo);

  gtk_widget_show_all (caixa_dialogo);
  
  g_signal_connect (GTK_DIALOG (caixa_dialogo), "response", G_CALLBACK (callback), NULL);

}

void saveData(GtkButton *btn_salvar, GObject *objeto_entrada) {

    GtkEntry *data_entrada1 = g_object_get_data (objeto_entrada, "entrada1");
    GtkEntry *data_entrada2 = g_object_get_data (objeto_entrada, "entrada2");
    GtkEntry *data_entrada3 = g_object_get_data (objeto_entrada, "entrada3");
    GtkEntry *data_entrada4 = g_object_get_data (objeto_entrada, "entrada4");
    GtkEntry *data_entrada5 = g_object_get_data (objeto_entrada, "entrada5");
    GtkEntry *data_entrada6 = g_object_get_data (objeto_entrada, "entrada6");
    GtkEntry *data_entrada7 = g_object_get_data (objeto_entrada, "entrada7");
    GtkEntry *data_entrada8 = g_object_get_data (objeto_entrada, "entrada8");
    GtkEntry *data_entrada9 = g_object_get_data (objeto_entrada, "entrada9");
    GtkEntry *data_entryPeso1 = g_object_get_data (objeto_entrada, "entryPeso1");
    GtkEntry *data_entryPeso2 = g_object_get_data (objeto_entrada, "entryPeso2");
    GtkEntry *data_entryPeso3 = g_object_get_data (objeto_entrada, "entryPeso3");
    GtkEntry *data_entryPeso4 = g_object_get_data (objeto_entrada, "entryPeso4");
    GtkEntry *data_entryPeso5 = g_object_get_data (objeto_entrada, "entryPeso5");
    GtkEntry *data_entryPeso6 = g_object_get_data (objeto_entrada, "entryPeso6");
    GtkEntry *data_entryPeso7 = g_object_get_data (objeto_entrada, "entryPeso7");
    GtkEntry *data_entryPeso8 = g_object_get_data (objeto_entrada, "entryPeso8");
    GtkEntry *data_entryPeso9 = g_object_get_data (objeto_entrada, "entryPeso9");

    FILE *fp;
    fp = fopen("data.txt", "w");
    fprintf(fp, "%s\n", gtk_entry_get_text(data_entrada1));
    fprintf(fp, "%s\n", gtk_entry_get_text(data_entrada2));
    fprintf(fp, "%s\n", gtk_entry_get_text(data_entrada3));
    fprintf(fp, "%s\n", gtk_entry_get_text(data_entrada4));
    fprintf(fp, "%s\n", gtk_entry_get_text(data_entrada5));
    fprintf(fp, "%s\n", gtk_entry_get_text(data_entrada6));
    fprintf(fp, "%s\n", gtk_entry_get_text(data_entrada7));
    fprintf(fp, "%s\n", gtk_entry_get_text(data_entrada8));
    fprintf(fp, "%s\n", gtk_entry_get_text(data_entrada9));

    fprintf(fp, "%s\n", gtk_entry_get_text(data_entryPeso1));
    fprintf(fp, "%s\n", gtk_entry_get_text(data_entryPeso2));
    fprintf(fp, "%s\n", gtk_entry_get_text(data_entryPeso3));
    fprintf(fp, "%s\n", gtk_entry_get_text(data_entryPeso4));
    fprintf(fp, "%s\n", gtk_entry_get_text(data_entryPeso5));
    fprintf(fp, "%s\n", gtk_entry_get_text(data_entryPeso6));
    fprintf(fp, "%s\n", gtk_entry_get_text(data_entryPeso7));
    fprintf(fp, "%s\n", gtk_entry_get_text(data_entryPeso8));
    fprintf(fp, "%s\n", gtk_entry_get_text(data_entryPeso9));
    fclose(fp);
}


void entry_load(GtkButton *btn_load, GObject *objeto_entrada){


    //char *str = g_strdup_printf("%.5lf", q[0]);
    GtkEntry *data_entrada1 = g_object_get_data (objeto_entrada, "entrada1");
    GtkEntry *data_entrada2 = g_object_get_data (objeto_entrada, "entrada2");
    GtkEntry *data_entrada3 = g_object_get_data (objeto_entrada, "entrada3");
    GtkEntry *data_entrada4 = g_object_get_data (objeto_entrada, "entrada4");
    GtkEntry *data_entrada5 = g_object_get_data (objeto_entrada, "entrada5");
    GtkEntry *data_entrada6 = g_object_get_data (objeto_entrada, "entrada6");
    GtkEntry *data_entrada7 = g_object_get_data (objeto_entrada, "entrada7");
    GtkEntry *data_entrada8 = g_object_get_data (objeto_entrada, "entrada8");
    GtkEntry *data_entrada9 = g_object_get_data (objeto_entrada, "entrada9");
    GtkEntry *data_entryPeso1 = g_object_get_data (objeto_entrada, "entryPeso1");
    GtkEntry *data_entryPeso2 = g_object_get_data (objeto_entrada, "entryPeso2");
    GtkEntry *data_entryPeso3 = g_object_get_data (objeto_entrada, "entryPeso3");
    GtkEntry *data_entryPeso4 = g_object_get_data (objeto_entrada, "entryPeso4");
    GtkEntry *data_entryPeso5 = g_object_get_data (objeto_entrada, "entryPeso5");
    GtkEntry *data_entryPeso6 = g_object_get_data (objeto_entrada, "entryPeso6");
    GtkEntry *data_entryPeso7 = g_object_get_data (objeto_entrada, "entryPeso7");
    GtkEntry *data_entryPeso8 = g_object_get_data (objeto_entrada, "entryPeso8");
    GtkEntry *data_entryPeso9 = g_object_get_data (objeto_entrada, "entryPeso9");

    double q[9];
    double pesos[9];
    
    FILE *fp;
    fp = fopen("data.txt","r");
    if(fp == NULL)
    {
        printf("Error: Não foi possível carregar os valores de entrada.\n");
        return;
    }

    int i;

    for (i = 0; i<9;i++)
    {
        fscanf(fp,"%lf",&q[i]);
    }

    for (i = 0; i<9;i++)
    {
        fscanf(fp,"%lf",&pesos[i]);
    }

    

    gtk_entry_set_text(GTK_ENTRY(data_entrada1), g_strdup_printf("%.1lf", q[0]));
    gtk_entry_set_text(GTK_ENTRY(data_entrada2), g_strdup_printf("%.1lf", q[1]));
    gtk_entry_set_text(GTK_ENTRY(data_entrada3), g_strdup_printf("%.1lf", q[2]));
    gtk_entry_set_text(GTK_ENTRY(data_entrada4), g_strdup_printf("%.2lf", q[3]));
    gtk_entry_set_text(GTK_ENTRY(data_entrada5), g_strdup_printf("%.3lf", q[4]));
    gtk_entry_set_text(GTK_ENTRY(data_entrada6), g_strdup_printf("%.1lf", q[5]));
    gtk_entry_set_text(GTK_ENTRY(data_entrada7), g_strdup_printf("%.1lf", q[6]));
    gtk_entry_set_text(GTK_ENTRY(data_entrada8), g_strdup_printf("%.1lf", q[7]));
    gtk_entry_set_text(GTK_ENTRY(data_entrada9), g_strdup_printf("%.1lf", q[8]));

    gtk_entry_set_text(GTK_ENTRY(data_entryPeso1), g_strdup_printf("%.2lf", pesos[0]));
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso2), g_strdup_printf("%.2lf", pesos[1]));
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso3), g_strdup_printf("%.2lf", pesos[2]));
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso4), g_strdup_printf("%.2lf", pesos[3]));
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso5), g_strdup_printf("%.2lf", pesos[4]));
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso6), g_strdup_printf("%.2lf", pesos[5]));
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso7), g_strdup_printf("%.2lf", pesos[6]));
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso8), g_strdup_printf("%.2lf", pesos[7]));
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso9), g_strdup_printf("%.2lf", pesos[8]));


    fclose(fp);
    
}

void resetar(GtkButton *btn_resetar, GObject *objeto_entrada){
    GtkEntry *data_entrada1 = g_object_get_data (objeto_entrada, "entrada1");
    GtkEntry *data_entrada2 = g_object_get_data (objeto_entrada, "entrada2");
    GtkEntry *data_entrada3 = g_object_get_data (objeto_entrada, "entrada3");
    GtkEntry *data_entrada4 = g_object_get_data (objeto_entrada, "entrada4");
    GtkEntry *data_entrada5 = g_object_get_data (objeto_entrada, "entrada5");
    GtkEntry *data_entrada6 = g_object_get_data (objeto_entrada, "entrada6");
    GtkEntry *data_entrada7 = g_object_get_data (objeto_entrada, "entrada7");
    GtkEntry *data_entrada8 = g_object_get_data (objeto_entrada, "entrada8");
    GtkEntry *data_entrada9 = g_object_get_data (objeto_entrada, "entrada9");
    GtkEntry *data_entryPeso1 = g_object_get_data (objeto_entrada, "entryPeso1");
    GtkEntry *data_entryPeso2 = g_object_get_data (objeto_entrada, "entryPeso2");
    GtkEntry *data_entryPeso3 = g_object_get_data (objeto_entrada, "entryPeso3");
    GtkEntry *data_entryPeso4 = g_object_get_data (objeto_entrada, "entryPeso4");
    GtkEntry *data_entryPeso5 = g_object_get_data (objeto_entrada, "entryPeso5");
    GtkEntry *data_entryPeso6 = g_object_get_data (objeto_entrada, "entryPeso6");
    GtkEntry *data_entryPeso7 = g_object_get_data (objeto_entrada, "entryPeso7");
    GtkEntry *data_entryPeso8 = g_object_get_data (objeto_entrada, "entryPeso8");
    GtkEntry *data_entryPeso9 = g_object_get_data (objeto_entrada, "entryPeso9");

    gtk_entry_set_text(GTK_ENTRY(data_entrada1), "");
    gtk_entry_set_text(GTK_ENTRY(data_entrada2), "");
    gtk_entry_set_text(GTK_ENTRY(data_entrada3), "");
    gtk_entry_set_text(GTK_ENTRY(data_entrada4), "");
    gtk_entry_set_text(GTK_ENTRY(data_entrada5), "");
    gtk_entry_set_text(GTK_ENTRY(data_entrada6), "");
    gtk_entry_set_text(GTK_ENTRY(data_entrada7), "");
    gtk_entry_set_text(GTK_ENTRY(data_entrada8), "");
    gtk_entry_set_text(GTK_ENTRY(data_entrada9), "");
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso1), "0.15");
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso2), "0.12");
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso3), "0.10");
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso4), "0.10");
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso5), "0.10");
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso6), "0.10");
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso7), "0.08");
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso8), "0.17");
    gtk_entry_set_text(GTK_ENTRY(data_entryPeso9), "0.08");

}



void botao (GtkButton *button, GObject *objeto_entrada) {

    GtkEntry *data_entrada1 = g_object_get_data (objeto_entrada, "entrada1");
    GtkEntry *data_entrada2 = g_object_get_data (objeto_entrada, "entrada2");
    GtkEntry *data_entrada3 = g_object_get_data (objeto_entrada, "entrada3");
    GtkEntry *data_entrada4 = g_object_get_data (objeto_entrada, "entrada4");
    GtkEntry *data_entrada5 = g_object_get_data (objeto_entrada, "entrada5");
    GtkEntry *data_entrada6 = g_object_get_data (objeto_entrada, "entrada6");
    GtkEntry *data_entrada7 = g_object_get_data (objeto_entrada, "entrada7");
    GtkEntry *data_entrada8 = g_object_get_data (objeto_entrada, "entrada8");
    GtkEntry *data_entrada9 = g_object_get_data (objeto_entrada, "entrada9");
    GtkEntry *data_entryPeso1 = g_object_get_data (objeto_entrada, "entryPeso1");
    GtkEntry *data_entryPeso2 = g_object_get_data (objeto_entrada, "entryPeso2");
    GtkEntry *data_entryPeso3 = g_object_get_data (objeto_entrada, "entryPeso3");
    GtkEntry *data_entryPeso4 = g_object_get_data (objeto_entrada, "entryPeso4");
    GtkEntry *data_entryPeso5 = g_object_get_data (objeto_entrada, "entryPeso5");
    GtkEntry *data_entryPeso6 = g_object_get_data (objeto_entrada, "entryPeso6");
    GtkEntry *data_entryPeso7 = g_object_get_data (objeto_entrada, "entryPeso7");
    GtkEntry *data_entryPeso8 = g_object_get_data (objeto_entrada, "entryPeso8");
    GtkEntry *data_entryPeso9 = g_object_get_data (objeto_entrada, "entryPeso9");
    GtkLabel *result_iqa = g_object_get_data (objeto_entrada, "resultado_rotulo");

    double q1 = atof(gtk_entry_get_text(data_entrada1));
    double q2 = atof(gtk_entry_get_text(data_entrada2));
    double q3 = atof(gtk_entry_get_text(data_entrada3));
    double q4 = atof(gtk_entry_get_text(data_entrada4));
    double q5 = atof(gtk_entry_get_text(data_entrada5));
    double q6 = atof(gtk_entry_get_text(data_entrada6));
    double q7 = atof(gtk_entry_get_text(data_entrada7));
    double q8 = atof(gtk_entry_get_text(data_entrada8));
    double q9 = atof(gtk_entry_get_text(data_entrada9));
    double peso1 = atof(gtk_entry_get_text(data_entryPeso1));
    double peso2 = atof(gtk_entry_get_text(data_entryPeso2));
    double peso3 = atof(gtk_entry_get_text(data_entryPeso3));
    double peso4 = atof(gtk_entry_get_text(data_entryPeso4));
    double peso5 = atof(gtk_entry_get_text(data_entryPeso5));
    double peso6 = atof(gtk_entry_get_text(data_entryPeso6));
    double peso7 = atof(gtk_entry_get_text(data_entryPeso7));
    double peso8 = atof(gtk_entry_get_text(data_entryPeso8));
    double peso9 = atof(gtk_entry_get_text(data_entryPeso9));

    double result = iqa(q1, q2, q3, q4, q5, q6, q7, q9, q8, peso1, peso2, peso3, peso4, peso5, peso6, peso7, peso8, peso9);
    printf("\nCalculo completo:\a\n");    
    

    if(result <= 100 && result > 90) {
        char *str = g_strdup_printf("IQA: %.5lf\nNível de Qualidade: Excelente \n", result);
        gtk_label_set_text(GTK_LABEL(result_iqa), str);
        g_free(str);
        printf("IQA: %.5lf\nNível de Qualidade: Excelente \n", result);
    } else if(result <= 90 && result > 70) {
        char *str = g_strdup_printf("IQA: %.5lf\nNível de Qualidade: Bom \n", result);
        gtk_label_set_text(GTK_LABEL(result_iqa), str);
        g_free(str);
        printf("IQA: %.5lf\nNível de Qualidade: Bom \n", result);
    } else if(result <= 70 && result > 50) {
        char *str = g_strdup_printf("IQA: %.5lf\nNível de Qualidade: Médio \n", result);
        gtk_label_set_text(GTK_LABEL(result_iqa), str);
        g_free(str);
        printf("IQA: %.5lf\nNível de Qualidade: Médio \n", result);
    } else if(result <= 50 && result > 25) {
        char *str = g_strdup_printf("IQA: %.5lf\nNível de Qualidade: Ruim \n", result);
        gtk_label_set_text(GTK_LABEL(result_iqa), str);
        g_free(str);
        printf("IQA: %.5lf\nNível de Qualidade: Ruim \n", result);
    } else if(result <= 25 && result >= 0) {
        char *str = g_strdup_printf("IQA: %.5lf\nNível de Qualidade: Muito Ruim \n", result);
        gtk_label_set_text(GTK_LABEL(result_iqa), str);
        g_free(str);
        printf("IQA: %.5lf\nNível de Qualidade: Muito Ruim \n", result);
    }
}

int main(int argc, char *argv[])
{
    gtk_init(&argc, &argv);

    GtkWidget *window;
    GtkWidget *grid;
    GtkWidget *text1, *text2;
    GtkWidget *rotulo1, *rotulo2, *rotulo3, *rotulo4, *rotulo5, *rotulo6, *rotulo7, *rotulo8, *rotulo9, *peso_rotulo_1, *peso_rotulo_2, *peso_rotulo_3, *peso_rotulo_4, *peso_rotulo_5, *peso_rotulo_6, *peso_rotulo_7, *peso_rotulo_8, *peso_rotulo_9, *espacamento, *resultado_rotulo, *qLabel;
    GtkWidget *entrada1, *entrada2, *entrada3, *entrada4, *entrada5, *entrada6, *entrada7, *entrada8, *entrada9, *entryPeso1, *entryPeso2, *entryPeso3, *entryPeso4, *entryPeso5, *entryPeso6, *entryPeso7, *entryPeso8, *entryPeso9;
    GtkWidget *button, *btn_resetar, *btn_salvar, *btn_load;

    GObject *objeto_entrada;

    //Janela
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(window, "delete-event", G_CALLBACK(gtk_main_quit), NULL);

    //Rotulo
    text1 = gtk_label_new("Pesos");
    text2 = gtk_label_new("Parâmetros");
    rotulo1 = gtk_label_new("Coliformes Fecais (NMP/100ml)");
    rotulo2 = gtk_label_new("pH (unidades de ph)");
    rotulo3 = gtk_label_new("DBO (mg/L)");
    rotulo4 = gtk_label_new("Nitrogenio Total (mg/L)");
    rotulo5 = gtk_label_new("Fosforo total (mg/L)");
    rotulo6 = gtk_label_new("Temperatura");
    rotulo7 = gtk_label_new("Turbidez (UNT)");
    rotulo8 = gtk_label_new("Solidos totais mg/L");
    rotulo9 = gtk_label_new("OD (%% saturacao)");
    peso_rotulo_1 = gtk_label_new("Peso");
    peso_rotulo_2 = gtk_label_new("Peso");
    peso_rotulo_3 = gtk_label_new("Peso");
    peso_rotulo_4 = gtk_label_new("Peso");
    peso_rotulo_5 = gtk_label_new("Peso");
    peso_rotulo_6 = gtk_label_new("Peso");
    peso_rotulo_7 = gtk_label_new("Peso");
    peso_rotulo_8 = gtk_label_new("Peso");
    peso_rotulo_9 = gtk_label_new("Peso");
    espacamento = gtk_label_new("");
    resultado_rotulo = gtk_label_new("");
    qLabel = gtk_label_new("");

    //Entrada
    entrada1 = gtk_entry_new();
    entrada2 = gtk_entry_new();
    entrada3 = gtk_entry_new();
    entrada4 = gtk_entry_new();
    entrada5 = gtk_entry_new();
    entrada6 = gtk_entry_new();
    entrada7 = gtk_entry_new();
    entrada8 = gtk_entry_new();
    entrada9 = gtk_entry_new();
    entryPeso1 = gtk_entry_new();
    entryPeso2 = gtk_entry_new();
    entryPeso3 = gtk_entry_new();
    entryPeso4 = gtk_entry_new();
    entryPeso5 = gtk_entry_new();
    entryPeso6 = gtk_entry_new();
    entryPeso7 = gtk_entry_new();
    entryPeso8 = gtk_entry_new();
    entryPeso9 = gtk_entry_new();
    gtk_entry_set_text(GTK_ENTRY(entryPeso1), "0.15");
    gtk_entry_set_text(GTK_ENTRY(entryPeso2), "0.12");
    gtk_entry_set_text(GTK_ENTRY(entryPeso3), "0.10");
    gtk_entry_set_text(GTK_ENTRY(entryPeso4), "0.10");
    gtk_entry_set_text(GTK_ENTRY(entryPeso5), "0.10");
    gtk_entry_set_text(GTK_ENTRY(entryPeso6), "0.10");
    gtk_entry_set_text(GTK_ENTRY(entryPeso7), "0.08");
    gtk_entry_set_text(GTK_ENTRY(entryPeso8), "0.17");
    gtk_entry_set_text(GTK_ENTRY(entryPeso9), "0.08");

    //Botão
    button = gtk_button_new_with_mnemonic("_Calcular");
    g_object_set_data(G_OBJECT(button), "entrada1", entrada1);
    g_object_set_data(G_OBJECT(button), "entrada2", entrada2);
    g_object_set_data(G_OBJECT(button), "entrada3", entrada3);
    g_object_set_data(G_OBJECT(button), "entrada4", entrada4);
    g_object_set_data(G_OBJECT(button), "entrada5", entrada5);
    g_object_set_data(G_OBJECT(button), "entrada6", entrada6);
    g_object_set_data(G_OBJECT(button), "entrada7", entrada7);
    g_object_set_data(G_OBJECT(button), "entrada8", entrada8);
    g_object_set_data(G_OBJECT(button), "entrada9", entrada9);
    g_object_set_data(G_OBJECT(button), "entryPeso1", entryPeso1);
    g_object_set_data(G_OBJECT(button), "entryPeso2", entryPeso2);
    g_object_set_data(G_OBJECT(button), "entryPeso3", entryPeso3);
    g_object_set_data(G_OBJECT(button), "entryPeso4", entryPeso4);
    g_object_set_data(G_OBJECT(button), "entryPeso5", entryPeso5);
    g_object_set_data(G_OBJECT(button), "entryPeso6", entryPeso6);
    g_object_set_data(G_OBJECT(button), "entryPeso7", entryPeso7);
    g_object_set_data(G_OBJECT(button), "entryPeso8", entryPeso8);
    g_object_set_data(G_OBJECT(button), "entryPeso9", entryPeso9);
    g_object_set_data(G_OBJECT(button), "resultado_rotulo", resultado_rotulo);
    g_signal_connect(GTK_BUTTON(button), "clicked", G_CALLBACK(botao), button);

    //Botão resetar
    btn_resetar = gtk_button_new_with_mnemonic("_Reset");
    g_object_set_data(G_OBJECT(btn_resetar), "entrada1", entrada1);
    g_object_set_data(G_OBJECT(btn_resetar), "entrada2", entrada2);
    g_object_set_data(G_OBJECT(btn_resetar), "entrada3", entrada3);
    g_object_set_data(G_OBJECT(btn_resetar), "entrada4", entrada4);
    g_object_set_data(G_OBJECT(btn_resetar), "entrada5", entrada5);
    g_object_set_data(G_OBJECT(btn_resetar), "entrada6", entrada6);
    g_object_set_data(G_OBJECT(btn_resetar), "entrada7", entrada7);
    g_object_set_data(G_OBJECT(btn_resetar), "entrada8", entrada8);
    g_object_set_data(G_OBJECT(btn_resetar), "entrada9", entrada9);
    g_object_set_data(G_OBJECT(btn_resetar), "entryPeso1", entryPeso1);
    g_object_set_data(G_OBJECT(btn_resetar), "entryPeso2", entryPeso2);
    g_object_set_data(G_OBJECT(btn_resetar), "entryPeso3", entryPeso3);
    g_object_set_data(G_OBJECT(btn_resetar), "entryPeso4", entryPeso4);
    g_object_set_data(G_OBJECT(btn_resetar), "entryPeso5", entryPeso5);
    g_object_set_data(G_OBJECT(btn_resetar), "entryPeso6", entryPeso6);
    g_object_set_data(G_OBJECT(btn_resetar), "entryPeso7", entryPeso7);
    g_object_set_data(G_OBJECT(btn_resetar), "entryPeso8", entryPeso8);
    g_object_set_data(G_OBJECT(btn_resetar), "entryPeso9", entryPeso9);
    g_signal_connect(GTK_BUTTON(btn_resetar), "clicked", G_CALLBACK(resetar), btn_resetar);

    //Botão salvar
    btn_salvar = gtk_button_new_with_mnemonic("_Salvar");
    g_object_set_data(G_OBJECT(btn_salvar), "entrada1", entrada1);
    g_object_set_data(G_OBJECT(btn_salvar), "entrada2", entrada2);
    g_object_set_data(G_OBJECT(btn_salvar), "entrada3", entrada3);
    g_object_set_data(G_OBJECT(btn_salvar), "entrada4", entrada4);
    g_object_set_data(G_OBJECT(btn_salvar), "entrada5", entrada5);
    g_object_set_data(G_OBJECT(btn_salvar), "entrada6", entrada6);
    g_object_set_data(G_OBJECT(btn_salvar), "entrada7", entrada7);
    g_object_set_data(G_OBJECT(btn_salvar), "entrada8", entrada8);
    g_object_set_data(G_OBJECT(btn_salvar), "entrada9", entrada9);
    g_object_set_data(G_OBJECT(btn_salvar), "entryPeso1", entryPeso1);
    g_object_set_data(G_OBJECT(btn_salvar), "entryPeso2", entryPeso2);
    g_object_set_data(G_OBJECT(btn_salvar), "entryPeso3", entryPeso3);
    g_object_set_data(G_OBJECT(btn_salvar), "entryPeso4", entryPeso4);
    g_object_set_data(G_OBJECT(btn_salvar), "entryPeso5", entryPeso5);
    g_object_set_data(G_OBJECT(btn_salvar), "entryPeso6", entryPeso6);
    g_object_set_data(G_OBJECT(btn_salvar), "entryPeso7", entryPeso7);
    g_object_set_data(G_OBJECT(btn_salvar), "entryPeso8", entryPeso8);
    g_object_set_data(G_OBJECT(btn_salvar), "entryPeso9", entryPeso9);
    g_signal_connect(GTK_BUTTON(btn_salvar), "clicked", G_CALLBACK(saveData), btn_salvar);
    g_signal_connect(GTK_BUTTON(btn_salvar), "clicked", G_CALLBACK(exibir_dialogo), window);


    //Botão carregar
    btn_load = gtk_button_new_with_mnemonic("_Load");
    g_object_set_data(G_OBJECT(btn_load), "entrada1", entrada1);
    g_object_set_data(G_OBJECT(btn_load), "entrada2", entrada2);
    g_object_set_data(G_OBJECT(btn_load), "entrada3", entrada3);
    g_object_set_data(G_OBJECT(btn_load), "entrada4", entrada4);
    g_object_set_data(G_OBJECT(btn_load), "entrada5", entrada5);
    g_object_set_data(G_OBJECT(btn_load), "entrada6", entrada6);
    g_object_set_data(G_OBJECT(btn_load), "entrada7", entrada7);
    g_object_set_data(G_OBJECT(btn_load), "entrada8", entrada8);
    g_object_set_data(G_OBJECT(btn_load), "entrada9", entrada9);
    g_object_set_data(G_OBJECT(btn_load), "entryPeso1", entryPeso1);
    g_object_set_data(G_OBJECT(btn_load), "entryPeso2", entryPeso2);
    g_object_set_data(G_OBJECT(btn_load), "entryPeso3", entryPeso3);
    g_object_set_data(G_OBJECT(btn_load), "entryPeso4", entryPeso4);
    g_object_set_data(G_OBJECT(btn_load), "entryPeso5", entryPeso5);
    g_object_set_data(G_OBJECT(btn_load), "entryPeso6", entryPeso6);
    g_object_set_data(G_OBJECT(btn_load), "entryPeso7", entryPeso7);
    g_object_set_data(G_OBJECT(btn_load), "entryPeso8", entryPeso8);
    g_object_set_data(G_OBJECT(btn_load), "entryPeso9", entryPeso9);
    g_signal_connect(GTK_BUTTON(btn_load), "clicked", G_CALLBACK(entry_load), btn_load);

    grid = gtk_grid_new();
    gtk_grid_set_column_spacing(GTK_GRID(grid), 20);
    gtk_grid_set_row_spacing(GTK_GRID(grid), 5);
    gtk_grid_attach(GTK_GRID(grid), text2, 1, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), text1, 5, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), espacamento, 0, 9, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), rotulo1, 3, 1, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), entrada1, 1, 1, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), rotulo2, 3, 2, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), entrada2, 1, 2, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), rotulo3, 3, 3, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), entrada3, 1, 3, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), rotulo4, 3, 4, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), entrada4, 1, 4, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), rotulo5, 3, 5, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), entrada5, 1, 5, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), rotulo6, 3, 6, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), entrada6, 1, 6, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), rotulo7, 3, 7, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), entrada7, 1, 7, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), rotulo8, 3, 8, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), entrada8, 1, 8, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), rotulo9, 3, 9, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), entrada9, 1, 9, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), entryPeso1, 5, 1, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), entryPeso2, 5, 2, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), entryPeso3, 5, 3, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), entryPeso4, 5, 4, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), entryPeso5, 5, 5, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), entryPeso6, 5, 6, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), entryPeso7, 5, 7, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), entryPeso8, 5, 8, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), entryPeso9, 5, 9, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), button, 2, 10, 2, 2);
    gtk_grid_attach(GTK_GRID(grid), btn_resetar, 4, 10, 2, 2);
    gtk_grid_attach(GTK_GRID(grid), btn_salvar, 2, 13, 2, 2);
    gtk_grid_attach(GTK_GRID(grid), btn_load, 4, 13, 2, 2);
    gtk_grid_attach(GTK_GRID(grid), resultado_rotulo, 3, 16, 2, 4);

    gtk_container_add(GTK_CONTAINER(window), grid);
    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}