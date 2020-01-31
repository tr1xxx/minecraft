#include "../../../Headers/World/Block/Block_Database.h"
#include "../../../Headers/World/Block/Block_ID.h"

#include "../../../Headers/World/Block/Block_Types/Air.h"
#include "../../../Headers/World/Block/Block_Types/Grass.h"

namespace Block {

	Database& Database::get() {
	
		static Database database;
		return database;

	}

	Database::Database() 
	: blocks ((int)ID::NUM_BLOCK_TYPES) {
	
		blocks[(int)ID::Air] = std::make_unique<Air>();
		blocks[(int)ID::Grass] = std::make_unique<Air>();

	}

	const Type& Database::get(uint8_t id) {
	
		return *blocks[id];

	}

	const Type& Database::get(ID blockID) {
	
		return *blocks[(int)blockID];

	}

}