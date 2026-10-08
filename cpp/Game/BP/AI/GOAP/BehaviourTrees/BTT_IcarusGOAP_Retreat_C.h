// /Game/BP/AI/GOAP/BehaviourTrees/BTT_IcarusGOAP_Retreat.BTT_IcarusGOAP_Retreat_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xEC, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_IcarusGOAP_Retreat_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsRetreated;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusNPCCharacter* NPCRef;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAborting;  // 0x00C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTag RetreatedGameplayTag;  // 0x00C4, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGOAPPropertiesRowHandle RetreatedProperty;  // 0x00CC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RetreatTargetActorKey;  // 0x00E4, size 0x8

    UFUNCTION() void ExecuteUbergraph_BTT_IcarusGOAP_Retreat(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
