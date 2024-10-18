#include "Speed.h"

class AUVClass : public Module {
public:
    AUVClass() : Module(Category::Movement, "Make your movements more sensitive") {}

    ~AUVClass() {}

    const char *getModuleName(bool b) {
        return ("AUVModuleName");
    }

    void onMove(MoveInputHandler *self) {
        Actor *AUVActor = Hurt_GameMode->getPrimaryLocalPlayer();

        Rot AUVRot = {self->getForwardMovement(), -self->getSideMovement()};

        if (sqrt(pow(AUVRot.x, 2) + pow(AUVRot.y, 2)) > 0.01) {
            float AUVCalcYaw = (AUVActor->getYaw() + 90) * (3.1415926 / 180);
            float AUVCos = cos(AUVCalcYaw);
            float AUVSin = sin(AUVCalcYaw);

            AUVRot = {AUVRot.x * AUVCos - AUVRot.y * AUVSin,
                      AUVRot.x * AUVSin + AUVRot.y * AUVCos};

            Pos *AUVPos = AUVActor->getMotion();
            BlockPos AUVBlockPos = *AUVActor->getPosInt();
            if (strstr(AUVActor->getRegion()->getBlock(AUVBlockPos.x, AUVBlockPos.y,
                                                       AUVBlockPos.z)->toLegacy()->getName().c_str(),
                       "air") == NULL) {
                AUVActor->jumpFromGround();
            }
            AUVPos->x = AUVRot.x * speed;
            AUVPos->z = AUVRot.y * speed;

            AUVActor->lerpMotion(AUVPos);
        }
    }
};
