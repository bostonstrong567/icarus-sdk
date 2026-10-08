// /Game/BP/Objects/World/Items/Deployables/Defences/BP_Pistol_Turret.BP_Pistol_Turret_C
// Derives from: ABP_Basic_Turret_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x8C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Pistol_Turret_C : public ABP_Basic_Turret_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x08C0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Pistol_Turret(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
