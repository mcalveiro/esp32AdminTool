//--------------------------------------------------------------------
// Definiciones
//--------------------------------------------------------------------

#define RELAY1  27                  //GPIO27 para salida de Relay 1
#define RELAY2  26                  //GPIO26 para salida de Relay 2
#define WIFILED 12                  //GPIO12 LED indicador WIFI
#define MQTT    13                  //GPIO13 LED indicador MQTT

//--------------------------------------------------------------------
// Versión de HW
//--------------------------------------------------------------------

#define HW "ADMINESP32  v1 0000"    // Ver. HW

//--------------------------------------------------------------------
// ZONA WIFI
//--------------------------------------------------------------------

bool    wifi_staticIP;              // Uso de IP Estática
char    wifi_ssid[30];              // Red WiFi
char    wifi_pw[30];                // Contraseña de RED Wifi
char    wifi_ip_static[15];         // IP Estático
char    wifi_gateway[15];           // Gateway
char    wifi_subnet[15];            // Subred
char    wifi_primaryDNS[15];        // DNS Primario
char    wifi_secondaryDNS[15];      // DNS Secundario      

//--------------------------------------------------------------------
// ZONA Configuración General 
//--------------------------------------------------------------------

char    id[30];                     // ID del dispositivo
char    bootCount;                  // Número de reinicios



