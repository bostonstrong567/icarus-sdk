// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_SledgeHammer_Repair_Hold.BP_ActionableBehaviour_SledgeHammer_Repair_Hold_C
// Derives from: UBP_ActionableBehaviour_Hold_BuildingRepairTool_C > UBP_ActionableBehaviour_Hold_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3E8, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_SledgeHammer_Repair_Hold_C : public UBP_ActionableBehaviour_Hold_BuildingRepairTool_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasRepairStat;  // 0x03D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* NoActionSound;  // 0x03D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName HeadAttachSociketName;  // 0x03E0, size 0x8

    UFUNCTION(BlueprintCallable) void EndHold(bool Success);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_SledgeHammer_Repair_Hold(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Is_Max_Durability(AActor* HitActor, bool& AtMax);  // parameters 0x9, named "Is Max Durability"
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldConsumeActionInput(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xB
};
