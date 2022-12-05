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
        System::String^ getNom_pers(void);
        System::String^ getPrenom_pers(void);
        int get_superieur(void);
        System::String^ get_date(void);
        int get_numero_rue(void);
        System::String^ get_rue(void);
        System::String^ get_ville(void);
        int get_code_postal(void);

    };
}
