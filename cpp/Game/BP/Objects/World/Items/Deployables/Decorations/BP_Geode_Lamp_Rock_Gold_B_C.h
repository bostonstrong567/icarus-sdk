// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_Geode_Lamp_Rock_Gold_B.BP_Geode_Lamp_Rock_Gold_B_C
// Derives from: ABP_Light_Free_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x788, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Geode_Lamp_Rock_Gold_B_C : public ABP_Light_Free_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0780, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Geode_Lamp_Rock_Gold_B(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
