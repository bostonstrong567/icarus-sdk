// /Script/Engine.RootMotionSourceGroup
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/RootMotionSource.h

USTRUCT()
struct FRootMotionSourceGroup
{
public:
    TArray<TSharedPtr<FRootMotionSource,0>,TSizedDefaultAllocator<32> > RootMotionSources;  // 0x0008, not reflected
    TArray<TSharedPtr<FRootMotionSource,0>,TSizedDefaultAllocator<32> > PendingAddRootMotionSources;  // 0x0018, not reflected
    UPROPERTY() uint8 bHasAdditiveSources : 1;  // 0x0028, mask 0x01
    UPROPERTY() uint8 bHasOverrideSources : 1;  // 0x0028, mask 0x02
    UPROPERTY() uint8 bHasOverrideSourcesWithIgnoreZAccumulate : 1;  // 0x0028, mask 0x04
    UPROPERTY() uint8 bIsAdditiveVelocityApplied : 1;  // 0x0028, mask 0x08
    UPROPERTY() FRootMotionSourceSettings LastAccumulatedSettings;  // 0x0029, size 0x1
    UPROPERTY() FVector_NetQuantize10 LastPreAdditiveVelocity;  // 0x002C, size 0xC
};
