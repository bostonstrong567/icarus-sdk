// /Game/BP/Objects/World/Items/Deployables/Railings/BP_Retaining_Wall_Angle_R.BP_Retaining_Wall_Angle_R_C
// Derives from: ABP_Railing_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x738, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Retaining_Wall_Angle_R_C : public ABP_Railing_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0730, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Retaining_Wall_Angle_R(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
