// /Script/Icarus.ShelterSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0xC0, declared in Icarus/Source/Icarus/Subsystems/World/ShelterSubsystem.h

UCLASS()
class UShelterSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY() bool bDebugPrintStats;  // 0x0084, size 0x1
    UPROPERTY() TArray<UShelteredComponent*> ShelteredComponents;  // 0x0088, size 0x10
    UPROPERTY() bool bRunningAsyncPrioritization;  // 0x0098, size 0x1
    UPROPERTY() TArray<UShelteredComponent*> PriorityOrderedShelteredComponents;  // 0x00A0, size 0x10
    UPROPERTY() TArray<TWeakObjectPtr<UShelteredModifierComponent>> QueuedShelteredModifiersForInitialUpdate;  // 0x00B0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TArray<FVector,TSizedDefaultAllocator<32> > PrimaryTraceVectors;  // 0x0038
    TArray<FVector,TSizedDefaultAllocator<32> > SecondaryTraceVectors;  // 0x0048
    const int32 NumVerticalDirections;  // 0x0058
    const int32 NumPrimaryHorizontalDirections;  // 0x005C
    const int32 NumPrimaryDiagonalDirections;  // 0x0060
    const int32 NumSecondaryHorizontalDirections;  // 0x0064
    const int32 NumSecondaryDiagonalDirections;  // 0x0068
    int32 MaxTotalActiveTraces;  // 0x006C, protected
    int32 MaxShelteredComponentActivePerFrame;  // 0x0070, protected
    int32 NumStarvedComponents;  // 0x0074, protected
    FTimerHandle MaxTotalActiveTraceIncreaseTimer;  // 0x0078, protected
    float DeferredInitialUpdateMaxTimeMS;  // 0x0080, protected
};
