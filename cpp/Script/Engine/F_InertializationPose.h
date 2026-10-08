// /Script/Engine.InertializationPose
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_Inertialization.h

USTRUCT()
struct FInertializationPose
{

    // Not reflected:
    FTransform ComponentTransform;  // 0x0000
    TArray<FTransform,TSizedDefaultAllocator<32> > BoneTransforms;  // 0x0030
    TArray<enum EInertializationBoneState,TSizedDefaultAllocator<32> > BoneStates;  // 0x0040
    FInertializationCurve Curves;  // 0x0050
    FName AttachParentName;  // 0x0090
    float DeltaTime;  // 0x0098
};
