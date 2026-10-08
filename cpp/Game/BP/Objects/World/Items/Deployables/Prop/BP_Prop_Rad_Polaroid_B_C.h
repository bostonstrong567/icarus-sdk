// /Game/BP/Objects/World/Items/Deployables/Prop/BP_Prop_Rad_Polaroid_B.BP_Prop_Rad_Polaroid_B_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x730, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Prop_Rad_Polaroid_B_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Prop_Rad_Polaroid_B(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
