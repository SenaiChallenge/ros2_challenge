# ROS 2 Senai Challenge

Este projeto contém nós de processamento de imagem para ROS 2, destinados a receber mensagens com números aleatórios, usar esses números para realizar operações de imagem (como recorte) e responder a solicitações de serviço com imagens processadas.

Esse código é um desafio para a etapa de Especialista II no Senai Cimatec.

## Descrição

O projeto inclui dois nós principais `ImageReceiver` e `ImageCropper` e dois pacotes `senai_ros2` e `sensor_interface`.

- `senai_ros2`: Pacote principal, contendo os nós mencionados.
- `sensor_interface`: Pacote de interface, contendo arquivos de mensagem e serviço personalizados especificados para atender o projeto.
- `ImageReceiver`: Um nó que publica no tópico `/random_numbers` com uma mensagem customizada contendo dois números aleatórios. Ele tem como função requisitar, por meio do serviço `/send_image`, a última imagem processada pelo segundo nó (`ImageCropper`). Ele também recebe por parâmetros o diretório onde a imagem será salva e a quantidade de requisições a serem realizadas.

- `ImageCropper`: Um nó que subscreve no mesmo tópico de números aleatórios e recorta uma imagem carregada de um diretório especificado, usando os números aleatórios como parâmetros para o recorte. O nó também atua como o servidor que irá atender às requisições de envio das imagens processadas pelo nó `ImageReceiver`.

## Dependências
- ROS 2 Humble (Debian packages)
- OpenCV
- cv_bridge para integração ROS 2 e OpenCV
- sensor_msgs para mensagens de imagem em ROS 2
- Pacote personalizado `sensor_interface` para mensagens e serviços específicos do projeto

## Instalação e Execução

### Instalação
O sistema foi testado e construído utilizando ROS 2 Humble. (https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debians.html - guia de instalação)

Após seguir o passo a passo da instalação do ROS 2 Humble, é necessário instalar o colcon com o comando abaixo em seu terminal:
```bash
sudo apt install python3-colcon-common-extensions
```

Em seu terminal siga para o workspace do projeto e execute o comando:
```bash
    cd ros2_ws/src
    colcon build --symlink-install
    source install/setup.bash

``` 
### Execução
O projeto está pronto para execução. Seguindo as normas do desafio e as boas práticas ROS 2, o sistema deve ser executado através do script launcher.

É importante lembrar que é necessário estar no diretório ros2_ws/src para evitar erros com os parâmetros padrões. Caso use em outra pasta, lembre-se de alterar os parâmetros via terminal ou no arquivo de configuração `my_config_file.yaml`:

```bash
    ros2 launch senai_ros2 challenge_launcher.py
```
