// /Script/Engine.CurveMetaData
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Animation/SmartName.h

USTRUCT()
struct FCurveMetaData
{

    // Not reflected:
    TArray<FBoneReference,TSizedDefaultAllocator<32> > LinkedBones;  // 0x0000
    uint8 MaxLOD;  // 0x0010
    FAnimCurveType Type;  // 0x0011
};
