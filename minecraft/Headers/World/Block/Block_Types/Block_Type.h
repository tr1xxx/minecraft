#pragma once

#include <string>

#include "../Block_Data.h"

namespace Block {

	class Type {

	public:
		const Data& getData() const;

	protected:
		Type(const std::string& fileName);

	private:
		Data m_data;

	};

}