#include <Geode/Geode.hpp>
#include <Geode/modify/CCLabelBMFont.hpp>

using namespace geode::prelude;

class $modify(CCLabelBMFont) {
    void setString(char const* str) {
        // Safety: If the string is null, just pass it through
        if (!str) return CCLabelBMFont::setString(str);

        // Grab the name from your settings
        auto fake = Mod::get()->getSettingValue<std::string>("fake-name");

        // If the user hasn't typed anything, use the original game text
        if (fake.empty()) {
            return CCLabelBMFont::setString(str);
        }

        // Apply the custom name globally to labels
        CCLabelBMFont::setString(fake.c_str());
    }
};
