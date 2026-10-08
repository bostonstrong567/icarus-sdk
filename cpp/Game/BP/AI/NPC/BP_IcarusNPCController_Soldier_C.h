// /Game/BP/AI/NPC/BP_IcarusNPCController_Soldier.BP_IcarusNPCController_Soldier_C
// Derives from: AIcarusNPCController > AAIController > AController > AActor > UObject
// size 0x3E8, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Engine)
class ABP_IcarusNPCController_Soldier_C : public AIcarusNPCController
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03E0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_IcarusNPCController_Soldier(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool OnProcessedNoise(AActor* PerceivedActor, FAIStimulus EventStimulus);  // parameters 0x45
    UFUNCTION(BlueprintImplementableEvent) void ReceivePossess(APawn* PossessedPawn);  // parameters 0x8
};
