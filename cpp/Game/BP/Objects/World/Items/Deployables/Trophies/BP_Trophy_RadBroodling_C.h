// /Game/BP/Objects/World/Items/Deployables/Trophies/BP_Trophy_RadBroodling.BP_Trophy_RadBroodling_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x738, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Trophy_RadBroodling_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0730, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Trophy_RadBroodling(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
