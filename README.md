Many things to do! Listing all!

Good news that have information about what do

1 - this helps a lot https://elearning.intra.42.fr/notions/minilibx/subnotions/mlx-introduction/videos/introduction-to-minilibx

1,5 - helps too https://harm-smits.github.io/42docs/libs/minilibx/getting_started.html

2 - need put gnl inside of libft

3 - (Not necessary for this project) do a Readme for ft_printf

4 - (Not necessary for this project) do a repo for born2beroot

5 - ver sobre submodulos no git, aparentemente da pra resolver facin


https://libgen.is/search.php?req=learn+c+the+hard+way&lg_topic=libgen&open=0&view=simple&res=25&phrase=1&column=def

mirror 3 ou 5


notion compartilhado pelo welton com mais info do so_long https://bumpy-truffle-c97.notion.site/SoLong-13550c956d2f4d288b6a73a97ee7bccb




------------------------Basico
path sempre referente ao executavel (solong), segfault duas causas, 

sempre que usar os ponteiros lembrar dos leaks....

- usar o loop pra janela ficar aberta

- instalar o imagematic, que converte png para xpm, pode usar o gimp
	apos instalr usar o convert, para trocar o fomrato

após criar a tela preta, criar um ponteiro void e dentro dele colocar a funçao mlx_xmp_file_to_Image.
	dentro desse ponteiro. precisa duas int para ela guardar o tamanho.

usar o mlx_put_image_to_window  para passar o ponteiro da imagem e onde voce quer colocar a imagem

para mover o personagem, criar uma funçao que altera o lugar onde esta...

----------------------MAPA
para ler o mapa, usar o gnl que vai ler linha a linha e guarda em **
após guardar nesse array de char, tem que criar uma funçao para colocar as imagens

para imprimir, usar um loop para ler a linha toda e imprimir
para saber qual pixel esta, usar um index.

importante, ele sempre imprime em pixel, lembrar de fazer as contas de quantos px a img ocupa
	e quanto vai imprimir


-------------------movimentação
mlx_key_hook, cada vez que vc pressiona uma tecla ela chama uma função
	primeiro ponteiro da janela 
	segundo parametro função que recebe um int de parametro e faz algo, o int é a tecla que foi apertada
	terceiro parametro funçao alternativa, se nao usar passar um (void *)0

se jogar uma imagem em cima da outra (sempre jogar um put image) acaba consumindo muita memoria
	uma das possiveis soluçoes é destruir e reconstruir a cada tecla apertada





---------------ajuda

guferrei
elima-me
proberto







