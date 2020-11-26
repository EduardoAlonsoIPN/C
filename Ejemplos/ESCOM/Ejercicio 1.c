//Exercise 1. FP, CD, ESCOM. Alonso Ramírez Luis Eduardo

#include <stdio.h>
#include <math.h>

double circle_radius(double area_value);
double square_root(int v_sr_value);
double sum_of_distances(float e_s, float e_m);
double m_to_km(double meters);
double m_to_cm(double meters);
float IMC_calc(float weight, float height);
int generate_square();int generate_rectangle();int generate_triangle();

int main(void){
    int v_sr_value, size_int, size_double, size_float, size_char, age;
    double v_area, v_radius, integer_value;
    double earth_sun_distance, earth_moon_distance;
    double km_value, m_value, cm_value;
    float weight, height, imc_calc_value;
    earth_sun_distance = 149597870700;
    earth_moon_distance = 384403000;
    v_area = 57.3;
    v_sr_value = 222;
    
    printf("IPN ESCOM\n");

    v_radius = circle_radius(v_area);
    printf("Circle Radius = %f \n", v_radius);

    integer_value = square_root(v_sr_value);
    printf("Integer part of SR of 222: %.0f \n", integer_value);

    m_value = sum_of_distances(earth_sun_distance, earth_moon_distance);
    km_value = m_to_km(m_value);
    cm_value = m_to_cm(m_value);
    printf("Sum in centimeters: %.2f cm. \n", cm_value);
    printf("Sum in meters: %.2f m. \n", m_value);
    printf("Sum in kilometers: %.2f km. \n", km_value);

    size_int = sizeof(int);
    size_float = sizeof(float);
    size_double = sizeof(double);
    size_char = sizeof(char);

    printf("Size of int: %d bytes\n", size_int);
    printf("Size of float: %d bytes\n", size_float);
    printf("Size of double: %d bytes\n", size_double);
    printf("Size of char: %d byte\n", size_char);

    printf("Ingresa tu edad: \n");
    scanf("%d", &age);
    fflush(stdin);
    printf("Ingresa tu peso: \n");
    scanf("%f", &weight);
    fflush(stdin);
    printf("Ingresa tu altura \n");
    scanf("%f", &height);
    fflush(stdin);
    printf("Your age: %d \n", age);
    printf("Your weight: %.2f \n", weight);
    printf("Your height: %.2f \n", height);

    imc_calc_value = IMC_calc(weight, height);
    printf("The IMC is: %.2f \n", imc_calc_value);

    generate_square();
    generate_rectangle();
    generate_triangle();

    return 0;
}

double circle_radius(double area_value){
    double circle_radius_value, pi;
    pi = 3.141516;
    circle_radius_value = sqrt(area_value/pi);
    return circle_radius_value;
}

double square_root(int v_sr_value){
    double non_integer_value, integer_value, decimal_part;
    non_integer_value = sqrt(v_sr_value);
    decimal_part = modf(non_integer_value, &integer_value);
    return integer_value;
}

double sum_of_distances(float e_s, float e_m){
    double sum_value;
    sum_value = e_s + e_m;
    return sum_value;
}

double m_to_km(double meters){
    double km_value = meters*0.001;
    return km_value;
}

double m_to_cm(double meters){
    double cm_value = meters*100;
    return cm_value;
}

float IMC_calc(float weight, float height){
    float imc_value;
    int power = 2;
    imc_value = weight / pow(height,power);
    return imc_value;
}

int generate_square(){
    printf("\n");
    printf("* * * * \n");
    for (int i = 0; i < 2; i++)
    {
        printf("*     * \n");
    }
    printf("* * * * \n");
    return 0;
}

int generate_rectangle(){
    printf("\n");
    printf("* * * * * * *\n");
    for (int i = 0; i < 2; i++)
    {
        printf("*           * \n");
    }
    printf("* * * * * * *\n");
    return 0;
}

int generate_triangle(){
    printf("\n");
    printf("    *\n");
    printf("   ***\n");
    printf("  *****\n");
    printf(" *******\n");
    printf("*********\n");
    return 0;
}