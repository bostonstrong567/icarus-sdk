// /Game/BP/UI/Components/Projection/BP_UIProjectionComponent_MountStatus.BP_UIProjectionComponent_MountStatus_C
// Derives from: UBP_UIProjectionComponent_C > UActorComponent > UObject
// size 0x139, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_UIProjectionComponent_MountStatus_C : public UBP_UIProjectionComponent_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AlertTickRate;  // 0x0128, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusMountCharacter* MountCharacterRef;  // 0x0130, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) EMountAction CurrentMountState;  // 0x0138, size 0x1

    UFUNCTION(BlueprintCallable) void AlertTick();
    UFUNCTION() void ExecuteUbergraph_BP_UIProjectionComponent_MountStatus(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast) void ForceProjectionUpdate();
    UFUNCTION(BlueprintCallable) void GetWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnRep_IsEatingOrDrinking();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
