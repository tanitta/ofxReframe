#pragma once
#include "ofxReframe/BaseEntity.h"
namespace ofxReframe {
	class EntityRenderer {
		private:
			std::vector<std::shared_ptr<ofxReframe::BaseEntity>> entities;
		public:
			EntityRenderer(){};
			
			virtual ~EntityRenderer(){};
			
			void setEntity(std::shared_ptr<ofxReframe::BaseEntity> entity_sptr){
				entities.push_back(entity_sptr);
			}
			
			void draw(){
				for (auto&& entity : entities) {
					
				}
			};
	};
} // namespace ofxReframe
