//1
#include <iostream>
#include <string>

        class Motorcycle
        {
    private:
        int MotorcycleInstances = 1;
        int TopSpeed = 260;
        std::string Model = "Ninja";
        std::string Brand = "Kawasaki";


    public:       
        Motorcycle() {}

        Motorcycle(const std::string& brand, const std::string& model)
            : Brand(brand), Model(model) {}

        Motorcycle(const std::string& brand, const std::string& model, int topSpeed)
            : Brand(brand), Model(model), TopSpeed(topSpeed) {}
        

    //2    
#include <iostream>
#include <string>

        class Car
        {
        private:
            int CarInstances = 1;
            int TopSpeed = 280;
            std::string Model = "Mercedes";
            std::string Brand = "Audi";

        public:
            Car() {}

            Car(const std::string& brand, const std::string& model)
                : Brand(brand), Model(model) {}

            Car(const std::string& brand, const std::string& model, int topSpeed)
                : Brand(brand), Model(model), TopSpeed(topSpeed) {}
        };
//3

#include <iostream>
#include <string>

        class Person
        {
        private:
            std::string name;
            int age;

        public:
            Person(const std::string& n, int a)
                : name(n), age(a) {}

            void printInfo() {
                std::cout << "Name: " << name << ", Age: " << age << std::endl;
            }
        };
//4

#include <iostream>
#include <string>

        class Rectangle {
        protected:
            int longueur;
            int largeur;
            std::string nom;

        public:
            Rectangle(int l, int w, const std::string& n)
                : longueur(l), largeur(w), nom(n) {}

            int perimetre() {
                return 2 * (longueur + largeur);
            }

            int surface() {
                return longueur * largeur;
            }

            void afficher() {
                std::cout << "Nom: " << nom << ", Longueur: " << longueur
                    << ", Largeur: " << largeur << std::endl;
                std::cout << "Perimetre: " << perimetre() << ", Surface: " << surface()
                    << std::endl;
            }
        };

        class Carre : public Rectangle {
        public:
            Carre(int cote) : Rectangle(cote, cote, "carre") {}
        };
//5

#include <iostream>
#include <string>

        class CompteBancaire {
        private:
            std::string nom;
            double solde;

        public:
            CompteBancaire(const std::string& n = "Doe", double s = 1000)
                : nom(n), solde(s) {}

            void depot(double somme) {
                solde += somme;
            }

            void retrait(double somme) {
                solde -= somme;
            }
        };


