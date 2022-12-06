#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapPersonnel:: Select()
{
	return "SELECT personnel_id, humain_nom, humain_prenom, personnel_id_1, adresse_numero, adresse_rue, ville_name, ville_code_postal, calendrier_date  FROM [projetpoo2].[dbo].[humain], [projetpoo2].[dbo].[ADRESSE], [projetpoo2].[dbo].[personnel], [projetpoo2].[dbo].[calendrier], [projetpoo2].[dbo].[VILLE] WHERE PERSONNEL.calendrier_id = CALENDRIER.calendrier_id AND PERSONNEL.adresse_id = ADRESSE.adresse_id AND PERSONNEL.humain_id = HUMAIN.humain_id AND ADRESSE.ville_id = VILLE.ville_id";
}
System::String^ NS_Comp_Mappage::CLmapPersonnel::Insert(void)
{
	return "INSERT INTO TB_P6 (nom, prenom) VALUES('" + this->nom + "','" + this->Prenom + "');";
}
System::String^ NS_Comp_Mappage::CLmapPersonnel::Delete(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::CLmapPersonnel::Update(void)
{
	return "";
}



void NS_Comp_Mappage::CLmapPersonnel::setNom_pers(System::String^ nom)
{
    this->nom = nom;
}

void NS_Comp_Mappage::CLmapPersonnel::setPrenom_pers(System::String^ prenom) {
    this->Prenom = prenom;
}

void NS_Comp_Mappage::CLmapPersonnel::set_superieur(int superieur)
{
    this->superieur = superieur;
}

void NS_Comp_Mappage::CLmapPersonnel::set_date(System::String^ date)
{
    this->date = date;
}

void NS_Comp_Mappage::CLmapPersonnel::set_numero_rue(int numero)
{
    this->numero_rue = numero;
}

void NS_Comp_Mappage::CLmapPersonnel::set_rue(System::String^ rue)
{
    this->rue = rue;
}

void NS_Comp_Mappage::CLmapPersonnel::set_ville(System::String^ ville)
{
    this->ville = ville;
}

void NS_Comp_Mappage::CLmapPersonnel::set_code_postal(int code)
{
    this->code_postal = code;
}

System::String^ NS_Comp_Mappage::CLmapPersonnel::getNom_pers(void)
{
    return this->nom;
}

System::String^ NS_Comp_Mappage::CLmapPersonnel::getPrenom_pers(void)
{
    return this->Prenom;
}

int NS_Comp_Mappage::CLmapPersonnel::get_superieur(void)
{
    return this->superieur;
}

System::String^ NS_Comp_Mappage::CLmapPersonnel::get_date(void)
{
    return this->date;
}

int NS_Comp_Mappage::CLmapPersonnel::get_numero_rue(void)
{
    return this->numero_rue;
}

System::String^ NS_Comp_Mappage::CLmapPersonnel::get_rue(void)
{
    return this->rue;
}

System::String^ NS_Comp_Mappage::CLmapPersonnel::get_ville(void)
{
    return this->ville;
}

int NS_Comp_Mappage::CLmapPersonnel::get_code_postal(void)
{
    return this->code_postal;
}


System::String^ NS_Comp_Mappage::CLmapClient::Select()
{
    return "SELECT personnel_id, humain_nom, humain_prenom, personnel_id_1, adresse_numero, adresse_rue, ville_name, ville_code_postal, calendrier_date  FROM [projetpoo2].[dbo].[humain], [projetpoo2].[dbo].[ADRESSE], [projetpoo2].[dbo].[personnel], [projetpoo2].[dbo].[calendrier], [projetpoo2].[dbo].[VILLE] WHERE PERSONNEL.calendrier_id = CALENDRIER.calendrier_id AND PERSONNEL.adresse_id = ADRESSE.adresse_id AND PERSONNEL.humain_id = HUMAIN.humain_id AND ADRESSE.ville_id = VILLE.ville_id";
}
System::String^ NS_Comp_Mappage::CLmapClient::Insert(void)
{
    return "INSERT INTO TB_P6 (nom, prenom) VALUES('" + this->nom + "','" + this->Prenom + "');";
}
System::String^ NS_Comp_Mappage::CLmapClient::Delete(void)
{
    return "";
}
System::String^ NS_Comp_Mappage::CLmapClient::Update(void)
{
    return "";
}




void NS_Comp_Mappage::CLmapClient::setNom_pers(System::String^ nom)
{
    this->nom = nom;
}

void NS_Comp_Mappage::CLmapClient::setPrenom_pers(System::String^ prenom) {
    this->Prenom = prenom;
}



void NS_Comp_Mappage::CLmapClient::set_date(System::String^ date)
{
    this->date = date;
}

void NS_Comp_Mappage::CLmapClient::set_numero_rue_livr(int numero)
{
    this->numero_rue_livr = numero;
}

void NS_Comp_Mappage::CLmapClient::set_rue_livr(System::String^ rue)
{
    this->rue_livr = rue;
}

void NS_Comp_Mappage::CLmapClient::set_ville_livr(System::String^ ville)
{
    this->ville_livr = ville;
}

void NS_Comp_Mappage::CLmapClient::set_code_postal_livr(int code)
{
    this->code_postal_livr = code;
}

void NS_Comp_Mappage::CLmapClient::set_numero_rue(int numero)
{
    this->numero_rue = numero;
}

void NS_Comp_Mappage::CLmapClient::set_rue(System::String^ rue)
{
    this->rue = rue;
}

void NS_Comp_Mappage::CLmapClient::set_ville(System::String^ ville)
{
    this->ville = ville;
}

void NS_Comp_Mappage::CLmapClient::set_code_postal(int code)
{
    this->code_postal = code;
}








System::String^ NS_Comp_Mappage::CLmapClient::getNom_pers(void)
{
    return this->nom;
}

System::String^ NS_Comp_Mappage::CLmapClient::getPrenom_pers(void)
{
    return this->Prenom;
}

System::String^ NS_Comp_Mappage::CLmapClient::get_date(void)
{
    return this->date;
}

int NS_Comp_Mappage::CLmapClient::get_numero_rue_livr(void)
{
    return this->numero_rue_livr;
}

System::String^ NS_Comp_Mappage::CLmapClient::get_rue_livr(void)
{
    return this->rue_livr;
}

System::String^ NS_Comp_Mappage::CLmapClient::get_ville_livr(void)
{
    return this->ville_livr;
}

int NS_Comp_Mappage::CLmapClient::get_code_postal_livr(void)
{
    return this->code_postal_livr;
}

int NS_Comp_Mappage::CLmapClient::get_numero_rue(void)
{
    return this->numero_rue;
}

System::String^ NS_Comp_Mappage::CLmapClient::get_rue(void)
{
    return this->rue;
}

System::String^ NS_Comp_Mappage::CLmapClient::get_ville(void)
{
    return this->ville;
}

int NS_Comp_Mappage::CLmapClient::get_code_postal(void)
{
    return this->code_postal;
}


System::String^ NS_Comp_Mappage::CLmapArticle::Select()
{
    return "SELECT personnel_id, humain_nom, humain_prenom, personnel_id_1, adresse_numero, adresse_rue, ville_name, ville_code_postal, calendrier_date  FROM [projetpoo2].[dbo].[humain], [projetpoo2].[dbo].[ADRESSE], [projetpoo2].[dbo].[personnel], [projetpoo2].[dbo].[calendrier], [projetpoo2].[dbo].[VILLE] WHERE PERSONNEL.calendrier_id = CALENDRIER.calendrier_id AND PERSONNEL.adresse_id = ADRESSE.adresse_id AND PERSONNEL.humain_id = HUMAIN.humain_id AND ADRESSE.ville_id = VILLE.ville_id";
}
System::String^ NS_Comp_Mappage::CLmapArticle::Insert(void)
{
    return "INSERT INTO TB_P6 (nom, prenom) VALUES('" + this->nom + "');";
}
System::String^ NS_Comp_Mappage::CLmapArticle::Delete(void)
{
    return "";
}
System::String^ NS_Comp_Mappage::CLmapArticle::Update(void)
{
    return "";
}




void NS_Comp_Mappage::CLmapArticle::set_prix(float prix)
{
    this->prix = prix;
}

void NS_Comp_Mappage::CLmapArticle::set_nom(System::String^ nom)
{
    this->nom = nom;
}

void NS_Comp_Mappage::CLmapArticle::set_desc(System::String^ desc)
{
    this->desc = desc;
}

void NS_Comp_Mappage::CLmapArticle::set_quantite(int quantite)
{
    this->quantite = quantite;
}



float NS_Comp_Mappage::CLmapArticle::get_prix(void)
{
    return this->prix;
}

System::String^ NS_Comp_Mappage::CLmapArticle::get_nom(void)
{
    return this->nom;
}

System::String^ NS_Comp_Mappage::CLmapArticle::get_desc(void)
{
    return this->desc;
}

int NS_Comp_Mappage::CLmapArticle::get_quantite(void)
{
    return this->quantite;
}




System::String^ NS_Comp_Mappage::CLmapCommande::Select()
{
    return "SELECT personnel_id, humain_nom, humain_prenom, personnel_id_1, adresse_numero, adresse_rue, ville_name, ville_code_postal, calendrier_date  FROM [projetpoo2].[dbo].[humain], [projetpoo2].[dbo].[ADRESSE], [projetpoo2].[dbo].[personnel], [projetpoo2].[dbo].[calendrier], [projetpoo2].[dbo].[VILLE] WHERE PERSONNEL.calendrier_id = CALENDRIER.calendrier_id AND PERSONNEL.adresse_id = ADRESSE.adresse_id AND PERSONNEL.humain_id = HUMAIN.humain_id AND ADRESSE.ville_id = VILLE.ville_id";
}
System::String^ NS_Comp_Mappage::CLmapCommande::Insert(void)
{
    return " ";
}
System::String^ NS_Comp_Mappage::CLmapCommande::Delete(void)
{
    return "";
}
System::String^ NS_Comp_Mappage::CLmapCommande::Update(void)
{
    return "";
}

void NS_Comp_Mappage::CLmapCommande::set_valeur_rem(int valeur)
{
    this->valeur_rem  = valeur;
}

void NS_Comp_Mappage::CLmapCommande::set_nom_rem(System::String^ nom)
{
    this->nom_rem = nom;
}

void NS_Comp_Mappage::CLmapCommande::set_date(System::String^ date)
{
    this->date = date;
}

void NS_Comp_Mappage::CLmapCommande::set_date2(System::String^ date)
{
    this->date2 = date;
}

void NS_Comp_Mappage::CLmapCommande::set_tva(int tva)
{
    this->tva = tva;
}

void NS_Comp_Mappage::CLmapCommande::set_mode_pay(System::String^ mode)
{
    this->mode_pay = mode;
}

void NS_Comp_Mappage::CLmapCommande::set_id_client(int id)
{
    this->id_client = id;
}

int NS_Comp_Mappage::CLmapCommande::get_valeur_rem(void)
{
    return this->valeur_rem;
}

System::String^ NS_Comp_Mappage::CLmapCommande::get_nom_rem(void)
{
    return this->nom_rem;
}

System::String^ NS_Comp_Mappage::CLmapCommande::get_date(void)
{
    return this->date;
}

System::String^ NS_Comp_Mappage::CLmapCommande::get_date2(void)
{
    return this->date2;
}

int NS_Comp_Mappage::CLmapCommande::get_tva(System::String^)
{
    return this->tva;
}

System::String^ NS_Comp_Mappage::CLmapCommande::get_mode_pay(void)
{
    return this->mode_pay;
}

int NS_Comp_Mappage::CLmapCommande::get_id_client(void)
{
    return this->id_client;
}



