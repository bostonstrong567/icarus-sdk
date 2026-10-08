// /Script/Engine.ViewportStatsSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Engine/ViewportStatsSubsystem.h

UCLASS()
class UViewportStatsSubsystem : public UWorldSubsystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<FViewportDisplayDelegate,TSizedDefaultAllocator<32> > DisplayDelegates;  // 0x0030, protected
    TArray<TSharedPtr<UViewportStatsSubsystem::FUniqueDisplayData,0>,TSizedDefaultAllocator<32> > UniqueDisplayMessages;  // 0x0040, protected

    UFUNCTION(BlueprintCallable) int32 AddDisplayDelegate(const FViewportDisplayCallback& Delegate);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void AddTimedDisplay(FText Text, FLinearColor Color, float Duration);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) void RemoveDisplayDelegate(int32 IndexToRemove);  // parameters 0x4
};
