// /Game/BP/Objects/World/Items/Deployables/Prop/BP_Prop_Industrial_Sign_Diamond_D.BP_Prop_Industrial_Sign_Diamond_D_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x730, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Prop_Industrial_Sign_Diamond_D_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Prop_Industrial_Sign_Diamond_D(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
