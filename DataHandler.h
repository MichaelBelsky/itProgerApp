#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;

ref class DataHandler
{
	// Data Source=MBELSKY\SQLEXPRESS;Initial Catalog=itProger;Integrated Security=True
	SqlConnection^ con;
	SqlConnectionStringBuilder^ conStrBuild;

	void ConnectDB() {
		conStrBuild = gcnew SqlConnectionStringBuilder();
		conStrBuild->DataSource = "MBELSKY\\SQLEXPRESS";
		conStrBuild->InitialCatalog = "itProger";
		conStrBuild->IntegratedSecurity = true;

		con = gcnew SqlConnection(Convert::ToString(conStrBuild));
	}
public:
	void insertTask(String^ task) {
		try {
			ConnectDB();

			String^ qwery = "INSERT INTO dbo.tasks(task) VALUES (@taskname)";
			SqlCommand^ cmd = gcnew SqlCommand(qwery, con);

			cmd->Parameters->AddWithValue("@taskname", task);
			con->Open();
			cmd->ExecuteNonQuery();
		}
		finally {
			if (con != nullptr)
				con->Close();
		}
	}
};

