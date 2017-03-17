#define CATCH_CONFIG_MAIN
#include "catch.hpp"


TEST_CASE("Test Case #1", "[case_1]") {
    SECTION("True is True") {
        CHECK([]() { return true; }() == true);
    }
}
