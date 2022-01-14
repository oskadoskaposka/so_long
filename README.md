makMany things to do! Listing all!

Good news that have information about what do

2 - need put gnl inside of libft

3 - (Not necessary for this project) do a Readme for ft_printf

4 - (Not necessary for this project) do a repo for born2beroot

5 - ver sobre submodulos no git, aparentemente da pra resolver facin

------------------------Livro sobre C

https://libgen.is/search.php?req=learn+c+the+hard+way&lg_topic=libgen&open=0&view=simple&res=25&phrase=1&column=def

mirror 3 ou 5

------------------------Documentação auxiliar
<p>
- notion compartilhado pelo welton com mais info do so_long https://bumpy-truffle-c97.notion.site/SoLong-13550c956d2f4d288b6a73a97ee7bccb <br>
- this helps a lot https://elearning.intra.42.fr/notions/minilibx/subnotions/mlx-introduction/videos/introduction-to-minilibx <br>
- helps too https://harm-smits.github.io/42docs/libs/minilibx/getting_started.html <br>
- link com explicações das funções da minilibx e exemplos https://github.com/S-LucasSerrano/miniLibX_sample <br>
</p>

------------------------Links Sprites

Links compartilhados pelo vlima-nu<br>
-https://opengameart.org/<br>
-https://kenney.nl/assets<br>
-https://www.gameart2d.com/freebies.html<br>
-https://craftpix.net/<br>
-https://assetstore.unity.com/<br>
-https://itch.io/game-assets/free<br>
<br>
Muita coisa, mas trabalhoso de encontrar<br>
-https://www.spriters-resource.com/pc_computer/diablo2diablo2lordofdestruction/
<br>

------------------------Basico
<p>path sempre referente ao executavel (solong), segfault duas causas, 

sempre que usar os ponteiros lembrar dos leaks....

- usar o loop pra janela ficar aberta

- instalar o imagematic, que converte png para xpm, pode usar o gimp
	apos instalr usar o convert, para trocar o fomrato

após criar a tela preta, criar um ponteiro void e dentro dele colocar a funçao mlx_xmp_file_to_Image.
	dentro desse ponteiro. precisa duas int para ela guardar o tamanho.

usar o mlx_put_image_to_window  para passar o ponteiro da imagem e onde voce quer colocar a imagem

para mover o personagem, criar uma funçao que altera o lugar onde esta...
</p>


----------------------MAPA
<p>para ler o mapa, usar o gnl que vai ler linha a linha e guarda em **
após guardar nesse array de char, tem que criar uma funçao para colocar as imagens

para imprimir, usar um loop para ler a linha toda e imprimir
para saber qual pixel esta, usar um index.

importante, ele sempre imprime em pixel, lembrar de fazer as contas de quantos px a img ocupa
	e quanto vai imprimir

</p>


-------------------movimentação
<p>mlx_key_hook, cada vez que vc pressiona uma tecla ela chama uma função
	primeiro ponteiro da janela 
	segundo parametro função que recebe um int de parametro e faz algo, o int é a tecla que foi apertada
	terceiro parametro funçao alternativa, se nao usar passar um (void *)0

se jogar uma imagem em cima da outra (sempre jogar um put image) acaba consumindo muita memoria
	uma das possiveis soluçoes é destruir e reconstruir a cada tecla apertada

</p>



---------------pessoas que ajudaram com a explicação
<p>
-guferrei <br>
-elima-me <br>
-proberto <br>

</p>


---------------testar leaks
<p>https://stackoverflow.com/questions/5134891/how-do-i-use-valgrind-to-find-memory-leaks#:~:text=To%20run%20Valgrind%2C%20pass%20the,any%20parameters%20to%20the%20program).&text=The%20flags%20are%2C%20in%20short,in%20the%20%22full%22%20report</p>
<!-- 

Testar essas assets

https://assetstore.unity.com/packages/2d/characters/pixel-adventure-1-155360#content 

-->

