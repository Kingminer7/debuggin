#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/CCActionEase.hpp>

class $modify (CCActionEase) {
  void update(float dt) {
    log::info("Test - {}", typeid(this).name());
  }
}