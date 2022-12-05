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