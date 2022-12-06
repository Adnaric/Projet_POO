#pragma once
namespace NS_Comp_Mappage
{
    ref class CLmapTB
    {
    private:
        System::String^ sSql;
    };

    ref class CLmapPersonnel : public CLmapTB {
    private:
        System::String^ nom;
        System::String^ Prenom;
        int superieur;
        System::String^ date;
        int numero_rue;
        System::String^ rue;
        System::String^ ville;
        int code_postal;
        int id_personnel;
    public:
        System::String^ Select(void);
        System::String^ Insert(void);
        System::String^ Delete(void);
        System::String^ Update(void);
        void setNom_pers(System::String^);
        void setPrenom_pers(System::String^);
        void set_superieur(int);
        void set_date(System::String^);
        void set_numero_rue(int);
        void set_rue(System::String^);
        void set_ville(System::String^);
        void set_code_postal(int);
        void set_personnel(int);
        System::String^ getNom_pers(void);
        System::String^ getPrenom_pers(void);
        int get_superieur(void);
        System::String^ get_date(void);
        int get_numero_rue(void);
        System::String^ get_rue(void);
        System::String^ get_ville(void);
        int get_code_postal(void);
        int get_id_personnel(void);

    };
    ref class CLmapClient {
    private:
        System::String^ nom;
        System::String^ Prenom;
        System::String^ date;
        int numero_rue_livr;
        System::String^ rue_livr;
        System::String^ ville_livr;
        int code_postal_livr;
        int numero_rue;
        System::String^ rue;
        System::String^ ville;
        int code_postal;
    public:
        System::String^ Select(void);
        System::String^ Insert(void);
        System::String^ Delete(void);
        System::String^ Update(void);
        void setNom_pers(System::String^);
        void setPrenom_pers(System::String^);
        void set_date(System::String^);
        void set_numero_rue_livr(int);
        void set_rue_livr(System::String^);
        void set_ville_livr(System::String^);
        void set_code_postal_livr(int);
        void set_numero_rue(int);
        void set_rue(System::String^);
        void set_ville(System::String^);
        void set_code_postal(int);
        System::String^ getNom_pers(void);
        System::String^ getPrenom_pers(void);
        System::String^ get_date(void);
        int get_numero_rue_livr(void);
        System::String^ get_rue_livr(void);
        System::String^ get_ville_livr(void);
        int get_code_postal_livr(void);
        int get_numero_rue(void);
        System::String^ get_rue(void);
        System::String^ get_ville(void);
        int get_code_postal(void);

    };

    ref class CLmapArticle {
    private:
        float prix;
        System::String^ nom;
        System::String^ desc;
        int quantite;
    public:
        System::String^ Select(void);
        System::String^ Insert(void);
        System::String^ Delete(void);
        System::String^ Update(void);
        void set_prix(float);
        void set_nom(System::String^);
        void set_desc(System::String^);
        void set_quantite(int);
        float get_prix(void);
        System::String^ get_nom(void);
        System::String^ get_desc(void);
        int get_quantite(void);
    };

    ref class CLmapCommande {
    private:
        int valeur_rem;
        System::String^ nom_rem;
        System::String^ date;
        System::String^ date2;
        int tva;
        System::String^ mode_pay;
        int id_client;

    public:
        System::String^ Select(void);
        System::String^ Insert(void);
        System::String^ Delete(void);
        System::String^ Update(void);
        void set_valeur_rem(int);
        void set_nom_rem(System::String^);
        void set_date(System::String^);
        void set_date2(System::String^);
        void set_tva(int);
        void set_mode_pay(System::String^);
        void set_id_client(int);
        int get_valeur_rem(void);
        System::String^ get_nom_rem(void);
        System::String^ get_date(void);
        System::String^ get_date2(void);
        int get_tva(System::String^);
        System::String^ get_mode_pay(void);
        int get_id_client(void);
    };
}