// /Script/Engine.InertializationBoneDiff
// size 0x3C, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_Inertialization.h

USTRUCT()
struct FInertializationBoneDiff
{
public:
    FVector TranslationDirection;  // 0x0000, not reflected
    FVector RotationAxis;  // 0x000C, not reflected
    FVector ScaleAxis;  // 0x0018, not reflected
    float TranslationMagnitude;  // 0x0024, not reflected
    float TranslationSpeed;  // 0x0028, not reflected
    float RotationAngle;  // 0x002C, not reflected
    float RotationSpeed;  // 0x0030, not reflected
    float ScaleMagnitude;  // 0x0034, not reflected
    float ScaleSpeed;  // 0x0038, not reflected
};
