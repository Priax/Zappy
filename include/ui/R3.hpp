/*
** EPITECH PROJECT, 2024
** B-YEP-400-MAR-4-1-zappy-vincent.montero-fontaine
** File description:
** R3
*/

#pragma once
#include "Cube.hpp"
#include <iostream>
#include "AResource.hpp"
namespace zap
{
    class R3 : public AResource {
        public:
            R3(Vector3 pos);
            void Draw() override;
            void Update(bool newVal) override {_onMap = newVal;}
            ~R3();

        protected:
        private:
        zap::Cube _asset;
        bool _onMap = false;
        
    };
} // namespace zap

