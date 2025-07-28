/*
In addition to the three angles read as in question 5, if lengths of
three sides are also input through the keyboard, check whether a
triangle is an isosceles, an equilateral, a scalene or a right-angled
triangle. (Note: the required test can be done only on valid
triangles).
*/

#include <stdio.h>
#include <math.h>
int main() {
    float a1, a2, a3, s1, s2, s3;
    printf("Enter the first angle: ");
    scanf("%f", &a1);
    printf("Enter the second angle: ");
    scanf("%f", &a2);
    printf("Enter the third angle: ");
    scanf("%f", &a3);
    if(a1+a2+a3 == 180 && a1!=0 && a2!=0 && a3!=0) {
        printf("Enter the first side: ");
        scanf("%f", &s1);
        printf("Enter the second side: ");
        scanf("%f", &s2);
        printf("Enter the third side: ");
        scanf("%f", &s3);
        if(s1+s2>=s3 || s2+s3>=s1 || s3+s1>=s2) {
            if(a1==90 || a2==90 || a3==90) {
                if((s1*s1 == s2*s2 + s3*s3) || (s2*s2 == s1*s1 + s3*s3) || (s3*s3 == s2*s2 + s1*s1)) {
                    if(a1==a2||a2==a3||a3==a1) {
                        if(s1==s2||s2==s3||s3==s1) printf("The triangle is a right isosceles triangle.");
                        else printf("Invalid Triangle.");
                    } else {
                        if(s1!=s2||s2!=s3||s3!=s1) printf("The triangle is a right scalene triangle.");
                        else printf("Invalid Triangle.");
                    }
                } else printf("Invalid Triangle.");
            } else {
                if(a1==60 && a2==60 && a3==60) {
                    if(s1==s2 && s2==s3 && s1==s3) printf("The triangle is an equilateral triangle.");
                    else printf("Invalid Triangle.");
                } else {
                    if(s1==s2 && s2==s3 && s3==s1) printf("Invalid Triangle.");
                    else {
                        if((s1==s2 && s1!=s3) || (s2==s3 && s2!=s1) || (s1==s3 && s1!=s2)) printf("The triangle is an Isosceles Triangle.");
                        else printf("The triangle is an Scalene Triangle.");
                    }
                }
            }
        } else printf("Invalid Sides Provided.");
    } else printf("Invalid Angles Provided.");
}
