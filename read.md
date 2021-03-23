### Tralha Terminal

​	Este é o meu primeiro jogo criado, e o fruto do meu esforço para com a programação. Sei que diante de muitos, isso não significa nada, mas para mim é uma grande conquista e não apenas isso, pretendo aprimorar o projeto para algo além do que somente um mero joguinho de terminal. Porém, ainda não tenho conhecimentos necessários para tal. Quando o tiver, terá sua merecida atualização.

​	Este jogo está em sua primeira versão, espero que em um futuro não muito distante, eu possa criar novas funcionalidades e aprimorar as já existentes.

	##### O game está com alguns bugs.

​	1. Caso você sair digitando o caractere **E**, a música vai continuar mesmo com o programa encerrado, para isso é necessário que digite no terminal: 

​			`kill 31228`  

​	Ou se não, procurar pelo nome **mpg123** e finalizar o programa pelo **Monitor do sistema**.

2. Caso você ganhe algum jogo e pressione o caractere **N**, você será direcionado para o menu principal, porém isso é ilusório. Assim que você digitar algum caractere, ele vai voltar ao game. Para voltar ao menu de fato, você precisará interromper o jogo e executa-lo novamente.
3. A opção **R** não funciona.

#### Créditos

​	O espaço de dedicatória aos créditos, está dentro do caractere **K**. Digite **K** e logo após será mostrado.

Para que as músicas sejam reproduzidas, é necessário que baixe o **mpg123**. Este é um reprodutor de música extremamente leve. Para baixa-lo, basta digitar no terminal:

​			`sudo apt install mpg123 -y`

Os efeitos sonoros e músicas, são melhor aproveitados usando fone de ouvido. 

Música usada:

https://freesound.org/people/Snapper4298/sounds/564405/

(Havia mais músicas e efeitos, porém ainda não é a hora de implementar tudo)