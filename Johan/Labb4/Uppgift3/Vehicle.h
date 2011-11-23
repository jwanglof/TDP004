#ifndef VEHICLE_H_
#define VEHICLE_H_

#include <iostream>
#include <string>

class Vehicle {
public:
  Vehicle(const std::string& reg_number,
          const std::string& color,
          const int number_of_doors);
  virtual ~Vehicle();

  void set_color(const std::string& color);
  std::string get_color() const;

  int get_number_of_doors() const;
  std::string get_reg_number() const;

  virtual std::string get_class_name() const;

  virtual void print(std::ostream& os) const=0;

  static int get_number_of_objects();

  friend std::ostream& operator<<(
    std::ostream& os,
    const Vehicle& rhs);

private:
  const std::string vehicle_reg_number;
  std::string vehicle_color;
  const int vehicle_number_of_doors;
  static int number_of_objects;
};

#endif /* #ifndef VEHICLE_H_ */
