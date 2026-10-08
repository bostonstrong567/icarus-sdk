// /Script/Engine.BlendProfile
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Animation/BlendProfile.h

UCLASS()
class UBlendProfile : public UObject
{
public:
    UPROPERTY() USkeleton* OwningSkeleton;  // 0x0030, size 0x8
    UPROPERTY() TArray<FBlendProfileBoneEntry> ProfileEntries;  // 0x0038, size 0x10
};
