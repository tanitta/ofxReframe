#pragma once
#include "ofxReframe/BaseEntity.h"
#include "ofxReframe/EntityManager.h"
#include "ofxReframe/EntityRenderer.h"
namespace ofxReframe {
	class ofxReframeManager {
		private:
			ofxReframe::EntityManager entityManager;
			ofxReframe::EntityRenderer entityRenderer;
		public:
			ofxReframeManager(){};
			
			virtual ~ofxReframeManager(){};
			
			void addEntity(std::shared_ptr<ofxReframe::BaseEntity> entity_sptr){
				entityManager.addEntity(entity_sptr);
			}
			
			void setup(){};
			
			void update(){};
			
			void draw(){
				entityRenderer.draw();
			};
			
			void makeEntity(){};
	};
} // namespace ofxReframe
