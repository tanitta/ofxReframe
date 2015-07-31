#pragma once
#include "BaseComponent.h"
namespace ofxReframe {
	class BaseEntity {
		public:
			std::vector<std::shared_ptr<ofxReframe::BaseComponent>> components;
			BaseEntity(){};
			virtual ~BaseEntity(){};
	};
} // namespace ofxReframe
