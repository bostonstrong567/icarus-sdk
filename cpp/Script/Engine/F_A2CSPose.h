// /Script/Engine.A2CSPose
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimInstance.h

USTRUCT()
struct FA2CSPose : public FA2Pose
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    const FBoneContainer * BoneContainer;  // 0x0010, not reflected
    UPROPERTY() TArray<uint8> ComponentSpaceFlags;  // 0x0018, size 0x10
};
