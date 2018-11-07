#include <stdio.h>
#include <string>
//#include "/usr/local/mysql/include/mysql.h"
#include "/usr/include/mysql/mysql.h"
#include "connection.hpp"
#include <iostream>

void createTable (std::string tableName, std::string column_one);
void deleteTable (std::string tableName);
void setColumn(std::string tableName, std::string ColumnName,std::string datatype);
void modifierColumnName(std::string tableName, std::string oldColumnName, std::string newColumnName,std::string datatype);
void changeTheDatatype(std::string tableName, std::string columnName, std::string datatype);
void getColumn(std::string tableName);
void deleteColumn(std::string tableName, std::string columnName);
void showTable (std::string tableName);
