// /Game/BP/Objects/World/Items/Weapons/BP_SKItem_AntiRadiation_Injection.BP_SKItem_AntiRadiation_Injection_C
// Derives from: ABP_Syringe_C > ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x590, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SKItem_AntiRadiation_Injection_C : public ABP_Syringe_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0588, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_SKItem_AntiRadiation_Injection(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
