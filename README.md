## ESP8266 Wifi - Arduino IDE



Steps para rodar o código local na máquina:

1. Instalar Arduino IDE:
https://www.arduino.cc/en/Main/Software

2. Pegar código do GitHub:
https://github.com/nathalials/exemplo02-BMP180/blob/master/exemplo02-BMP180.ino

    2.1.  Alterar as credenciais do wifi (para conectar a placa)

    2.2.  Alterar a org

    2.3. Configurar device type e device ID, conforme o que foi colocado na plataforma.


3. Instalar board ESP8266WiFi:

    3.1. Abrir Arduino IDE, selecionar Arduino, preferences.
    
        3.2. Na janela de preferências, no campo `Additional Boards Manager URLs`, colocar o link: http://arduino.esp8266.com/stable/package_esp8266com_index.json  e depois clicar em OK.
        
        3.3. No Arduino IDE, selecionar Tools - Board - Boards Manager.
        
        3.4. No campo de busca, digitar: `esp8266`. Selecionar board esp8266 e instalar.
        
4. Instalar biblioteca PubSubClient:
        
        4.1. No Arduino IDE, selecionar Sketch - Include Library - Manage Libraries.
        
        4.2. Digitar `PubSubClient` no campo de buscar. Selecionar PubSubClient e instalar biblioteca.
