/***********************************************************************\
|                                                                       |
| CombinatorialParameter.h                                                   |
|                                                                       |
| This file is part of MicroGP v3 (ugp3)                                |
| http://ugp3.sourceforge.net/                                          |
|                                                                       |
| Copyright (c) 2002-2016 Giovanni Squillero                            |
|                                                                       |
|-----------------------------------------------------------------------|
|                                                                       |
| This program is free software; you can redistribute it and/or modify  |
| it under the terms of the GNU General Public License as published by  |
| the Free Software Foundation, either version 3 of the License, or (at |
| your option) any later version.                                       |
|                                                                       |
| This program is distributed in the hope that it will be useful, but   |
| WITHOUT ANY WARRANTY; without even the implied warranty of            |
| MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU      |
| General Public License for more details                               |
|                                                                       |
|***********************************************************************'
| $Revision: 644 $
| $Date: 2015-02-23 14:50:30 +0100 (Mon, 23 Feb 2015) $
\***********************************************************************/

#ifndef HEADER_UGP3_CONSTRAINTS_COMBINATORIALPARAMETER
#define HEADER_UGP3_CONSTRAINTS_COMBINATORIALPARAMETER

#include <vector>
#include <string>

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "DataParameter.h"

namespace ugp3
{
    namespace constraints
    {
        /** Represents a parameter whose values are choosen between a specific set of strings.
            @author Aimo Alessandro, Salomone Alessandro */
        class CombinatorialParameter : public DataParameter
        {
        private:
            /** The string that will separate the constants of this parameter. */
            std::string delimiter;

            /** The vector containing the constants of this parameter. */
            std::vector<std::string> constants;

            /** Copy constructor. It is declared private so it's cannot be accessed.*/
            CombinatorialParameter(const CombinatorialParameter&);
            
            static const std::string XML_CHILD_ELEMENT_VALUE;
            static const std::string XML_ATTRIBUTE_DELIMITER;
            
        public:
            /** Default constructor. */
            CombinatorialParameter();

            /** Constructor. Initializes a new instance of the constraints::CombinatorialParameter class. 
                @param name The name of the parameter.
                @param constants A vector containing the constants that can be assumed by this parameter.
		@param delimiter A string that will be used as a delimiter for the combination of constants.*/
            CombinatorialParameter(const std::string& name, const std::vector<std::string>* constants, const std::string& delimiter);

            /** Gets a random valid value.
                @return A string representing a random valid value. */
            virtual const std::string randomize() const;

            /** Tells if the value is valid for this parameter.
                @param value A string representing the value to validate.
                @return True if the value is valid, false otherwise. */
            virtual bool validate(const std::string& value) const;

			/** Clones the instance of the parameter.
                @param outParameter A pointer to the new instance.
                @param name The name of the cloned parameter. */
            virtual void clone(Parameter*& outParameter, const std::string& name);

            /** Destructor. */
            virtual ~CombinatorialParameter();
            
	    /** Getters */
            const std::vector<std::string>& getValues() const;
            const std::string& getDelimiter() const;

		/** Gets the regex representation for this parameter
		    @return String containing a regex expression. */
		virtual const std::string getRegex() const;

		public: // Xml interface
            /** Serializes the instance to an xml stream. 
                @param output The stream on which data will be output. */
            virtual void writeXml(std::ostream& output) const;

            /** Builds the object from the xml data. 
                @param element The xml element representing the object. */
            virtual void readXml(const xml::Element& element);
        };
        
         inline const std::vector<std::string>& CombinatorialParameter::getValues() const
         {
            return this->constants;
         }

         inline const std::string& CombinatorialParameter::getDelimiter() const
         {
            return this->delimiter;
         }
    }
}

#endif

