#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT * FROM [projetpoo2].[dbo].[humain]";
}
System::String^ NS_Comp_Mappage::CLmapTB::Insert(void)
{
	return "INSERT INTO TB_P6 (nom, prenom) VALUES('" + this->nom + "','" + this->prenom + "');";
}
System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
{
	return "";
}

System::String^ NS_Comp_Mappage::CLmapPersonnel::Select_pers(void)
{
    
}

System::String^ NS_Comp_Mappage::CLmapPersonnel::Insert_pers(void)
{
    
}

System::String^ NS_Comp_Mappage::CLmapPersonnel::Delete_pers(void)
{
    
}

System::String^ NS_Comp_Mappage::CLmapPersonnel::Update_pers(void)
{
    
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