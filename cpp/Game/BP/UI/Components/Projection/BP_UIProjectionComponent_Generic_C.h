// /Game/BP/UI/Components/Projection/BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C
// Derives from: UBP_UIProjectionComponent_C > UActorComponent > UObject
// size 0x160, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_UIProjectionComponent_Generic_C : public UBP_UIProjectionComponent_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsAlive;  // 0x0128, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool StatAbilityEnable;  // 0x0129, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DotToSee;  // 0x012C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RangeToDotSee;  // 0x0130, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RangeToCloseCircleSee;  // 0x0134, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DotSeeEnable;  // 0x0138, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CircleCloseSee;  // 0x0139, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* CurrentItem;  // 0x0140, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RightOffset;  // 0x0148, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UpOffset;  // 0x014C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PreviousUpdateEnabled;  // 0x0150, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UW_ProjectionWidget_C> PreviousWidgetClass;  // 0x0158, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_UIProjectionComponent_Generic(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GatherBounds();
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetProjectionLocation();  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnRep_IsAlive();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateEnabled();
};
