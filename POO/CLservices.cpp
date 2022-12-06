#include "CLservices.h"
#include "CLcad.h"
#include "CLmapTB.h"

NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappPersonnel = gcnew NS_Comp_Mappage::CLmapPersonnel();
	this->oMappClient = gcnew NS_Comp_Mappage::CLmapClient();
	this->oMappArticle = gcnew NS_Comp_Mappage::CLmapArticle();
	this->oMappCommande = gcnew NS_Comp_Mappage::CLmapCommande();
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selection_tout_personnel(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappPersonnel->Select();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selection_tout_client(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappClient->Select();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selection_tout_article(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappArticle->Select();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Svc::CLservices::selection_tout_commande(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappCommande->Select();
	return this->oCad->getRows(sql, dataTableName);
}



void NS_Comp_Svc::CLservices::ajouter_personnel(System::String^ nom, System::String^ Prenom,int superieur,System::String^ date,int numero_rue,System::String^ rue,System::String^ ville,int code_postal) 
{
	System::String^ sql;

	this->oMappPersonnel->setNom_pers(nom);
	this->oMappPersonnel->setPrenom_pers(Prenom);
	this->oMappPersonnel->set_date(date);
	this->oMappPersonnel->set_superieur(superieur);
	this->oMappPersonnel->set_numero_rue(numero_rue);
	this->oMappPersonnel->set_rue(rue);
	this->oMappPersonnel->set_ville(ville);
	this->oMappPersonnel->set_code_postal(code_postal);

	sql = this->oMappPersonnel->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::ajouter_client(System::String^ nom, System::String^ Prenom, System::String^ date, int numero_rue_livr, System::String^ rue_livr, System::String^ ville_livr, int code_postal_livr, int numero_rue, System::String^ rue, System::String^ ville, int code_postal)
{
	System::String^ sql;

	this->oMappClient->setNom_pers(nom);
	this->oMappClient->setPrenom_pers(Prenom);
	this->oMappClient->set_date(date);
	this->oMappClient->set_numero_rue(numero_rue);
	this->oMappClient->set_rue(rue);
	this->oMappClient->set_ville(ville);
	this->oMappClient->set_code_postal(code_postal);
	this->oMappClient->set_numero_rue_livr(numero_rue_livr);
	this->oMappClient->set_rue_livr(rue_livr);
	this->oMappClient->set_ville_livr(ville_livr);
	this->oMappClient->set_code_postal_livr(code_postal_livr);

	sql = this->oMappClient->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::ajouter_article(float prix, System::String^ nom, System::String^ desc, int quantite)
{
	System::String^ sql;
	this->oMappArticle->set_prix(prix);
	this->oMappArticle->set_nom(nom);
	this->oMappArticle->set_desc(desc);
	this->oMappArticle->set_quantite(quantite);

	sql = this->oMappArticle->Insert();

	this->oCad->actionRows(sql);
}

void NS_Comp_Svc::CLservices::ajouter_commande(int valeur_rem, System::String^ nom_rem, System::String^ date, System::String^ date2, int tva, System::String^ mode_pay, int id_client)
{
	System::String^ sql;
	this->oMappCommande->set_valeur_rem(valeur_rem);
	this->oMappCommande->set_nom_rem(nom_rem);
	this->oMappCommande->set_date(date);
	this->oMappCommande->set_date2(date2);
	this->oMappCommande->set_tva(tva);
	this->oMappCommande->set_mode_pay(mode_pay);
	this->oMappCommande->set_id_client(id_client);

	sql = this->oMappCommande->Insert();

	this->oCad->actionRows(sql);
}

