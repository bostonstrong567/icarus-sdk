// /Game/BP/Objects/World/Items/Deployables/Railings/BP_Barbed_Wire.BP_Barbed_Wire_C
// Derives from: ABP_Railing_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x748, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Barbed_Wire_C : public ABP_Railing_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DF_Cylinder2;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* DF_Cylinder1;  // 0x0740, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Barbed_Wire(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
