#pragma once

#include "Common.h"
#include "Animation.h"

class Assets
{
    std::map<std::string, sf::Texture>      m_textureMap;
    std::map<std::string, Animation>        m_animationMap;
    std::map<std::string, sf::SoundBuffer>        m_soundMap;
    std::map<std::string, sf::Font>         m_fontMap;
    std::vector<std::string>                m_animationNames;
    void addTexture(const std::string & textureName, const std::string & path, bool smooth = true);
    void addSound(const std::string & soundName, const std::string & path);
    void addAnimation(const std::string & animationName, const std::string & textureName, size_t frameCount, size_t speed);
    void addFont(const std::string & fontName, const std::string & path);

public:

    Assets();

    void loadFromFile(const std::string & path);

    const sf::Texture & getTexture(const std::string & textureName) const;
    const Animation &   getAnimation(const std::string & animationName) const;
    const sf::SoundBuffer &   getSound(const std::string & soundName) const;
    const std::vector<std::string> & getAnimationNames() const;
    const sf::Font &    getFont(const std::string & fontName) const;
};