/**
 * @file serial_ids_base.hpp
 * @author sami dhiab (sami@theion.de)
 * @brief include a base class that defines all ids
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#define NOPE 
//#define using_iostream
//#define using_serial_stream
#ifdef using_iostream
   #include <iostream> // use to test on pc
#endif
#ifdef using_serial_stream
   #include <Arduino.h> // test direct with serial.print
#endif
/**
 * @brief class devices ids to inherit from
 * 
 */
class Devices_ids //if not under public, members are private by default
{
private:

   const char *default_id;
   const char *temp_id;
   const char *sf6_id;
   const char *wafer_alignement_id;
   const char *printhead_movement_id;
public:
/**
 * @brief Construct a new Devices_ids object
 * 
 */
   Devices_ids(){

   default_id = "0";
   temp_id = "id_temp";
   sf6_id = "id_sf6";
   wafer_alignement_id = "id_align";

   #ifdef using_serial_stream
   /*
      Serial.println("hello from ids factory, listing ids:");
      Serial.println(default_id);
      Serial.println(temp_id);
      Serial.println(sf6_id);
      Serial.println(wafer_alignement_id);
   */
   #endif
   #ifdef using_iostream
      std::cout << "hello from ids factory\n";
      std::cout<<"default_id: "<<default_id<< std::endl;
      std::cout<<"temp_id: "<<temp_id<< std::endl;
      std::cout<<"sf6_id: "<<sf6_id<< std::endl;
      std::cout<<"wafer_alignement_id: "<<wafer_alignement_id<< std::endl;
   #endif
}
////////////////
// getter methods to return private attributes
//////////////////

/**
 * @brief Get the default id object
 * 
 * @return const char* 
 */
const char* get_default_id(){ // use auto if confused : auto get_temp_id(){}
   #ifdef using_serial_stream
      Serial.println(default_id);
   #endif
   #ifdef using_iostream
      std::cout<<"getting private temp_id: "<<temp_id<< std::endl;
   #endif
return default_id;
}
/**
 * @brief Get the temp id object
 * 
 * @return const char* 
 */
const char* get_temp_id(){ // use auto if confused : auto get_temp_id(){}
   #ifdef using_serial_stream
      Serial.println(temp_id);
   #endif   
   #ifdef using_iostream
      std::cout<<"getting private temp_id: "<<temp_id<< std::endl;
   #endif
return temp_id;
}
/**
 * @brief Get the wafer alignement id object
 * 
 * @return const char* 
 */
const char* get_wafer_alignement_id(){ // use auto if confused : auto get_temp_id(){}
   #ifdef using_serial_stream
      Serial.println(wafer_alignement_id);
   #endif
   #ifdef using_iostream
      std::cout<<"getting private temp_id: "<<temp_id<< std::endl;
   #endif
return wafer_alignement_id;
}
/**
 * @brief Get the sf6 id object
 * 
 * @return const char* 
 */
const char* get_sf6_id(){ // use auto if confused : auto get_temp_id(){}
   #ifdef using_serial_stream
      Serial.println(sf6_id);
   #endif   
   #ifdef using_iostream
      std::cout<<"getting private temp_id: "<<temp_id<< std::endl;
   #endif
return sf6_id;
}

/// implement the same method for all attribute 





};
