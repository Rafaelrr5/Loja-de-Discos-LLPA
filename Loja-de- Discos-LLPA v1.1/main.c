#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <dos.h>

void linha();
void linha(){
   printf("\n          =======================================\n");
 }
 //inicializa variaveis e o template das informações do disco que será comprado
void discos(char nome [50],char grav [50],char gen [50],char music [200], int preco,int ano,int resp);
void discos(char nome [50],char grav [50],char gen [50],char music [200], int preco,int ano,int resp){
   printf("-> Nome do disco: %s\n",nome);
   printf("-> Gênero Musical: %s\n",gen);
   printf("-> Gravadora do disco: %s\n",grav);
   printf("-> Ano de lançamento: %d\n",ano);
   printf("-> Músicas: %s\n",music);
   printf("-> Preço: %d\n",preco);
   printf("\nTem certeza que quer continuar com a compra? Digite 1 para sim e 2 para não\n");
   scanf("%d",&resp);
   if (resp==1){
    printf("\nCompra realizada com sucesso e será entregue para sua casa entre 20 e 30 dias\n");
    Sleep(2500);
   }
   system("cls");
}

int main()
{

    int i;
    setlocale(LC_ALL,"Portuguese");


   for(i=0;i<1;i++){
   printf("Carregando");
   Sleep(500);
   printf(".");
   Sleep(500);
   printf(".");
   Sleep(500);
   printf(".");
   Sleep(500);
   system("cls");
}
    int num,est;
    Sleep(500);
    linha();
    Sleep(500);
    printf("           Bem vindo à Loja de Discos DISC-CHORD");
    Sleep(500);
    linha();
    Sleep(500);

do{
    printf("\nPressione o número mostrado para abrir a página indicada\n\n 1- Estoque Atual\n 2- Sair\n\n");
    scanf("%d", &num);

   if(num==2){
        return 0;
   }

    system("cls");
    printf(" Digite o número indicado para prosseguir com a compra de tal disco ou qualquer outro para voltar\n O estoque atual é:\n");
    printf(" 1- Queen\n 2- Gorillaz\n 3- Kiss\n 4- Anastacia\n 5- Iron Maiden\n 6- Pink Floyd\n 7- Tame Impala\n 8- Adele\n 9- Katy Perry\n 10- Dire Straits\n");
    scanf("%d",&est);

    switch(est){

    case 1:
    discos("Greatest Hits","Hollywood Records","Rock","Bohemian Rhapsody, Another One Bites The Dust, Killer Queen, Fat Bottomed Girls, Bicycle Race, You're My Best Friend, Don't Stop Me Now, Save Me, Crazy Little Thing Called Love, Somebody To Love, Now I'm Here, Good Old-Fashioned Lover Boy, Play the Game, Flash, Sevens Seas Of Rhye, We Will Rock You, We Are The Champions",400.09,1981,0);
    break;
    case 2:
    discos("Gorillaz","Parlophone","Electropop","Re-Hash, 5/4, Tomorrow Comes Today, New Genius(Brother), Clint Eastwood, Man Research(Clapper), Punk, Sound Check(Gravity), Double Bass, Rock The House, 19-2000 Latin Simone(Que Pasa Contigo), Starshine,Slow Country, M1 A1",135.00,2001,0);
    break;
    case 3:
    discos("Hot In The Shade","Mercury","Rock/Hard Rock","Rise To It, Betrayed, Hide Your Heart, Prisoner Of Love, Read My Body, Love's A Slap in The Face, Forever, Silver Spoon, Cadillac Dreams, King Of Hearts, The Street Giveth And TheStreet Taketh Away, You Love Me to Hate you, Somewhere Between Heaven And Hell, Little Casear, Boomerang ",145.14,1989,0);
    break;
    case 4:
    discos("Pieces of A Dream","Sony BMG Music Entertainment","Rock/Pop","I'm Outta Love, Not That Kind, Cowboys & Kisses, Made For Lovin' You,Paid My Dues, One Day In Your Life, Why'd You Lie to Me, You'll Never Be Alone, Left Outside Alone, Sick And Tired, Heavy On My Heart, Everything Burns, Pieces of a Dream, In Your Eyes, Club Megamix",48.00,1999,0);
    break;
    case 5:
    discos("Seventh Son of a Seventh Son","Capitol Records","Heavy Metal","Moonchild, Infinite Dreams, Can I Play with Madness, The Evil That Men Do, Seventh Son of a Seventh Son, The Prophecy, The Clairvoyant, Only The Good Die Young",149.00,1988,0);
    break;
    case 6:
    discos("The Dark Side of the Moon","Capitol Records","Rock Clássico","Speak To Me, Breathe(In the Air), On the Run, Time, The Great Gig In the Sky, Money, Us and Them, Any Colour You Like, Brain Damage, Eclipse",376.50,1973,0);
    break;
    case 7:
    discos("Currents","Modular Recordings","Ambiente","Let It Happen, Nangs, The Moment, Yes I'm Changing, Eventually, Gossip, The Less I know The Better, Past Life, Disciples, 'Cause I'm A Man, Reality In Motion, Love/Paranoia, New Person, Same Old Mistakes",345.00,2015,0);
    break;
    case 8:
    discos("21","XL Recordings Ltd","Pop","Rolling in the Deep, Rumour Has It, Turning Tables, Don't You Remember, Set  Fire to the Rain, He Won't Go, Take It All, I'll Be Waiting, One And Only, Lovesong, Someone Like You" ,190.63,2011,0);
    break;
    case 9:
    discos("Prism","Capitol records, LLC","Pop","Roar, Legendary Lovers, Birthday, Walking On Air, Unconditionally, Dark Horse, This Is How We Do, International Smile, Ghost, Love Me, This is Moment, Double Rainbow, By The Grace of God, Spiritual, It Takes Two, Choose Your Battles",108.00,2013,0);
    break;
    case 10:
    discos("Brothers in Arms","Mercury Records Limited","Rock","So Far Away, Money for Nothing, Walk Of Life, Your Latest Trick, Why Worry?, Ride Across The River, The Man's Too Strong, One World, Brothers In Arms",407.22,1985,0);
    break;

    default:
        system("cls");
    break;
    }


}while (num!=2);
    return 0;

}
