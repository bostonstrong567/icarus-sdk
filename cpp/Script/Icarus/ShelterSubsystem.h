// /Script/Icarus.ShelterSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0xC0, declared in Icarus/Source/Icarus/Subsystems/World/ShelterSubsystem.h

UCLASS()
class UShelterSubsystem : public UWorldSubsystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    TArray<FVector,TSizedDefaultAllocator<32> > PrimaryTraceVectors;  // 0x0038, not reflected
    TArray<FVector,TSizedDefaultAllocator<32> > SecondaryTraceVectors;  // 0x0048, not reflected
    const int32 NumVerticalDirections;  // 0x0058, not reflected
    const int32 NumPrimaryHorizontalDirections;  // 0x005C, not reflected
    const int32 NumPrimaryDiagonalDirections;  // 0x0060, not reflected
    const int32 NumSecondaryHorizontalDirections;  // 0x0064, not reflected
    const int32 NumSecondaryDiagonalDirections;  // 0x0068, not reflected
protected:
    int32 MaxTotalActiveTraces;  // 0x006C, not reflected
    int32 MaxShelteredComponentActivePerFrame;  // 0x0070, not reflected
    int32 NumStarvedComponents;  // 0x0074, not reflected
    FTimerHandle MaxTotalActiveTraceIncreaseTimer;  // 0x0078, not reflected
    float DeferredInitialUpdateMaxTimeMS;  // 0x0080, not reflected
    UPROPERTY() bool bDebugPrintStats;  // 0x0084, size 0x1
    UPROPERTY() TArray<UShelteredComponent*> ShelteredComponents;  // 0x0088, size 0x10
    UPROPERTY() bool bRunningAsyncPrioritization;  // 0x0098, size 0x1
    UPROPERTY() TArray<UShelteredComponent*> PriorityOrderedShelteredComponents;  // 0x00A0, size 0x10
    UPROPERTY() TArray<TWeakObjectPtr<UShelteredModifierComponent>> QueuedShelteredModifiersForInitialUpdate;  // 0x00B0, size 0x10
};
