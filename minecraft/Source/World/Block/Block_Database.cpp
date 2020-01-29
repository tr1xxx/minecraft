#include "../../../Headers/World/Block/Block_Database.h"
#include "../../../Headers/World/Block/Block_ID.h"

#include <memory>
#include <vector>

#include "../../../Headers/World/Block/Block_Types/Air.h"
#include "../../../Headers/World/Block/Block_Types/Grass.h"

namespace Block {

	namespace Database {

		std::vector<std::unique_ptr<Type>> blocks ((int)ID::NUM_BLOCK_TYPES);

		void init() {
		
			blocks[(int)ID::Air] = std::make_unique<Air>();
			blocks[(int)ID::Grass] = std::make_unique<Air>();

		}

		const Type& get(uint8_t id) {
		
			return *blocks[id];

		}

		const Type& get(ID blockID) {
		
			return *blocks[(int)blockID];

		}

	}

}