// /Script/Engine.InertializationBoneDiff
// size 0x3C, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_Inertialization.h

USTRUCT()
struct FInertializationBoneDiff
{

    // Not reflected:
    FVector TranslationDirection;  // 0x0000
    FVector RotationAxis;  // 0x000C
    FVector ScaleAxis;  // 0x0018
    float TranslationMagnitude;  // 0x0024
    float TranslationSpeed;  // 0x0028
    float RotationAngle;  // 0x002C
    float RotationSpeed;  // 0x0030
    float ScaleMagnitude;  // 0x0034
    float ScaleSpeed;  // 0x0038
};
