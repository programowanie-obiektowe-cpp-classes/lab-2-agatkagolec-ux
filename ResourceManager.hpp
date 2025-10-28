#pragma once

#include "Resource.hpp"

class ResourceManager
{
   Resource * resource;

public:
   ResourceManager() 
   { 
     resource = new Resource;
   }

    ResourceManager(const ResourceManager& other) 
    { 
        resource = new Resource(*other.resource);
    }

    ResourceManager& operator=(const ResourceManager& other) 
    { 
        if (this !=&other) 
            {
            delete resource;
            resource = new Resource(*other.resource);
        }
        return *this;
    }

     double get() const { return resource->get(); }

   ~ResourceManager() 
   { 
       delete resource; 
   }

   
};

