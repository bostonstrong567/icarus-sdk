// /Game/BP/UI/Components/Projection/BP_UIProjectionComponent_Building.BP_UIProjectionComponent_Building_C
// Derives from: UBP_UIProjectionComponent_C > UActorComponent > UObject
// size 0x130, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_UIProjectionComponent_Building_C : public UBP_UIProjectionComponent_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* CurrentActor;  // 0x0128, size 0x8

    UFUNCTION(BlueprintCallable) EViewTraceResultPriority BP_UIProjectionComponent_Building_AutoGenFunc(const FViewTraceResult& Result);  // parameters 0x8D
    UFUNCTION() void ExecuteUbergraph_BP_UIProjectionComponent_Building(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
