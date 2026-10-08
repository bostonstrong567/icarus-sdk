// /Game/BP/AI/Basic/Mounts/BP_MountAIController.BP_MountAIController_C
// Derives from: AIcarusNPCController > AAIController > AController > AActor > UObject
// size 0x3E8, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Engine)
class ABP_MountAIController_C : public AIcarusNPCController
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03E0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_MountAIController(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveUnPossess(APawn* UnpossessedPawn);  // parameters 0x8
};
