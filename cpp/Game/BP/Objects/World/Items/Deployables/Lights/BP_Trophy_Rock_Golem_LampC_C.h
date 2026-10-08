// /Game/BP/Objects/World/Items/Deployables/Lights/BP_Trophy_Rock_Golem_LampC.BP_Trophy_Rock_Golem_LampC_C
// Derives from: ABP_Light_Free_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x790, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Trophy_Rock_Golem_LampC_C : public ABP_Light_Free_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0780, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Bloom;  // 0x0788, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Trophy_Rock_Golem_LampC(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
