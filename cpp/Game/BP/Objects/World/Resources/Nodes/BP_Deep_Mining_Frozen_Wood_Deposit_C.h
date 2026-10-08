// /Game/BP/Objects/World/Resources/Nodes/BP_Deep_Mining_Frozen_Wood_Deposit.BP_Deep_Mining_Frozen_Wood_Deposit_C
// Derives from: ABP_Deep_Mining_Ore_Deposit_C > ABP_Deep_Mining_Ore_Deposit_Base_C > ABP_OreDeposit_C > AResourceDeposit > AIcarusActor > AActor > UObject
// size 0x428, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Deep_Mining_Frozen_Wood_Deposit_C : public ABP_Deep_Mining_Ore_Deposit_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0420, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Deep_Mining_Frozen_Wood_Deposit(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RerollType();
};
