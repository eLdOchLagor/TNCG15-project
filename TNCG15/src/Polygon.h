#pragma once
#include <glm/glm.hpp>
#include <vector>
#include "Ray.h"
#include <utility>



	class Polygon {
	public:
		
		std::vector<glm::dvec3> verticies;
		glm::dvec3 color;
		glm::dvec3 normal;
		int surfaceID; // 0 = lights, 1 = mirror/transparent, 2 = diffuse
		double reflectance;
		bool isBoundry;

		virtual std::pair<Polygon*, double> surfaceIntersectionTest(Ray& r) { return std::pair(nullptr,999); };
		
	protected:
		
		


	private: 
		
	};


