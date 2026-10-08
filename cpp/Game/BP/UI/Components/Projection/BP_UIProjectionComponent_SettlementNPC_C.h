// /Game/BP/UI/Components/Projection/BP_UIProjectionComponent_SettlementNPC.BP_UIProjectionComponent_SettlementNPC_C
// Derives from: UBP_UIProjectionComponent_C > UActorComponent > UObject
// size 0x128, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_UIProjectionComponent_SettlementNPC_C : public UBP_UIProjectionComponent_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0120, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_UIProjectionComponent_SettlementNPC(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
