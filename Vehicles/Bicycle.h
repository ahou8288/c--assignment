#ifndef BICYCLE_H
#define BICYCLE_H
    #include <vehicle.h>
    namespace vehicle
    {
        class Bicycle : public Vehicle
        {
        public:
            ~Bicycle();

            Bicycle(int numberOfPassengers,
                int topSpeed,
                bool helmetUsed = false,
                int numberOfWheels = 2);

            Bicycle(int numberOfPassengers,
                int topSpeed,
                std::string color,
                bool helmetUsed = false,
                int numberOfWheels = 2);

        public:
            virtual int getSafetyRating();

            bool m_helmetUsed;
        };
    }

#endif // BICYCLE_H
