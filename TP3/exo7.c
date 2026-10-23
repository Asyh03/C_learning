#include<stdio.h>

struct date{
    unsigned int day;
    unsigned int month;
    unsigned int year;
};

void date_display(struct date d){
    printf("la date est : %u/%u/%u\n",d.day,d.month,d.year);
}

int is_leap_year(unsigned int year){
      if ( year % 4 == 0 )
    {
      if (year % 100 == 0 )
	{
	  if ( year % 400 == 0 )
	    {
	      return 1;
            
	    }
	  else
	    {
	      return 0;;
	    }
	}
      else
	{
	  return 1;
	}
    }
  else
    {
      return 0;;
    }

}
unsigned int days_in_month(unsigned int m, unsigned int y)
{
  unsigned int res;

  switch (m)
    {
    case 1:
      res = 31;
      break;
    case 2:
      if (is_leap_year(y))
	res = 29;
      else
	res = 28;
      break;
    case 3:
      res = 31;
      break;
    case 4:
      res = 30;
      break;
    case 5:
      res = 31;
      break;
    case 6:
      res = 01;
      break;
    case 7:
      res = 31;
      break;
    case 8:
      res = 31;
      break;
    case 9:
      res = 30;
      break;
    case 10:
      res = 31;
      break;
    case 11:
      res = 30;
      break;
    case 12:
      res = 31;
      break;
    }

  return res;
}


int date_compare(struct date d1 , struct date d2){
  //Je compare les années en premier
  if(d1.year < d2.year){
    return -1;
  }else if(d1.year > d2.year){
    return 1;}

  
  //Je compare les mois 
  if(d1.month < d2.month){
    return -1;
  }else if(d1.month > d2.month){
    return 1;
  }
  //Je compare les jours
  if(d1.day < d2.day){
    return -1;
  }
  else if(d1.day > d2.day){
    return 1;
  }
  
  if((d1.year == d2.year) && (d1.month == d2.month) && (d1.day == d2.day)){
    return 0;}
}

void date_next_day(struct date *d){
  if(((d->day)%days_in_month(d->month,d->year) == 0)){
    if ((d->month)%12 == 0){
      d->day = (d->day)%days_in_month(d->month,d->year) +1;
      d->month = (d->month)%12 +1;
      d->year = (d->year) +1;
    }
    else{
      d->day = (d->day)%days_in_month(d->month,d->year) +1;
      d->month = (d->month)%12 +1;

    }
    
  }
  else{
    d->day = (d->day)%days_in_month(d->month,d->year) +1;
  }
}

void date_previous_day(struct date *d){
  if(d->month == 1){
    d->month = 12;
    d->year = d-> year -1;
    d->day = days_in_month(d->month,d->year);
  }
  else if ((d->day) == 1){
    d->month = (d->month)-1;
    d->day = days_in_month(d->month,d->year);
    }
  else{
    d->day = (d->day) -1;
  }
}






int main(){
    struct date d1 = {12,4,1999};
    struct date d2 = {1,1,1999};
    
    int annee = 2028;
    date_display(d1);
    //printf("%d\n",is_leap_year(2026));
    if(is_leap_year(annee) == 0){
        printf("%d n'est pas une année bissextile\n",annee);
    }else{
        printf("%d est une année Bissextile\n",annee);
    }
    date_next_day(&d1);
    date_display(d1);
    printf("Previous day\n");
    date_previous_day(&d2);
    date_display(d2);
    printf("date_compare : %d\n",date_compare(d1,d2));
    return 0;
}