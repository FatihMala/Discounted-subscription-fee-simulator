#include <stdio.h>

double calculateDiscountedPrice(double, int, int);



int main() {

    // Example usage of the function
    double baseSubscriptionPrice; // Base price for the subscription
    int userAge; // Age of the user
    int subscriptionDurationMonths; // Subscription duration in months

    double discountedPrice; //discounted price

    // get the necessary input from the user
    printf("what is the base subscription plan price: ");
    scanf("%lf", &baseSubscriptionPrice);
    printf("what is the user's age: ");
    scanf("%d", &userAge);
    printf("how many months has the user been a member? ");
    scanf("%d", &subscriptionDurationMonths);

    discountedPrice = calculateDiscountedPrice(baseSubscriptionPrice, userAge, subscriptionDurationMonths);

    printf("Your base subscription plan price is %.3f\nThe discounted subscription price is: %.3f.", baseSubscriptionPrice, discountedPrice);
    return 0;
}


double calculateDiscountedPrice(double basePrice, int userAge, int subscriptionDuration)
{
    double discountedPrice;
    if(userAge<=18 || userAge>=60 )//If the user's age is 18 or less, or if the user's age is 60 or more than 60, the following discount will be applied
    {
       discountedPrice = basePrice*80/100;//20% discount is applied to the subscription price

      if(6<=subscriptionDuration && subscriptionDuration<=12)//Discount applies if subscription period is more than 6 months and less than 12 months.(6 and 12 months included).
      {
          discountedPrice = discountedPrice*90/100;//10% discount is applied to the subscription price.

          return discountedPrice;

      }
      else if(subscriptionDuration>12)//Discount applies when subscription duration is more than 12 months
      {
          discountedPrice = discountedPrice*85/100;//15% discount is applied to the subscription price.
          return discountedPrice;
      }
      else
      {

          return discountedPrice = basePrice*80/100;//20% discount is applied to the subscription price
      }
      return discountedPrice;



    }
    else if(6<=subscriptionDuration && subscriptionDuration<=12)//Discount applies if subscription period is more than 6 months and less than 12 months.(6 and 12 months included).
    {
        discountedPrice = basePrice*90/100;//10% discount is applied to the subscription price
          return discountedPrice;

    }
    else if(subscriptionDuration>12)//Discount applies when subscription duration is more than 12 months
      {
          discountedPrice = basePrice*85/100;//15% discount is applied to the subscription price
          return discountedPrice;
      }
      else
      {
          return basePrice;
      }


}
