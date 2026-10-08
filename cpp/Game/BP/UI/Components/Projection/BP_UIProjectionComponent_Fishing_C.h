// /Game/BP/UI/Components/Projection/BP_UIProjectionComponent_Fishing.BP_UIProjectionComponent_Fishing_C
// Derives from: UBP_UIProjectionComponent_C > UActorComponent > UObject
// size 0x129, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_UIProjectionComponent_Fishing_C : public UBP_UIProjectionComponent_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAbleToCatch;  // 0x0128, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_UIProjectionComponent_Fishing(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceProjectionUpdate();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFishingRod(ABP_SkeletalItem_Fishing_Rod_C*& FishingRod);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
