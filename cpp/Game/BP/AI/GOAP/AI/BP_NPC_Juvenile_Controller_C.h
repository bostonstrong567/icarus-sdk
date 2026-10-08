// /Game/BP/AI/GOAP/AI/BP_NPC_Juvenile_Controller.BP_NPC_Juvenile_Controller_C
// Derives from: ABP_NPC_Generic_Controller_C > ABP_IcarusNPCGOAPController_C > AIcarusNPCGOAPController > AIcarusNPCController > AAIController > AController > AActor > UObject
// size 0x584, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Engine)
class ABP_NPC_Juvenile_Controller_C : public ABP_NPC_Generic_Controller_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SleepyModifierUID;  // 0x0580, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool RecalculateGOAPState();  // parameters 0x1
};
