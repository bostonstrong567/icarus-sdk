// /Script/Engine.TickFunction
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineBaseTypes.h

USTRUCT()
struct FTickFunction
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<ETickingGroup> TickGroup;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<ETickingGroup> EndTickGroup;  // 0x0009, size 0x1
    uint8 : 1 bHighPriority;  // 0x000A, not reflected
    uint8 : 1 bRunOnAnyThread;  // 0x000A, not reflected
    UPROPERTY(EditAnywhere) uint8 bTickEvenWhenPaused : 1;  // 0x000A, mask 0x01
    UPROPERTY() uint8 bCanEverTick : 1;  // 0x000A, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bStartWithTickEnabled : 1;  // 0x000A, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bAllowTickOnDedicatedServer : 1;  // 0x000A, mask 0x08
    UPROPERTY(EditAnywhere) float TickInterval;  // 0x000C, size 0x4
private:
    FTickFunction::ETickState TickState;  // 0x000B, not reflected
    TArray<FTickPrerequisite,TSizedDefaultAllocator<32> > Prerequisites;  // 0x0010, not reflected
    TUniquePtr<FTickFunction::FInternalData,TDefaultDelete<FTickFunction::FInternalData> > InternalData;  // 0x0020, not reflected
};
