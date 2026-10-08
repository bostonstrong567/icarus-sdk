// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_Raw_Wood_Lamp.BP_Raw_Wood_Lamp_C
// Derives from: ABP_Light_Electric_Base_C > ABP_Deployable_PowerToggleableBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7E8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Raw_Wood_Lamp_C : public ABP_Light_Electric_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x07D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight_Fill;  // 0x07D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x07E0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Raw_Wood_Lamp(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
