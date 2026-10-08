// /Game/BP/Objects/World/Items/Deployables/Signs/BP_Raw_Wood_Sign_Ground.BP_Raw_Wood_Sign_Ground_C
// Derives from: ABP_Sign_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Raw_Wood_Sign_Ground_C : public ABP_Sign_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0798, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Raw_Wood_Sign_Ground(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
