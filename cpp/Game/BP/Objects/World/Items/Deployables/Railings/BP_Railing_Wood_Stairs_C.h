// /Game/BP/Objects/World/Items/Deployables/Railings/BP_Railing_Wood_Stairs.BP_Railing_Wood_Stairs_C
// Derives from: ABP_Railing_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x738, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Railing_Wood_Stairs_C : public ABP_Railing_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0730, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Railing_Wood_Stairs(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
