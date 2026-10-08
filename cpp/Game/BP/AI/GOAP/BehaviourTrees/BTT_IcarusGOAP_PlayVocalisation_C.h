// /Game/BP/AI/GOAP/BehaviourTrees/BTT_IcarusGoap_PlayVocalisation.BTT_IcarusGOAP_PlayVocalisation_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xB1, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_IcarusGOAP_PlayVocalisation_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EAIVocalisationType VocalisationType;  // 0x00B0, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTT_IcarusGOAP_PlayVocalisation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
