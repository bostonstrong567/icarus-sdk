// /Script/Engine.InertializationPose
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_Inertialization.h

USTRUCT()
struct FInertializationPose
{
public:
    FTransform ComponentTransform;  // 0x0000, not reflected
    TArray<FTransform,TSizedDefaultAllocator<32> > BoneTransforms;  // 0x0030, not reflected
    TArray<enum EInertializationBoneState,TSizedDefaultAllocator<32> > BoneStates;  // 0x0040, not reflected
    FInertializationCurve Curves;  // 0x0050, not reflected
    FName AttachParentName;  // 0x0090, not reflected
    float DeltaTime;  // 0x0098, not reflected
};
