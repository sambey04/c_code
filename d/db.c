// #include <mysql.h>
//#include </usr/include/mysql/mysql.h>
//#include </usr/include/mysql/my_global.h>
#include <mysql.h>
#include <my_global.h>
#include <stdio.h>
 main() {
     MYSQL *conn;
     MYSQL_RES *res;
     MYSQL_ROW row;
     char *server = "localhost";
     char *user = "root";
     char *password = ""; /* set me first */
     char *database = "mysql";
     conn = mysql_init(NULL);
     /* Connect to database */
     if (!mysql_real_connect(conn, server,
         user, password, database, 0, NULL, 0)) {
        fprintf(stderr, "%s\n", mysql_error(conn));
        exit(1);
    }

    /* send SQL query */
    if (mysql_query(conn, "select * from samba")) {
        fprintf(stderr, "%s\n", mysql_error(conn));
        exit(1);
    }
    res = mysql_use_result(conn);

    /* output table name */
    
   printf("messages -->\n");
    while ((row = mysql_fetch_row(res)) != NULL)
        printf("%s \n", row[0]);

   
    

    /* close connection */
    mysql_free_result(res);
    mysql_close(conn);
 }
//gcc -o db db.c `mysql_config --cflags --libs`
