#include<stdio.h>

#define NB_CAPTEURS 5
#define NB_HEURES 24
#define NB_MESURES 3
enum mesure{ TEMPERATURE, PRESSION, HUMIDITE};
typedef enum mesure measure_t;
double releve[NB_CAPTEURS][NB_HEURES][NB_MESURES];

void init_measurements(double tab[][NB_HEURES][NB_MESURES]){ // Mettre TEMPERATURE, PRESSION, HUMIDITE à 0
    for(unsigned int i = 0;i < NB_CAPTEURS;i++){
        for(unsigned int j = 0;j<NB_HEURES;j++){
            for(unsigned k = 0;k<NB_MESURES;k ++){
                tab[i][j][k] = 0;
            }
        }
    }
}

double average_sensor_measure(double tab[][NB_HEURES][NB_MESURES],int n,measure_t grandeur,int capteur){
    double res = 0;
    for(unsigned int i = 0;i<NB_HEURES;i++){
        res += tab[capteur][i][grandeur];

    }
    return res / NB_HEURES;

}
double average_measure(double tab[][NB_HEURES][NB_MESURES],int n,measure_t grandeur){
    double res = 0;
    for(unsigned int i = 0; i< NB_CAPTEURS;i++){
        res += average_sensor_measure(tab,n,grandeur,i);
    }
    return res/NB_CAPTEURS;
}

double min_measure(double tab[][NB_HEURES][NB_MESURES],int n,measure_t grandeur,int capteur){
    double mini = tab[0][0][0];
    for(unsigned int i = 0; i< NB_HEURES;i++){
        if (tab[capteur][i][grandeur] < mini){
            mini = tab[capteur][i][grandeur];

        }
    }
    return mini;
}

double max_measure(double tab[][NB_HEURES][NB_MESURES],int n,measure_t grandeur,int capteur){
    double maxi = tab[0][0][0];
    for(unsigned int i = 0; i< NB_HEURES;i++){
        if (tab[capteur][i][grandeur] > maxi){
            maxi = tab[capteur][i][grandeur];

        }
    }
    return maxi;
}
int count_above(double tab[][NB_HEURES][NB_MESURES],int n,measure_t grandeur,double seuil){
    int cpt = 0;
    for(unsigned int i = 0; i<NB_CAPTEURS;i++){
        for(unsigned int j = 0; j<NB_HEURES;j++){
            if(tab[i][j][grandeur] > seuil){
                cpt ++;
            }
        }
    }
    return cpt;
}
int main(){
    printf("Success\n");
    return 0;
}