// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_Geode_Lamp_Cut_Gold_C.BP_Geode_Lamp_Cut_Gold_C_C
// Derives from: ABP_Geode_Lamp_Cut_Gold_A_C > ABP_Light_Free_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x798, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Geode_Lamp_Cut_Gold_C_C : public ABP_Geode_Lamp_Cut_Gold_A_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0790, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Geode_Lamp_Cut_Gold_C(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
