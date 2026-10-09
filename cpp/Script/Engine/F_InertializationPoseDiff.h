// /Script/Engine.InertializationPoseDiff
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_Inertialization.h

USTRUCT()
struct FInertializationPoseDiff
{
private:
    TArray<FInertializationBoneDiff,TSizedDefaultAllocator<32> > BoneDiffs;  // 0x0000, not reflected
    TArray<FInertializationCurveDiff,TSizedDefaultAllocator<32> > CurveDiffs;  // 0x0010, not reflected
    EInertializationSpace InertializationSpace;  // 0x0020, not reflected
};
