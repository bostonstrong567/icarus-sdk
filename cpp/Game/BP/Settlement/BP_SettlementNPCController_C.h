// /Game/BP/Settlement/BP_SettlementNPCController.BP_SettlementNPCController_C
// Derives from: AIcarusNPCController > AAIController > AController > AActor > UObject
// size 0x3E8, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Engine)
class ABP_SettlementNPCController_C : public AIcarusNPCController
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03E0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SettlementNPCController(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) void GetDynamicSubtreesToInject(TMap<FGameplayTag, UBehaviorTree*>& DynamicSubtrees) const;  // parameters 0x50
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
