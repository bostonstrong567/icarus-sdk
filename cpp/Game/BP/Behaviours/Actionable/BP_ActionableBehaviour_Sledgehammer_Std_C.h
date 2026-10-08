// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Sledgehammer_Std.BP_ActionableBehaviour_Sledgehammer_Std_C
// Derives from: UBP_ActionableBehaviour_Sledgehammer_C > UBP_ActionableBehaviour_Generic_Melee_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3F2, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Sledgehammer_Std_C : public UBP_ActionableBehaviour_Sledgehammer_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* RepairingActor;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Building_Base_C* LastBuildingHit;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasRepairStat;  // 0x03D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName HeadAttachSocket;  // 0x03DC, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EPhysicalSurface> LastSurfaceHit;  // 0x03E4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* NoActionSound;  // 0x03E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DidStrike;  // 0x03F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DidRepair;  // 0x03F1, size 0x1

    UFUNCTION(BlueprintCallable) void CanRepair(bool& TraceSuccess, bool& RepairSuccess);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void DoTrace(FHitResult& OutHit, bool& Sucess);  // parameters 0x89
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Sledgehammer_Std(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlayNoActionSound();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldConsumeActionInput(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xB
};
