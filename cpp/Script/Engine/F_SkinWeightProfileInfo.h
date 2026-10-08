// /Script/Engine.SkinWeightProfileInfo
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMesh.h

USTRUCT()
struct FSkinWeightProfileInfo
{
    UPROPERTY(EditAnywhere) FName Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FPerPlatformBool DefaultProfile;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere) FPerPlatformInt DefaultProfileFromLODIndex;  // 0x000C, size 0x4
};
