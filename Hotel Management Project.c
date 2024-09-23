#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#define Hotel_description printf("\nWelcome to Hotel Black Squad!☠️\n")
int menu();
int stay();
void Indian_veg();
void Indian_non_veg();
void Chinese_veg();
void Chinese_non_veg();
void Mexican_veg();
void Mexican_non_veg();
void Thai_veg();
void Thai_non_veg();
void Indian();
void Chinese();
void Mexican();
void Thai();
void getBill();
void single_bed();
void Double_Bed();
void adddish(char a[],int cost);
struct Dishes{
    char data[50];
    int cost;
}order[50];
 static int c=0;
int main() {
    Hotel_description;
    printf("\nEnter Your name :");
    char a[20];
    scanf("%[^\n]s",a);
    printf("-----------------------------------");
    printf("\n%s! which one do you prefer... \n",a);
    printf(" 1. Food \n 2. Food 'N' Stay \n");
    printf("-----------------------------------\n");
    int n;
    bool flag=1;
    scanf("%d",&n);
    while(flag)
    {
        switch(n)
        {
            case 1:
                menu();
                flag=0;
                break;
            case 2:
                stay();
                flag=0;
                break;
            default:
                printf("Enter the correct value!");
        }
    }
    printf("Thank you");
    getBill();
    return 0;
}
int menu()
{
    printf("-----------------------------------\n");
    printf(" 1. Indian Dish\n 2. Chinese Dish\n 3. Mexican Dish\n 4. Thai Dish\n");
    printf("-----------------------------------\n");
    int n;
    bool flag;
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            Indian();
            flag=0;
            break;
        case 2:
            Chinese();
            break;
        case 3:
            Mexican();
            break;
        case 4:
            Thai();
            break;
        default:
            printf("Enter the correct value!");
    }
}
int stay()
{
    printf("1. Single Bed\n2. Double Bed\n");
    int n,s,b;
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            single_bed();
            break;
        case 2:
            Double_Bed();
            break;
        default:
            printf("Enter the correct value!");
    }
    printf("Select the menu!\n");
    menu();
}

void single_bed()
{
    int n,hr=1,min=12;
    printf("-----------------------------------\n");
    printf("Enter the Quantity :\n");
    scanf("%d",&n);
    printf("Enter the Duration(Min 12Hrs) :\n");
    scanf("%d",&hr);
    hr=(hr<min)?min:hr;
    printf("-----------------------------------\n");
    strcpy(order[c].data,"Single Bed");
    order[c].cost=n*1000*(hr/12);
    ++c;
}
void Double_Bed()
{
    int n,hr=1;
    printf("-----------------------------------\n");
    printf("Enter the Quantity :\n");
    scanf("%d",&n);
    printf("Enter the Duration(Min 12Hrs) :\n");
    scanf("%d",&hr);
    printf("-----------------------------------\n");
    strcpy(order[c].data,"Single Bed");
    order[c].cost=n*1000*(hr/12);
    ++c;
}

void Indian()
{
    bool flag=1;
    while(flag)
    {
        printf("-----------------------------------\n");
        printf(" 1. Veg Dish! \n 2. Non-Veg Dish! \n");
        printf("-----------------------------------\n");
        int n;
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                Indian_veg();
                flag=0;
                break;
            case 2:
                Indian_non_veg();
                flag=0;
                break;
            default:
                printf("Enter the correct value!");
        }
    }
}
void Indian_veg()
{
    char indie[21][20]={"Idly","Paneer Tikka","Aloo Gobi","Dosa","Chana Masala","Pongal","Poori","Chapathi","Vegetable Biryani","Palak Paneer","Curd rice","Aloo Paratha","Meals","Samosa","Variaty rice","Tandoori Roti","Gobi Manchurian","Aloo Jeera","Veg Pulao","Bhindi Masala","-Exit Menu-"};
    int cost[21]={15,80,120,50,60,50,50,40,60,100,30,120,80,15,100,90,120,90,80,50,0},orderflag=1;
    printf("-----------------------------------\n");
    for(int i=0;i<21;i++) printf(" %d. %s - Rs.%d\n",i+1,indie[i],cost[i]);
    printf("-----------------------------------\n");
    int item,quantity;
    while(orderflag)
    {
        printf("\nSelect the dishes for you plate\n");
        scanf("%d",&item);
        if(item==21) break;
        scanf("%d",&quantity);
        strcpy(order[c].data,indie[item-1]);
        order[c].cost=cost[item-1]*quantity;
        ++c;
    }
}
void Indian_non_veg()
{
    char indie[21][20]={"Chicken Biriyani","Chicken fry","Mutton Gravy","Mutton Gravy","Crab soup","Duck fry","Egg Pepper Fry","Egg Fried Rice","Hydrabad Biryani","Fish Fry","Fish Tawa","Chicken Borota pozhichadhu","Fish pozhichathu","Beef Fry","Chicken Fried rice","Fish Fried rice","Chettinad-Chicken","Chicken Tikka","Fish Tikka","Full Grill chicken","-Exit Menu-"};
    int cost[21]={100,80,220,150,90,80,50,70,160,85,65,90,120,90,75,85,250,100,110,300,1},orderflag=1;
    printf("-----------------------------------\n");
    for(int i=0;i<21;i++) printf(" %d. %s - %d\n",i+1,indie[i],cost[i]);
    printf("-----------------------------------\n");
    int item,quantity;
    while(orderflag)
    {
        printf("\nSelect the dishes for your plate\n");
        scanf("%d",&item);
        if(item==21) break;
        printf("Enter the quantity");
        scanf("%d",&quantity);
        strcpy(order[c].data,indie[item-1]);
        order[c].cost=cost[item-1]*quantity;
        ++c;
    }
    
}
void Chinese()
{
    bool flag=1;
    while(flag)
    {
        printf("-----------------------------------\n");
        printf(" 1. Veg Dish! \n 2. Non-Veg Dish! \n");
        printf("-----------------------------------\n");
        int n;
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                Chinese_veg();
                flag=0;
                break;
            case 2:
                Chinese_non_veg();
                flag=0;
                break;
            default:
                printf("Enter the correct value!");
        }
    }
}
void Mexican()
{
    bool flag=1;
    while(flag)
    {
        printf("-----------------------------------\n");
        printf(" 1. Veg Dish! \n 2. Non-Veg Dish! \n");
        printf("-----------------------------------\n");
        int n;
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                Mexican_veg();
                flag=0;
                break;
            case 2:
                Mexican_non_veg();
                flag=0;
                break;
            default:
                printf("Enter the correct value!");
        }
    }
}
void Thai()
{
    bool flag=1;
    while(flag)
    {
        printf("-----------------------------------\n");
        printf(" 1. Veg Dish! \n 2. Non-Veg Dish! \n");
        printf("-----------------------------------\n");
        int n;
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                Thai_veg();
                flag=0;
                break;
            case 2:
                Thai_non_veg();
                flag=0;
                break;
            default:
                printf("Enter the correct value!");
        }
    }
}
void Chinese_veg()
{
    char indie[21][20]={"Mapo Tofu","Vegetable Spring Rolls","Stir-Fried Bok Choy","Kung Pao Vegetables","Vegetarian Dumplings","Szechuan Eggplant","Hot and Sour Soup","Cabbage and Mushroom Stir-Fry","Fried Tofu with Garlic Sauce","Vegetarian Chow Mein","Sweet and Sour Vegetables","Spicy Sichuan Noodles","Buddha's Delight","Ma La Xiang Guo (Spicy Hot Pot)","Snow Peas with Water Chestnuts","General Tso's Cauliflower","Vegetarian Dim Sum","Garlic Ginger Broccoli","Five-Spice Tofu Stir-Fry","Crispy Sesame Tofu","-Exit Menu-"};
    int cost[21]={200,280,220,150,260,150,250,240,160,200,230,220,180,215,200,190,220,190,180,150,1},orderflag=1;
    printf("-----------------------------------\n");
    for(int i=0;i<21;i++) printf(" %d. %s - %d\n",i+1,indie[i],cost[i]);
    printf("-----------------------------------\n");
    int item,quantity;
    while(orderflag)
    {
        printf("\nSelect the dishes for your plate\n");
        scanf("%d",&item);
        if(item==21) break;
        printf("Enter the quantity :");
        scanf("%d",&quantity);
        strcpy(order[c].data,indie[item-1]);
        order[c].cost=cost[item-1]*quantity;
        ++c;
    }
    
}
void Chinese_non_veg()
{
    char indie[21][20]={"Peking Duck","Sweet and Sour Pork","Kung Pao Chicken","Mongolian Beef","General Tso's Chicken","Dim Sum (Various Types)","Beijing Beef","Szechuan Shrimp","Mapo Tofu","Crispy Fried Spring Rolls","Hot and Sour Soup","Shrimp with Lobster Sauce","Cantonese Roast Duck","Egg Foo Young","Chow Mein (Chicken, Beef, or Shrimp)","Stir-Fried Black Pepper Beef","Salt and Pepper Calamari","Garlic Butter Lobster","Hunan Lamb","Shrimp Fried Rice","-Exit Menu-"};
    int cost[21]={315,280,120,250,360,450,650,540,760,700,830,920,780,615,300,290,420,590,680,450,1},orderflag=1;
    printf("-----------------------------------\n");
    for(int i=0;i<21;i++) printf(" %d. %s - %d\n",i+1,indie[i],cost[i]);
    printf("-----------------------------------\n");
    int item,quantity;
    while(orderflag)
    {
        printf("\nSelect the dishes for your plate\n");
        scanf("%d",&item);
        if(item==21) break;
        printf("Enter the quantity :");
        scanf("%d",&quantity);
        strcpy(order[c].data,indie[item-1]);
        order[c].cost=cost[item-1]*quantity;
        ++c;
    }
    
}
void Mexican_veg()
{
    char indie[21][20]={"Guacamole","Enchiladas verdes","Chiles en nogada","Sopes","Rajas con crema","Tostadas","Tamales de elote","Nopales a la mexicana","Chiles rellenos de queso","Huaraches","Esquites","Chalupas","Entomatadas","Flautas","Quesadillas","Ensalada de nopales","Calabacitas a la mexicana","Papas con rajas","Champiñones al ajillo","Elote asado","-Exit Menu-"};
    int cost[21]={315,280,320,250,260,150,350,240,360,200,230,320,280,115,200,290,220,390,180,250,1},orderflag=1;
    printf("-----------------------------------\n");
    for(int i=0;i<21;i++) printf(" %d. %s - %d\n",i+1,indie[i],cost[i]);
    printf("-----------------------------------\n");
    int item,quantity;
    while(orderflag)
    {
        printf("\nSelect the dishes for your plate\n");
        scanf("%d",&item);
        if(item==21) break;
        printf("Enter the quantity :");
        scanf("%d",&quantity);
        strcpy(order[c].data,indie[item-1]);
        order[c].cost=cost[item-1]*quantity;
        ++c;
    }
    
}
void Mexican_non_veg()
{
    char indie[21][20]={"Tacos al Pastor","Enchiladas Suizas","Chiles Rellenos","Carnitas","Mole Poblano","Tamales","Chorizo","Tostadas de Tinga","Pozole","Birria","Camarones a la Diabla","Barbacoa","Ceviche de Camarón","Sopes","Huevos Rancheros","Tortas Ahogadas","Chilaquiles","Pescado a la Veracruzana","Costillas en Salsa Verde","Chimichanga","-Exit Menu-"};
    int cost[21]={315,380,320,250,360,250,350,240,360,200,230,320,280,415,200,290,420,390,280,250,1},orderflag=1;
    printf("-----------------------------------\n");
    for(int i=0;i<21;i++) printf(" %d. %s - %d\n",i+1,indie[i],cost[i]);
    printf("-----------------------------------\n");
    int item,quantity;
    while(orderflag)
    {
        printf("\nSelect the dishes for your plate\n");
        scanf("%d",&item);
        if(item==21) break;
        printf("Enter the quantity :");
        scanf("%d",&quantity);
        strcpy(order[c].data,indie[item-1]);
        order[c].cost=cost[item-1]*quantity;
        ++c;
    }
    
}
void Thai_veg()
{
    char indie[21][20]={"Pad Thai","Som Tum (Green Papaya Salad)","Tom Yum Hed (Spicy Mushroom Soup)","Pad See Ew (Stir-Fried Wide Rice Noodles)","Gaeng Keow Wan (Green Curry)","Khao Pad (Fried Rice)","Laab Hed (Spicy Mushroom Salad)","Pad Krapow Tofu (Stir-Fried Tofu with Basil)","Tom Kha Hed (Coconut Mushroom Soup)","Phad Pak Boong Fai Daeng (Stir-Fried Morning Glory)","Massaman Curry","Khao Soi (Curry Noodle Soup)","Yam Hed (Mushroom Salad)","Pad Prik King Tofu (Stir-Fried Tofu with Red Curry Paste)","Jungle Curry (Gaeng Pa)","Pad Pak Ruam (Mixed Vegetables Stir-Fry)","Tao Hoo Song Kreuang (Fried Tofu with Peanut Sauce)","Pad Preaw Wan (Sweet and Sour Tofu)","Yam Pla Duk Fu (Crispy Catfish Salad)","Khao Pad Sapparot (Pineapple Fried Rice)","-Exit Menu-"};
    int cost[21]={215,180,120,350,460,150,250,340,560,200,330,220,280,315,500,490,420,490,380,250,1},orderflag=1;
    printf("-----------------------------------\n");
    for(int i=0;i<21;i++) printf(" %d. %s - %d\n",i+1,indie[i],cost[i]);
    printf("-----------------------------------\n");
    int item,quantity;
    while(orderflag)
    {
        printf("\nSelect the dishes for your plate\n");
        scanf("%d",&item);
        if(item==21) break;
        printf("Enter the quantity :");
        scanf("%d",&quantity);
        // if(item==21) break;
        strcpy(order[c].data,indie[item-1]);
        order[c].cost=cost[item-1]*quantity;
        ++c;
    }
    
}
void Thai_non_veg()
{
    char indie[21][20]={"Pad Thai","Tom Yum Goong (Spicy Shrimp Soup)","Green Curry Chicken (Gaeng Keow Wan Gai)","Massaman Curry (Gaeng Massaman)","Som Tum (Green Papaya Salad with Shrimp)","Khao Pad (Fried Rice)","Pad Krapow Moo (Basil Pork Stir-Fry)","Tom Kha Gai (Chicken Coconut Soup)","Gaeng Daeng (Red Curry)","Pla Rad Prik (Fried Fish with Chili Sauce)","Laab (Spicy Minced Meat Salad)","Pad See Ew (Stir-Fried Noodles with Soy Sauce)","Gaeng Ped Yang (Red Curry with Roast Duck)","Moo Ping (Grilled Pork Skewers)","Yam Nua (Spicy Beef Salad)","Gai Pad Med Mamuang (Cashew Nut Chicken)","Kai Med Ma Muang (Chicken with Cashew Nuts)","Hoy Tod (Thai-style Oyster Omelette)","Pla Kapong Neung Manao (Steamed Sea Bass with Lime)","Pad Kra Pao Talay (Seafood Basil Stir-Fry)","-Exit Menu-"};
    int cost[21]={215,480,320,250,560,550,450,740,660,800,930,1120,280,415,400,390,520,690,780,650,1},orderflag=1;
    printf("-----------------------------------\n");
    for(int i=0;i<21;i++) printf(" %d. %s - %d\n",i+1,indie[i],cost[i]);
    printf("-----------------------------------\n");
    int item,quantity;
    while(orderflag)
    {
        printf("\nSelect the dishes for your plate\n");
        scanf("%d",&item);
        if(item==21) break;
        printf("Enter the quantity : ");
        
        scanf("%d",&quantity);
        if(item==21) break;
        strcpy(order[c].data,indie[item-1]);
        order[c].cost=cost[item-1]*quantity;
        ++c;
    }
    
}

void getBill()
{
    int sum=0;
    printf("\n-----------------------------------\n");
    printf("\tHere is Your Bill");
    printf("\n-----------------------------------\n");
    for(int i=0;i<c;i++) 
    {
        printf(" %d %s - Rs.%d\n",i+1,order[i].data,order[i].cost);
        sum+=order[i].cost;
    }
    printf("\n-----------------------------------\n");
    printf(" -Total-  = Rs.%d\n",sum);
    printf("-----------------------------------\n");
}