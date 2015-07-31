#pragma once
namespace ofxReframe {
	class EntityManager {
		std::vector<std::shared_ptr<ofxReframe::BaseEntity>> entities;
		public:
		EntityManager(){};
		virtual ~EntityManager(){};
		
		void addEntity(std::shared_ptr<ofxReframe::BaseEntity> entity_sptr){
			
		}
	};
} // namespace ofxReframe
