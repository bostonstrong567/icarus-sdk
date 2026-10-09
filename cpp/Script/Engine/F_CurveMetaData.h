// /Script/Engine.CurveMetaData
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Animation/SmartName.h

USTRUCT()
struct FCurveMetaData
{
public:
    TArray<FBoneReference,TSizedDefaultAllocator<32> > LinkedBones;  // 0x0000, not reflected
    uint8 MaxLOD;  // 0x0010, not reflected
    FAnimCurveType Type;  // 0x0011, not reflected
};
