// /Script/Engine.InertializationPoseDiff
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_Inertialization.h

USTRUCT()
struct FInertializationPoseDiff
{

    // Not reflected:
    TArray<FInertializationBoneDiff,TSizedDefaultAllocator<32> > BoneDiffs;  // 0x0000
    TArray<FInertializationCurveDiff,TSizedDefaultAllocator<32> > CurveDiffs;  // 0x0010
    EInertializationSpace InertializationSpace;  // 0x0020
};
